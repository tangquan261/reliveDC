//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	WorkingThread.cpp
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#include "HLNetWork.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/fcntl.h>

#include <sys/select.h>
#include <stdio.h>
#include <signal.h>

#include <semaphore.h>

#include "NetWorkDefine.h"
#include "LoginUtil.h"


uint8_t KEY[8];

//消息头加密
const uint8_t TKEY[] = {0xae, 0xbf, 0x56, 0x78, 0xab, 0xcd, 0xef, 0xf1};
uint8_t SEND_KEY[] = {0xae, 0xbf, 0x56, 0x78, 0xab, 0xcd, 0xef, 0xf1};
uint8_t RECV_KEY[] = {0xae, 0xbf, 0x56, 0x78, 0xab, 0xcd, 0xef, 0xf1};
//string qqKey = "tgw_l7_forward\r\nHost:%s:%d\r\n\r\n";


void resetKeys()
{
    memcpy(SEND_KEY, TKEY, 8);
    memcpy(RECV_KEY, TKEY, 8);
}

int g_sockfd = 0;

extern int g_server_port;
extern std::string server_address;




int Connect()
{
    int socketfd = 0;
    
    struct sockaddr_in sa;
    struct hostent *hp;
    
    hp = gethostbyname(server_address.c_str());
    
    if (nullptr == hp)
    {
        return -1;
    }
    
    bzero(&sa, sizeof(sa));
    
    memcpy((char*)&sa.sin_addr, hp->h_addr_list[0], hp->h_length);
    
    sa.sin_family = hp->h_addrtype;
    
    sa.sin_port = HTONS(g_server_port);
    
    socketfd = socket(sa.sin_family, SOCK_STREAM, 0);
    
    if (socketfd < 0)
    {
        return -1;
    }
    
    //设置非堵塞的链接
    int flags = fcntl(socketfd, F_GETFL, 0);
    
    fcntl(socketfd, F_SETFL, flags | O_NONBLOCK);

    connect(socketfd, (sockaddr*)&sa, sizeof(sa));
    
    fd_set fdwrite;
    struct timeval tvSelect;
    
    FD_ZERO(&fdwrite);
    FD_SET(socketfd, &fdwrite);
    
    tvSelect.tv_sec = 10;
    tvSelect.tv_usec = 0;
    
    int retval = select(socketfd+1, nullptr, &fdwrite, NULL, &tvSelect);
    
    if (retval < 0)
    {
        if (errno == EINTR)
        {
            perror("select error");
                   }
        else
        {
            perror("error");
        }
        
        close(socketfd);
        return -1;
    }
    else if(retval == 0)
    {
        perror("select timeout...");
        close(socketfd);
        return -1;
    }
    else
    {
        //设置回堵塞
        flags = fcntl(socketfd, F_GETFL, 0);
        flags &= ~ O_NONBLOCK;
        fcntl(socketfd, F_SETFL, flags);
        
        //设置不被SIGPIPE信号中断，物理链路损坏时才不会导致程序直接被Terminate
        //在网络异常的时候如果程序收到SIGPIRE是会直接被退出的。
        struct sigaction sig;
        sig.sa_handler = SIG_IGN;
        sigaction(SIGPIPE, &sig, NULL);
        
        return socketfd;
    }
}

void EndianSwitch(int size, void* p)
{
    uint8_t* bytes = static_cast<uint8_t*>(p);
    for (int i = 0; i < size/2; ++i)
    {
        std::swap(bytes[i], bytes[size-i-1]);
    }
}

void swapHeader(Packageheader* header)
{
    if(!HOST_IS_BIG_ENDIAN)
    {
        EndianSwitch(sizeof(int16_t), &header->header);
        EndianSwitch(sizeof(int16_t), &header->length);
        EndianSwitch(sizeof(int16_t), &header->checksum);
        EndianSwitch(sizeof(int16_t), &header->code);
        EndianSwitch(sizeof(int32_t), &header->toID);
        EndianSwitch(sizeof(int32_t), &header->extend1);
        EndianSwitch(sizeof(int32_t), &header->extend2);
    }
}

#include "HLSemaphore.h"

extern HLSemaphone g_SendSemaphone;
extern HLSemaphone g_ListenSemaphone;

extern void decrptBytes(uint8_t* src, int length, uint8_t key[8]);
extern google::protobuf::MessageLite * parseMessage(int protocalType, void *buffer, int length);

void * ReadSocketThread(void*p)
{
    HLNetWork *pNetWork = (HLNetWork*)p;
    
    while (true)
    {
        const int headSize = sizeof(Packageheader);
        Packageheader header;
        
        void *bufferTemp = &header;
        int recvBytes = 0;
        
        //读取消息头
        while (recvBytes < headSize)
        {
            ssize_t res = recv(g_sockfd, (uint8_t*)bufferTemp+recvBytes, headSize-recvBytes, 0);
            
            if (res <= 0)
            {
                CCLOG("connect closed by romote host %ld", res);
                
                pNetWork->disconnect(true);
                
                g_ListenSemaphone.nofity_one();
                
                return NULL;
            }
            recvBytes += res;
        }
        
        //根据前面的消息头，读取消息体
        
        Packageheader headTemp = header;
        
        {
            uint8_t key[8];
            memcpy(key, RECV_KEY, 8);
            
            decrptBytes((uint8_t*)&header, headSize, key);
            swapHeader(&header);
        }
        
        CCLOG("header received 0x%04X lenght:%d",header.code, header.length);
        
        if (header.length > 1000)
        {
            continue;
        }
        
        static uint8_t _buffer[1000];
        memset(_buffer, 0, 1000);
        
        if (header.length > sizeof(header))
        {
            //包体有继续要读的内容
            memcpy(_buffer, &headTemp, headSize);
            
            recvBytes = 0;
            
            ssize_t res = 0;
            
            while (recvBytes < header.length - headSize)
            {
                res = recv(g_sockfd, (uint8_t*)_buffer+headSize+recvBytes, header.length-headSize-recvBytes, 0);
                
                if (res <= 0)
                {
                    CCLOG("connect closed by romote host %ld", res);
                    pNetWork->disconnect(true);
                    
                    g_ListenSemaphone.nofity_one();
                    
                    return NULL;
                }

                recvBytes += res;
            }
            
            decrptBytes((uint8_t*)_buffer, header.length, RECV_KEY);
            
            MessageLite *message = parseMessage(header.code, (uint8_t*)_buffer+headSize, header.length-headSize);
            
            
            pNetWork->addResponseQueue(header, message);
            
        }
        else
        {
            decrptBytes((uint8_t*)&header, header.length, RECV_KEY);
            
            pNetWork->addResponseQueue(header, nullptr);
        }
    }
}

#include "HLProtocalType.h"
#include "HLStringUtil.h"

static pthread_t g_listenid = 0;

void * WorkingThread(void *p)
{
    HLNetWork *pNetWork = (HLNetWork*)p;
    
    int reConnectCount = 0;

ReStart:
    
    if (g_listenid != 0)
    {
        ////异常重连，等待读线程释放 ReadSocketThread
        g_ListenSemaphone.wait();
    }
    
    while (true)
    {
        g_sockfd = Connect();
        
        if (g_sockfd <=  0)
        {
            //连续5次失败，则返回关闭
            if (reConnectCount == 5)
            {
                pNetWork->disconnect(true);
                
                return NULL;
            }
            
            reConnectCount++;
            
            usleep(20000);
            
            goto ReStart;
        }
        
        break;
    }
    
    //创建接受网络线程
    int nRet = pthread_create(&g_listenid, NULL, ReadSocketThread, p);
   
    if (-1 == nRet)
    {
        CCLOG("receive thread for read socket error");
        return nullptr;
    }
    
    pNetWork->m_bShouldReconnect = false;
    
    while (true)
    {
        
        DCRequest *request = pNetWork->getRequest();
        
        while (NULL == request)
        {
            g_SendSemaphone.wait();
            
            if (pNetWork->m_bShouldDisconnect)
            {
                //某地方调用了disconnect 导致网络关闭，退出线程
                g_listenid = 0;
                return nullptr;
            }
            
            if (pNetWork->m_bShouldReconnect)
            {
                //需要重新连接网络 goto ReStart
                close(g_sockfd);
                g_sockfd = 0;
                
                goto  ReStart;
            }
            
            request = pNetWork->getRequest();
        }
        
        int nSize = 0;
        static uint8_t buf[1000];
        memset(buf, 0, 1000);
        
        if (request->m_nType == 0xffffffff)
        {
            std::string qqKey = HLStringUtil::Format(qqKey.c_str(), server_address.c_str(), g_server_port);
         
            //buf = (uint8_t*)malloc(qqKey.length());
            
            memcpy(buf, (uint8_t*)qqKey.c_str(), qqKey.length());
        }
        else
        {
            int headSize = sizeof(Packageheader);
            nSize = headSize;
            Packageheader header;
            
            if (nullptr != request->m_pMessage)
            {
                nSize = request->m_pMessage->ByteSize() + headSize;
            }
            
            if(nSize > 1000)
            {
                CCLOG("Send msg error type: %u is too length %u", request->m_nType, nSize);
                
                delete request;
                request = nullptr;
                
                continue;
            }
            
            memset(&header, 0, headSize);
            header.header   = PackageOutHeaderNo;
            header.code     = request->m_nType;
            header.toID     = LoginUtil::getSingleton()->GetUserID();
            
            extern uint32_t getVersionInt();
            
            header.extend1  = request->m_nextend1;
            header.extend2  = getVersionInt();
            
           // buf = (uint8_t*)malloc(nSize);
            
            header.length = nSize;
            
            memcpy(buf, &header, headSize);
            
            if (nullptr != request->m_pMessage)
            {
                request->m_pMessage->SerializeToArray(buf + headSize, nSize - headSize);
            }
            
            Packageheader * headbuf = (Packageheader*)buf;
            extern uint16_t calculateCheckSum(uint8_t* data, int length);
            headbuf->checksum = calculateCheckSum(buf, nSize);
            
            swapHeader(headbuf);
            extern void encryptPacketOut(uint8_t *msg, int length);
            encryptPacketOut(buf, nSize);
            
            if (request->m_nType == U_G_LOGIN_GATEWAY__C)
            {
                memcpy(SEND_KEY, KEY, 8);
                memcpy(RECV_KEY, KEY, 8);
            }
        }
        
        int nIndex = 0;
        
        while (true)
        {
            ssize_t res = send(g_sockfd, buf + nIndex, nSize, 0);
            
            if (res < 0)
            {
                CCLOG("error send");
                pNetWork->disconnect(true);
                break;
            }
            else if(res != nSize)
            {
                nIndex += res;
                
                nSize -= res;
            }
            else
            {
                break;
            }
        }
        
        delete request;
        request = nullptr;
    }

    return 0;
}