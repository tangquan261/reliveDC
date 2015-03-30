//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLNetWork.h
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#ifndef __HL_NET_WORK_H__
#define __HL_NET_WORK_H__

#include <pthread.h>
#include <list>
#include <vector>

#include <google/protobuf/message_lite.h>
#include "NetWorkDefine.h"

const uint16_t PackageOutHeaderNo = 0x71ab;

using namespace google::protobuf;



class DCRequest
{
public:
    DCRequest()
    {
        clear();
    }
    
    DCRequest(unsigned int nType, MessageLite *pMessage):m_nType(nType),m_pMessage(pMessage)
    {
        //m_nExtend = 0;
        //m_nLength = 0;
    }
    
    ~DCRequest()
    {
        if (nullptr != m_pMessage)
        {
            delete m_pMessage;
        }
        
        clear();
    }
    
private:
    void clear()
    {
        m_pMessage = nullptr;
        //m_nExtend = 0;
        //m_nLength = 0;
        m_nType = 0;
    }
    
    //std::vector<uint8_t> m_vecDatas;
    
    unsigned int m_nType;
    //unsigned int m_nLength;
    //uint32_t m_nExtend;
    
    MessageLite * m_pMessage;

};

class DCRequestQueue
{
public:
    DCRequestQueue();
    ~DCRequestQueue();
    
    void insertRequest(DCRequest *pRequest);
    DCRequest * removeRequest();
    
    void clearQueue();

private:
    std::list<DCRequest *>m_ListRequest;
    pthread_mutex_t m_Mutex;
};

class DCResponseQueue
{
public:
    DCResponseQueue();
    ~DCResponseQueue();
    
    void insertRequest(struct ResponseData *pResponse);
    struct ResponseData* removeRequest();
    
    void clearQueue();
    
    bool empty()
    {
        return m_ListRequest.empty();
    }
    
private:
    std::list<ResponseData*>m_ListRequest;
    pthread_mutex_t m_Mutex;
};


class HLNetWork : cocos2d::Node
{
public:
    HLNetWork();
    ~HLNetWork();
    
    static HLNetWork * getInstance();
    
    void addRequest(DCRequest *request);
    
    DCRequest *getRequest();
    
    void reconnect();
    void connect();
    void disconnect(bool berror = false);
    
    bool isConnected();
    
    //网络子线程写数据
    void addResponseQueue(const Packageheader& header, MessageLite* pMessage);
    //主线程update分派数据显示
    virtual void update(float fDelta);
    void notifyNetEvent(const Packageheader& header, MessageLite* pMessage);
    
private:
    bool m_bShouldReConnect;
    bool m_bShouldIsConnect;
    
    pthread_t workingID;
    pthread_mutex_t m_Mutex;
    
    DCRequestQueue m_queue;
    DCResponseQueue m_ResponseQueue;
    static HLNetWork *m_instance;
    
};


#endif /* defined(__Relive__DCNetWork__) */

