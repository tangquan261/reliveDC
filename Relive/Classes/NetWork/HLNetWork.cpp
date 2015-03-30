//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLNetWork.cpp
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#include "HLNetWork.h"
#include <string>
#include <semaphore.h>

int g_server_port = 5000;
std::string server_address;



sem_t avail;
sem_t avail1;

DCRequestQueue::DCRequestQueue()
{
    pthread_mutex_init(&m_Mutex, NULL);
}

DCRequestQueue::~DCRequestQueue()
{
    pthread_mutex_destroy(&m_Mutex);
}

void DCRequestQueue::insertRequest(DCRequest *pRequest)
{
    pthread_mutex_lock(&m_Mutex);
    
    m_ListRequest.push_back(pRequest);
    
    pthread_mutex_unlock(&m_Mutex);
}

DCRequest * DCRequestQueue::removeRequest()
{
    DCRequest *pRequest = NULL;
    
    pthread_mutex_lock(&m_Mutex);
    
    if (!m_ListRequest.empty())
    {
        pRequest = m_ListRequest.front();
        m_ListRequest.pop_front();
    }
    
    pthread_mutex_unlock(&m_Mutex);

    return pRequest;
}

void DCRequestQueue::clearQueue()
{
    pthread_mutex_lock(&m_Mutex);
    
    std::list<DCRequest *>::iterator iter = m_ListRequest.begin();
    
    for (; iter != m_ListRequest.end(); iter++)
    {
        delete (*iter);
    }
    
    m_ListRequest.clear();
    
    pthread_mutex_unlock(&m_Mutex);
}

DCResponseQueue::DCResponseQueue()
{
     pthread_mutex_init(&m_Mutex, NULL);
}

DCResponseQueue::~DCResponseQueue()
{
    pthread_mutex_destroy(&m_Mutex);
}

void DCResponseQueue::insertRequest(ResponseData *pResponse)
{
    pthread_mutex_lock(&m_Mutex);
    
    m_ListRequest.push_back(pResponse);
    
    pthread_mutex_unlock(&m_Mutex);
}

ResponseData* DCResponseQueue::removeRequest()
{
    pthread_mutex_lock(&m_Mutex);
    
    ResponseData* pResonse = nullptr;
    
    if (!m_ListRequest.empty())
    {
        pResonse = m_ListRequest.front();
        m_ListRequest.pop_front();
    }
    
    pthread_mutex_unlock(&m_Mutex);
    
    return pResonse;
}

void DCResponseQueue::clearQueue()
{
    pthread_mutex_lock(&m_Mutex);
    
    std::list<ResponseData*>::iterator iter = m_ListRequest.begin();
    
    for (; iter != m_ListRequest.end(); iter++)
    {
        delete (*iter);
    }
    
    m_ListRequest.clear();
    
    pthread_mutex_unlock(&m_Mutex);
}




HLNetWork * HLNetWork::m_instance = NULL;

HLNetWork::HLNetWork()
{
    this->onEnter();
    this->onEnterTransitionDidFinish();
    
    this->scheduleUpdate();
    
    m_bShouldReConnect = false;
    m_bShouldIsConnect = false;
}

HLNetWork::~HLNetWork()
{
    this->unscheduleUpdate();
    
    m_bShouldReConnect = false;
    m_bShouldIsConnect = false;
}

HLNetWork * HLNetWork::getInstance()
{
    if (NULL == m_instance)
    {
        m_instance = new HLNetWork();
    }
    
    return m_instance;
}

void HLNetWork::addRequest(DCRequest *request)
{
    if (NULL != request)
    {
        m_queue.insertRequest(request);
    }
}

DCRequest *HLNetWork::getRequest()
{
    return m_queue.removeRequest();
}

void HLNetWork::reconnect()
{
    
}

void HLNetWork::connect()
{
    extern void resetKeys();
    resetKeys();
    
    m_queue.clearQueue();
   
    if (m_bShouldIsConnect)
    {
        sem_close(&avail);
        sem_close(&avail1);
    }
    
    sem_open("HLavail", O_CREAT|O_EXCL, 0666, 1);
    sem_open("HLavail1", O_CREAT|O_EXCL, 0666, 1);

    extern void * WorkingThread(void *p);
    
    pthread_create(&workingID, NULL, WorkingThread, this);
    

}

void HLNetWork::addResponseQueue(const Packageheader& header, MessageLite* pMessage)
{
    //网络数据子线程创建，主线程释放。
    ResponseData  *pData = new ResponseData();
    pData->header = header;
    pData->pMessage = pMessage;
    
    m_ResponseQueue.insertRequest(pData);

}

extern int32_t g_SysTime;

void HLNetWork::update(float fDelta)
{
    ResponseData* pResonse = nullptr;
    
    g_SysTime = time(NULL);
    
    int i = 0;
    
    while (!m_ResponseQueue.empty() && i++ < 100)
    {
        pResonse =  m_ResponseQueue.removeRequest();
        
        if (nullptr != pResonse)
        {
            notifyNetEvent(pResonse->header, pResonse->pMessage);
            
            delete pResonse;
            pResonse = nullptr;
        }
    }
    
}

#include "HLServerDataManager.h"
#include "UIServerManager.h"

void HLNetWork::notifyNetEvent(const Packageheader& header, MessageLite* pMessage)
{
    HLServerDataManager::getSingleton()->parseResponse(header.code, pMessage);
 
    //分发给有注册过的UI处理网络消息
    UIServerManager::getSingleton()->notifyNetEvent(header, pMessage);
    
}

void HLNetWork::disconnect(bool berror)
{
    
}

bool HLNetWork::isConnected()
{
    extern int sockfd;
    return sockfd !=  0;
}


