//
//  LoginUtil.cpp
//  Relive
//
//  Created by tq on 15/3/6.
//
//

#include "LoginUtil.h"
#include <stdlib.h>
#include <stdio.h>
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"
#include "CommonDefine.h"
#include "HLStringUtil.h"

#include "CCSafety.h"
#include "URL.h"

#include "BoxMsg.pb.h"
#include "Config_info.hpp"

using namespace cocos2d;
using namespace cocos2d::network;
using namespace com::road::yishi::proto::box;

extern config_msg g_configMsg;

LoginUtil::LoginUtil()
{
    Config_info info;
    
    Config_info::findDataById(info, 1);
    
    m_vecServerNameList.clear();
    m_vecUserServerNameList.clear();
}

LoginUtil::~LoginUtil()
{
    m_vecServerNameList.clear();
    m_vecUserServerNameList.clear();
}

void LoginUtil::ApplyServerList()
{
    std::string url;
    
    m_userName = "xixihaha1";
    std::string password = "111111";
    
    if (m_userName.length() < 1)
    {
        // 去除游客登陆
        url = StringUtils::format("%s/v2/user/shengQuLoginPlatformByUdid?appKey=%s&udid=%s&idfa=%s",g_configMsg.strSNSUrl.c_str(),g_configMsg.strAppKey.c_str(),"anysssssdfsf1","");
    }
    else {
        url = StringUtils::format("%s/v2/user/shengQuLoginPlatform?email=%s&password=%s&appKey=%s&udid=%s&idfa=%s&platformType=%s",g_configMsg.strSNSUrl.c_str(),m_userName.c_str(),CCSafety::ToMD5String((const char *)password.c_str()).c_str(),g_configMsg.strAppKey.c_str(),"anysssssdfsf1","","");
    }
    
    
    HttpRequest* request = new (std::nothrow) HttpRequest();
    request->setUrl(url.c_str());
    request->setRequestType(HttpRequest::Type::GET);
    request->setResponseCallback(CC_CALLBACK_2(LoginUtil::onHttpRequestCompleted, this));
    HttpClient::getInstance()->sendImmediate(request);
    request->setTag("1");
    request->release();
}

void LoginUtil::ApplyEnterGame()
{
    std::string url;
    
    m_stChoosedServer = m_vecServerNameList[0];
    
    url = StringUtils::format("%s/v2/user/shengQuLoginServer?site=%s&appKey=%s&udid=%s&sessionId=%s&idfa=%s",g_configMsg.strSNSUrl.c_str(),m_vecServerNameList[0].serverId.c_str(),g_configMsg.strAppKey.c_str(),"anysssssdfsf1",m_strSessionID.c_str(),"");
    
    HttpRequest* request = new (std::nothrow) HttpRequest();
    request->setUrl(url.c_str());
    request->setRequestType(HttpRequest::Type::GET);
    request->setResponseCallback(CC_CALLBACK_2(LoginUtil::onHttpRequestCompleted, this));
    HttpClient::getInstance()->sendImmediate(request);
    request->setTag("2");
    request->release();
}

void LoginUtil::ApplySelectList()
{
    
    uint32_t random = arc4random()%10000000;
    std::string param = StringUtils::format("username=%s&site=%s&ran=%u&udid=%s&idfa=%s", m_userID.c_str(), m_stChoosedServer.serverId.c_str(),random,"anysssssdfsf1","");
    
    std::string url = m_stChoosedServer.ipAddress;
    
    url += "/loginselectlist?";
    url += param;

    
    HttpRequest* request = new (std::nothrow) HttpRequest();
    request->setUrl(url.c_str());
    request->setRequestType(HttpRequest::Type::GET);
    request->setResponseCallback(CC_CALLBACK_2(LoginUtil::onHttpRequestCompleted, this));
    HttpClient::getInstance()->sendImmediate(request);
    request->setTag("3");
    request->release();

}

void LoginUtil::LoadServerList(rapidjson::Value &jsonMap)
{
    int nCode = 0;
    
    if(!HLStringUtil::GetJsonInt(jsonMap, "code", nCode))
    {
        return;
    }
 
    if (nCode != 1000)
    {
        return;
    }
    
    
    if (!HLStringUtil::GetJsonString(jsonMap, "sessionId", m_strSessionID))
    {
        return;
    }

    m_strSessionID = jsonMap["sessionId"].GetString();
    
    
    if (jsonMap.HasMember("serverList"))
    {
        rapidjson::Value& array = jsonMap["serverList"];
        
        int nLen = array.Size();
        
        for (int i = 0; i < nLen; i++)
        {
            rapidjson::Value& item = array[i];
            ServerName serverName;
            updateOneServer(serverName,item);
            m_vecServerNameList.push_back(serverName);
        }
    }
    
    if (jsonMap.HasMember("usedServerIdList"))
    {
        rapidjson::Value & array = jsonMap["usedServerIdList"];
        
        for (int i = 0; i < array.Size(); i++)
        {
            rapidjson::Value& item = array[i];
            
            ServerName *p =  GetServerByServerName(item.GetString());
            
            if (NULL != p)
            {
                m_vecUserServerNameList.push_back(*p);
            }
        }
    }
}

void LoginUtil::updateOneServer(ServerName &serverName,rapidjson::Value& doc)
{
    HLStringUtil::GetJsonInt(doc, "id", serverName.id_ );
    HLStringUtil::GetJsonInt(doc, "isRecommend", serverName.isRecommend );
    HLStringUtil::GetJsonInt(doc, "status", serverName.status);
    HLStringUtil::GetJsonInt(doc, "appid", serverName.appid);
    
    HLStringUtil::GetJsonString(doc, "name", serverName.name );
    HLStringUtil::GetJsonString(doc, "description", serverName.description);
    HLStringUtil::GetJsonString(doc, "ipAddress", serverName.ipAddress);
    HLStringUtil::GetJsonString(doc, "serverId", serverName.serverId);
    HLStringUtil::GetJsonString(doc, "purchaseDeliveryUrl", serverName.purchaseDeliveryUrl);
    HLStringUtil::GetJsonString(doc, "userValidateUrl", serverName.userValidateUrl);
    HLStringUtil::GetJsonString(doc, "vipRefreshNotifyUrl", serverName.vipRefreshNotifyUrl);
    
}

ServerName* LoginUtil::GetServerByServerName(const std::string strName)
{
    std::vector<ServerName>::iterator iter = m_vecServerNameList.begin();
    
    for (; iter != m_vecServerNameList.end(); iter++)
    {
        ServerName &item = *iter;
        
        if (item.serverId == strName)
        {
            return &item;
        }
    }
    return NULL;
}

void LoginUtil::onHttpRequestCompleted(cocos2d::network::HttpClient *sender, cocos2d::network::HttpResponse *response)
{
    if (NULL == response)
    {
        return;
    }
    
    if (!response->isSucceed())
    {
        CCLOG("http error %s,  %s",response->getHttpRequest()->getTag(), response->getErrorBuffer());
        return;
    }
    
    response->setResponseDataString(&(*response->getResponseData())[0], response->getResponseData()->size());
    
    CCLOG("http 返回成功 : Tag: %s data:%s",response->getHttpRequest()->getTag(), response->getResponseDataString());
    
    DoTaskRequest(atoi(response->getHttpRequest()->getTag()), response);
}


void LoginUtil::DoTaskRequest(int nType, cocos2d::network::HttpResponse *response)
{
    std::string strMsg = response->getResponseDataString();
    rapidjson::Document doc;
    
    doc.Parse<rapidjson::kParseDefaultFlags>(strMsg.c_str());
    
    rapidjson::Value &jsonMap=doc;
    
    switch (nType)
    {
        case 1:
        {
            if (strMsg.empty())
            {
                return;
            }
            int nCodeNum = 0;
            
            if(!HLStringUtil::GetJsonInt(jsonMap, "code", nCodeNum))
            {
                return;
            }
            
            if (1000 != nCodeNum)
            {
                CCLOG("error : %s", strMsg.c_str());
            }
            
            LoginUtil::getSingleton()->LoadServerList(jsonMap);
            
            break;
        }
        case 2:
        {
            int nCode = 0;
            std::string strMessage;
            
            HLStringUtil::GetJsonInt(jsonMap, "code", nCode);
            HLStringUtil::GetJsonString(jsonMap, "message", strMessage);
            
            if (nCode > 2000 || nCode != 1000)
            {
                CCLOG("error code id %u, message: %s",nCode, strMessage.c_str());
            }
            else if(!doc.HasMember("user"))
            {
                CCLOG("error 服务器出现异常，请稍后重试");
            }
            else
            {
                HLStringUtil::GetJsonString(jsonMap, "user", m_userID);
                HLStringUtil::GetJsonString(jsonMap, "key", m_Password);
                
                if (nCode == 1000)
                {
                    ApplySelectList();
                }
            }
            break;
        }
        case 3:
        {
            if(std::string::npos == strMsg.find("ID=\"")
               && std::string::npos == strMsg.find("Result value=\"true\""))
            {
                CCLOG("登陆失败，从新进入登陆界面");
            }
            else if(std::string::npos == strMsg.find("ID=\""))
            {
                m_userID = "0";
            }
            
            break;
        }
        default:
            break;
    }
    
    
}

