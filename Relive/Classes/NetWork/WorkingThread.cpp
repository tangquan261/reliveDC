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

int sockfd = 0;

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
    
    if (sockfd < 0)
    {
        return -1;
    }
    
    //设置非堵塞的链接
    int flags = fcntl(sockfd, F_GETFL, 0);
    
    fcntl(sockfd, F_SETFL, flags | O_NONBLOCK);

    connect(sockfd, (sockaddr*)&sa, sizeof(sa));
    
    fd_set fdwrite;
    struct timeval tvSelect;
    
    FD_ZERO(&fdwrite);
    FD_SET(sockfd, &fdwrite);
    
    tvSelect.tv_sec = 10;
    tvSelect.tv_usec = 0;
    
    int retval = select(sockfd+1, nullptr, &fdwrite, NULL, &tvSelect);
    
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
        
        close(sockfd);
        return -1;
    }
    else if(retval == 0)
    {
        perror("select timeout...");
        close(sockfd);
        return -1;
    }
    else
    {
        //设置回堵塞
        flags = fcntl(sockfd, F_GETFL, 0);
        flags &= ~ O_NONBLOCK;
        fcntl(sockfd, F_SETFL, flags);
        
        //设置不被SIGPIPE信号中断，物理链路损坏时才不会导致程序直接被Terminate
        //在网络异常的时候如果程序收到SIGPIRE是会直接被退出的。
        struct sigaction sig;
        sig.sa_handler = SIG_IGN;
        sigaction(SIGPIPE, &sig, NULL);
        
        return sockfd;
    }
}

void swapHeader(Packageheader* header)
{
    if(!HOST_IS_BIG_ENDIAN)
    {
        NTOHS(header->header);
        NTOHS(header->length);
        NTOHS(header->checksum);
        NTOHS(header->code);
        NTOHLL(header->toID);
        NTOHLL(header->extend1);
        NTOHLL(header->extend2);
        
//        NativeToBigEndian<sizeof(int16_t)>(&header->header);
//        NativeToBigEndian<sizeof(int16_t)>(&header->length);
//        NativeToBigEndian<sizeof(int16_t)>(&header->checksum);
//        NativeToBigEndian<sizeof(int16_t)>(&header->code);
//        NativeToBigEndian<sizeof(int32_t)>(&header->toID);
//        NativeToBigEndian<sizeof(int32_t)>(&header->extend1);
//        NativeToBigEndian<sizeof(int32_t)>(&header->extend2);
    }
    
}

extern sem_t avail;
extern sem_t avail1;

extern void decrptBytes(uint8_t* src, int length, uint8_t key[8]);
extern google::protobuf::MessageLite * parseMessage(int protocalType, void *buffer, int length);

void * ReadSocketThread(void*p)
{
    HLNetWork *pNetWork = (HLNetWork*)p;
    
    while (true)
    {
        const int headSize = sizeof(Packageheader);
        Packageheader header;
        
        void *buffer = &header;
        int recvBytes = 0;
        
        //读取消息头
        while (recvBytes <headSize)
        {
            
            ssize_t res = recv(sockfd, (uint8_t*)buffer+recvBytes, headSize-recvBytes, 0);
            
            if (res <= 0)
            {
                CCLOG("connect closed by romote host %ld", res);
                
                pNetWork->disconnect(true);
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
        
        CCLOG("header received 0x%04X  ",header.code);
        
        if (header.length > sizeof(header))
        {
            //包体有继续要读的内容
            buffer = malloc(header.length);
            
            memcpy(buffer, &headTemp, headSize);
            
            recvBytes = 0;
            
            ssize_t res = 0;
            
            while (recvBytes < header.length - headSize)
            {
                res = recv(sockfd, (uint8_t*)buffer+headSize+recvBytes, header.length-headSize-recvBytes, 0);
                
                if (res <= 0)
                {
                    CCLOG("connect closed by romote host %ld", res);
                    pNetWork->disconnect(true);
                    return NULL;
                }

                recvBytes += res;
            }
            
            decrptBytes((uint8_t*)buffer, header.length, RECV_KEY);
            
            MessageLite *message = parseMessage(header.code, (uint8_t*)buffer+headSize, header.length-headSize);
            
            free(buffer);
            
            pNetWork->addResponseQueue(header, message);
            
            
        }
        else
        {
            decrptBytes((uint8_t*)buffer, header.length, RECV_KEY);
            
            pNetWork->addResponseQueue(header, nullptr);
        }
    }
}

#include "HLProtocalType.h"

void * WorkingThread(void *p)
{
    HLNetWork *pNetWork = (HLNetWork*)p;
    
    static pthread_t listenid = 0;
    
    int reConnectCount = 0;
    
    while (true)
    {
        sockfd = Connect();
        
        if (sockfd <  0)
        {
            if (reConnectCount == 2)
            {
                pNetWork->disconnect(true);
                
                return NULL;
            }
            
            reConnectCount++;
            usleep(20000);
        }
        break;
    }
    
    if (listenid)
    {
        //等待信号量
        sem_wait(&avail1);
    }
    
    int nRet = pthread_create(&listenid, NULL, ReadSocketThread, p);
   
    if (-1 == nRet)
    {
        return NULL;
    }
    
    
    while (true)
    {
        sem_wait(&avail);
        
        DCRequest *request = pNetWork->getRequest();
        
        if (nullptr == request)
        {
            break;
        }
        int nSize = 0;
        uint8_t *buf = nullptr;
        
        if (request->m_nType == 0xffffffff)
        {
            
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
            
            memset(&header, 0, headSize);
            header.header   = PackageOutHeaderNo;
            header.code     = request->m_nType;
            header.toID     = LoginUtil::getSingleton()->GetUserID();
            
            extern uint32_t getVersionInt();
            
            header.extend1  = request->m_nextend1;
            header.extend2  = getVersionInt();
            
            buf = (uint8_t*)malloc(nSize);
            
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
        
        while (true)
        {
            ssize_t res = send(sockfd, buf, nSize, 0);
            
            if (res < 0)
            {
                CCLOG("error send");
                pNetWork->disconnect();
            }
            else if(res != nSize)
            {
                nSize -= res;
                buf+=res;
            }
            else
            {
                break;
            }
        }
        
        free(buf);
        delete request;
        request = nullptr;
    }

    return 0;
}