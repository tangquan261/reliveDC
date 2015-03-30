//
//  LoginUtil.h
//  Relive
//
//  Created by tq on 15/3/6.
//
//

#ifndef __Relive__LoginUtil__
#define __Relive__LoginUtil__

#include <stdio.h>
#include <stdlib.h>
#include <vector>

#include "extensions/cocos-ext.h"
#include "network/HttpClient.h"

#include "HLSingleton.h"

struct ServerName
{
    ServerName()
    {
        clear();
    }
    
    ~ServerName()
    {
        clear();
    }
    
    void clear()
    {
        memset(this, 0, sizeof(*this));
    }
    
    std::string name;
    int id_;
    std::string description;
    int status;
    std::string ipAddress;
    std::string serverId;
    int appid;
    std::string purchaseDeliveryUrl;
    std::string userValidateUrl;
    std::string vipRefreshNotifyUrl;
    int isRecommend;
};

class LoginUtil : public HLSingleton<LoginUtil>
{
public:
    LoginUtil();
    ~LoginUtil();
    
    void LoadServerList(rapidjson::Value &jsonMap);
    
    //http请求服务器列表
    void ApplyServerList();
    //http请求
    void ApplyEnterGame();
    //Apply
    void ApplySelectList();
    
    void ApplyTureSelect();
    
    int GetUserID()
    {
        return atoi(m_userID.c_str());
    }
private:
    
    void onLoginResponse(std::string &strMsg ,const rapidjson::Value& jsonMap);
    
    std::vector<ServerName> m_vecServerNameList;
    std::vector<ServerName> m_vecUserServerNameList;
    std::string m_strSessionID;
    
    std::string m_userName;
    std::string m_userID;
    std::string m_Password;
    
    ServerName m_stChoosedServer;
    
    
    std::string m_tempPassword;
    std::string m_key;
    int  m_nUserGrade;
    
    void onHttpRequestCompleted(cocos2d::network::HttpClient *sender, cocos2d::network::HttpResponse *response);
    
    void DoTaskRequest(int nType, cocos2d::network::HttpResponse *response);
    
    
    void updateOneServer(ServerName &serverName,rapidjson::Value& doc);
    
    ServerName* GetServerByServerName(const std::string strName);
};

#endif /* defined(__Relive__LoginUtil__) */
