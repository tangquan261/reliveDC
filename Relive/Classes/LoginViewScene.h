//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	LoginViewScene.h
//	Author      :	tq
//	Date        :   2015-03-03
//	Description :	登陆场景
//

#ifndef __RL_RELIVE_LOGINVIEW_SCENE_H__
#define __RL_RELIVE_LOGINVIEW_SCENE_H__

#include "cocostudio/WidgetCallBackHandlerProtocol.h"

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
    
    
    virtual cocos2d::ui::Widget::ccWidgetTouchCallback onLocateTouchCallback(const std::string &callBackName);
    virtual cocos2d::ui::Widget::ccWidgetClickCallback onLocateClickCallback(const std::string &callBackName);
    virtual cocos2d::ui::Widget::ccWidgetEventCallback onLocateEventCallback(const std::string &callBackName);
    
    
  
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    CREATE_FUNC(LoginViewScene);
};


#endif