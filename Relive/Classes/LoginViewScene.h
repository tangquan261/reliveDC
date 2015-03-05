//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	LoginViewScene.h
//	Author      :	tq
//	Date        :   2015-03-03
//	Description :	登陆场景
//

#ifndef __RL_RELIVE_LOGINVIEW_SCENE_H__
#define __RL_RELIVE_LOGINVIEW_SCENE_H__


class LoginViewScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    LoginViewScene();
    ~LoginViewScene();
    
    void clear();

    virtual bool init();
    
    
     void menuCloseCallback(cocos2d::Ref* pSender);
    
    CREATE_FUNC(LoginViewScene);
};


#endif