//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	UIServerManager.h
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#ifndef __Relive__UIServerManager__
#define __Relive__UIServerManager__

#include <stdio.h>
#include "NetWorkDefine.h"
#include <google/protobuf/message_lite.h>
#include <list>
#include "HLSingleton.h"

using namespace google::protobuf;

class UIServerManager;

class UIServerInterface
{
public:
    UIServerInterface();
    virtual ~UIServerInterface();
    
    virtual void onResponse(const Packageheader& header, MessageLite* pMessage) = 0;
    
    inline int getRegisterID()
    {
        return m_nRegisterID;
    }
    
private:
    int m_nRegisterID;
    
};


class UIServerManager : public HLSingleton<UIServerManager>
{
public:
    UIServerManager();
    ~UIServerManager();
    
    void clear();
    
    void RegisterUI(UIServerInterface *p);
    
    void UnregisterUI(UIServerInterface *p);
    
    void notifyNetEvent(const Packageheader& header, MessageLite* pMessage);
private:

    list<UIServerInterface*> m_listUIServers;
    
    typedef list<UIServerInterface*>::iterator UI_SERVER_ITER;
    map<int, UI_SERVER_ITER> m_mapUIServers;
    
};

#endif /* defined(__Relive__UIServerManager__) */

