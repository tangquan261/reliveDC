//
//  UIServerManager.cpp
//  Relive
//
//  Created by tq on 15/3/29.
//
//

#include "UIServerManager.h"

extern int64_t GetGUID();

UIServerInterface::UIServerInterface()
{
    m_nRegisterID = GetGUID();
    
    UIServerManager::getSingleton()->RegisterUI(this);
    
}

UIServerInterface::~UIServerInterface()
{
    UIServerManager::getSingleton()->UnregisterUI(this);
}


UIServerManager::UIServerManager()
{
    clear();
}

UIServerManager::~UIServerManager()
{
    clear();
}

void UIServerManager::clear()
{
    m_listUIServers.clear();
    m_mapUIServers.clear();
}

void UIServerManager::RegisterUI(UIServerInterface *p)
{
    if( m_mapUIServers.end() == m_mapUIServers.find(p->getRegisterID()) )
    {
        list<UIServerInterface*>::iterator iter =  m_listUIServers.insert(m_listUIServers.end(), p);
        
        m_mapUIServers.insert(make_pair(p->getRegisterID(), iter));
    }
    
}

void UIServerManager::UnregisterUI(UIServerInterface *p)
{
    map<int64_t, UI_SERVER_ITER>::iterator iter =  m_mapUIServers.find(p->getRegisterID());
    
    if( m_mapUIServers.end() != iter)
    {
        m_listUIServers.erase(iter->second);
        
        m_mapUIServers.erase(iter);
    }
}

void UIServerManager::notifyNetEvent(const Packageheader& header, MessageLite* pMessage)
{
    list<UIServerInterface*>::iterator iter = m_listUIServers.begin();
    
    for (; iter != m_listUIServers.end(); iter++)
    {
        UIServerInterface* &UIServer = *iter;
        
        UIServer->onResponse(header, pMessage);
    }

}