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
    std::string param = StringUtils::format("username=%s&site=%s&ran=%u&udid=%s&idfa=%s", m_userNameID.c_str(), m_stChoosedServer.serverId.c_str(),random,"anysssssdfsf1","");
    
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

void LoginUtil::onLoginResponse(std::string &strMsg, const rapidjson::Value& jsonMap)
{
    if (strMsg.find("value=\"true\"") == std::string::npos)
    {
        CCLOG("LoginResponse error");
        return;
    }
    else if(strMsg.find("message=\"Login Succeed No Visualize\"") != std::string::npos)
    {
        //注册成功，创建角色
        size_t pos1 = strMsg.find("userID=\"");
        pos1+=8;
        size_t pos2 = strMsg.find("\"", pos1);
        m_userID = atoi(std::string(strMsg, pos1, pos2-pos1).c_str());
        return;
    }
    
    int loginType = cocos2d::UserDefault::getInstance()->getIntegerForKey("loginType");
    
    if (loginType != 100 && loginType != 101 && loginType != 153)
    {
        int defaultIndex = UserDefault::getInstance()->getIntegerForKey("accountIndex", 0);
        
        if (defaultIndex < 6)
        {
            int i = 0;
            for (i = 0; i < defaultIndex; i++)
            {
                
                std::string  accountName = UserDefault::getInstance()->getStringForKey(HLStringUtil::Format("account%d", i+1).c_str());
                
                if (!accountName.compare(m_userID))
                {
                    
                    break;
                }
            }
            
            if (i == defaultIndex)
            {
                
                defaultIndex++;
                
                UserDefault::getInstance()->setIntegerForKey("accountIndex", defaultIndex);
                
                UserDefault::getInstance()->setStringForKey(HLStringUtil::Format("account%d", defaultIndex).c_str(), m_userName);
                
            }
        }
        else
        {
            int i = 0;
            
            for (i = 0; i < defaultIndex; i++)
            {
                std::string  accountName = UserDefault::getInstance()->getStringForKey(HLStringUtil::Format("account%d", i+1).c_str());
                
                if (!accountName.compare(m_userName))
                {
                    break;
                }
            }
            
            if (i == defaultIndex)
            {
                UserDefault::getInstance()->setStringForKey("account1", m_userName);
                
                for(int i = 0; i < 5; i++)
                {
                    std::string accountName = UserDefault::getInstance()->getStringForKey(HLStringUtil::Format("account%u",i+1).c_str());
                    
                    UserDefault::getInstance()->setStringForKey(HLStringUtil::Format("account%u",i+2).c_str(), accountName);
                }
            }
        }
    }
    
    extern std::string server_address;
    extern int g_server_port;
    extern std::string ResourceServer_address;
    
    size_t pos1 = strMsg.find("Address=\"");
    pos1 += 9;
    size_t pos2 = strMsg.find("\" ", pos1);
    server_address = std::string(strMsg, pos1, pos2-pos1);
    pos1 = strMsg.find("Port=\"", pos2);
    pos1 += 6;
    pos2 = strMsg.find("\"", pos1);
    g_server_port = atoi(std::string(strMsg, pos1, pos2-pos1).c_str());
    
    pos1 = strMsg.find("Resources=\"");
    pos1 += 11;
    pos2 = strMsg.find("\"", pos1);
    ResourceServer_address = std::string(strMsg, pos1, pos2-pos1);
    
#ifdef COCOS2D_DEBUG
    ResourceServer_address = "http://192.168.1.13/ct/sq_resources/";
#endif

    if (*ResourceServer_address.rbegin() != '/')
    {
        ResourceServer_address += "/";
    }
    //暂不考虑资源更新问题。
    
    //进入主场景
    
    
}

#include <openssl/crypto.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/bn.h>
#include <openssl/rsa.h>
#include "NetWork/HLNetWork.h"

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
                HLStringUtil::GetJsonString(jsonMap, "user", m_userNameID);
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
            size_t pos1 = strMsg.find("ID=\"");
            size_t pos2 = strMsg.find("Result value=\"true\"");
            
            if(std::string::npos == pos1
               && std::string::npos == pos2)
            {
                CCLOG("登陆失败，从新进入登陆界面");
                return;
            }
            else if(std::string::npos == pos1)
            {
                m_userID = "0";
            }
            else
            {
                pos1 += 4;
                pos2 = strMsg.find("\"", pos1);
                
                std::string itemid(strMsg, pos1, pos2-pos1);
                m_userID = itemid;
            }
            
            uint32_t unRandom = arc4random()%10000000;
            
            
            m_tempPassword = HLStringUtil::Format("%u", unRandom * 10000000);
            m_key = HLStringUtil::Format("%u", unRandom);
            
            std::string toencrypt = HLStringUtil::Format("%s|%s|%s|%s", m_userNameID.c_str(), m_Password.c_str(), m_key.c_str(),m_userID.c_str());
            
            std::vector<unsigned char> MODULUS;
            std::vector<unsigned char> e;
            
            CCSafety::decodeBase64("AIu0+SZdBrZr2T5znwXJ0I/SpyntlETpuBrf//4WAMtz0hrYDa+6iD9XhLWcyccjPqs47UGwbDskaGFmS+tEmi7NRQgD3+A/suVfJgaAhWIpk0b2KthG1kTGtMUQF+L8i6AWBnGesAOYryEhVMOukKDlsENpHAzf4ln2SA4EQCKl", MODULUS);
            
            CCSafety::decodeBase64("AQAB",e);
            
            pos1 = strMsg.find("Grade=\"");
            
            if (pos1 != std::string::npos)
            {
                pos1 += 7;
                pos2 = strMsg.find("\"", pos1);
                std::string gradestr = strMsg.substr(pos1, pos2-pos1);
                m_nUserGrade = atoi(gradestr.c_str());
            }
            else
            {
                m_nUserGrade = 0;
            }
            
            RSA *r;
            
            BIGNUM *bne,*bnn;//,*bnd;
            int ret, tlen;
            
            //unsigned  char *encData;
            
            bne = BN_new();
            
            bnn = BN_new();
            BN_bin2bn(&e[0], (int)e.size(), bne);
            BN_bin2bn(&MODULUS[0], (int)MODULUS.size(), bnn);
            
            r = RSA_new();
            r->e=bne;
            r->n=bnn;
            
            tlen =  RSA_size(r);
            unsigned  char encData[128];
            //encData =  (unsigned char *)malloc(tlen);
            bzero(encData, tlen);
            
            //toencrypt = "100000067|89761256462143696784213727312570|1140248|37310061";
            
            ret =  RSA_public_encrypt((int)toencrypt.length(), (const unsigned char *)toencrypt.c_str(), encData, r,  RSA_PKCS1_PADDING);

            if(ret < 0)
            {
                return;
            }
            
            std::string encStr = CCSafety::encodeBase64(encData, ret);
          
            RSA_free(r);
            
            std::string url = m_stChoosedServer.ipAddress;
            std::string serverid = m_stChoosedServer.serverId;
            
            //DCServerDataCenter::serverName = m_stChoosedServer.name;
            
            if (serverid.length() < 1) {
                serverid = "sqtest_0002";
            }
            
            url += "/login?" + HLStringUtil::Format("p=%s&site=%s&client=1&udid=%s&idfa=%s", URL::UrlEncode(encStr).c_str(),serverid.c_str(),"anysssssdfsf1","");
            
            
            HttpRequest* request = new (std::nothrow) HttpRequest();
            request->setUrl(url.c_str());
            request->setRequestType(HttpRequest::Type::GET);
            request->setResponseCallback(CC_CALLBACK_2(LoginUtil::onHttpRequestCompleted, this));
            HttpClient::getInstance()->sendImmediate(request);
            request->setTag("4");
            request->release();
    
            break;
        }
        case 4:
        {
            onLoginResponse(strMsg, jsonMap);
            
            HLNetWork::getInstance()->connect();
        }
        default:
            break;
    }
    
    
}






