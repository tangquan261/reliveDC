//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	LoginViewScene.h
//	Author      :	tq
//	Date        :   2015-03-03
//	Description :	登陆场景
//

#ifndef __RL_RELIVE_LOGINVIEW_SCENE_H__
#define __RL_RELIVE_LOGINVIEW_SCENE_H__

#include "network/HttpClient.h"

class LoginViewScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    LoginViewScene();
    ~LoginViewScene();
    
    void clear();

    virtual bool init();

    void onActionLogin(Ref *pSender);
    void onActionEnterGame(Ref *pSender);
    void onActionSelectServer(Ref *pSender);
    
    
    
    void onHttpRequestCompleted(cocos2d::network::HttpClient *sender, cocos2d::network::HttpResponse *response);
    
    
    void DoTaskRequest(int nType, cocos2d::network::HttpResponse *response);
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    CREATE_FUNC(LoginViewScene);
};


#endif