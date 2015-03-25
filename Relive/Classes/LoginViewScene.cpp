///
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	LoginViewScene.cpp
//	Author      :	tq
//	Date        :   2015-03-03
//	Description :	登陆场景
//
#include <vector>
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "extensions/cocos-ext.h"


#include "LoginViewScene.h"
#include "CommonDefine.h"


#include "LoginUtil.h"

#include "CustomRootNode.h"
#include "CustomRootNodeReader.h"

using namespace cocos2d;
using namespace cocostudio;
using namespace ui;
using namespace cocos2d::network;

extern config_msg g_configMsg;


Scene* LoginViewScene::createScene()
{
    
    auto scene = Scene::create();
    
    scene->addChild(LoginViewScene::create());
    
    return scene;
}


LoginViewScene::LoginViewScene()
{
    clear();
}

LoginViewScene::~LoginViewScene()
{

}

void LoginViewScene::clear()
{
    
}

bool LoginViewScene::init()
{
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    CSLoader* instance = CSLoader::getInstance();
    instance->registReaderObject("CustomRootNodeReader",
                                 (ObjectFactory::Instance)CustomRootNodeReader::getInstance);
    
    auto rootNode = CSLoader::createNode("Layer.csb");
    
    //Size visibleSize = Director::getInstance()->getVisibleSize();
    //Vec2 origin = Director::getInstance()->getVisibleOrigin();
    //auto rootNode = CSLoader::createNode("Layer.csb");
    rootNode->setScale(0.5);
    
//    Button* pBtnEnter = static_cast<Button*>(rootNode->getChildByName("Btn_EnterGame"));
//    pBtnEnter->addClickEventListener(CC_CALLBACK_1(LoginViewScene::onActionEnterGame, this));
//    
//    Button* pBtnLogin = static_cast<Button*>(rootNode->getChildByName("dengluzhuce_bg_di_4")->getChildByName("Btn_Login"));
//    
//    pBtnLogin->addClickEventListener(CC_CALLBACK_1(LoginViewScene::onActionLogin, this));
//    
//    
//    Button* pBtnSelect = static_cast<Button*>(rootNode->getChildByName("dengluzhuce_bg_di_3")->getChildByName("Btn_Select"));
//    
//    pBtnSelect->addClickEventListener(CC_CALLBACK_1(LoginViewScene::onActionSelectServer, this));
//    
    
    addChild(rootNode);
    
    LoginUtil::getSingleton()->ApplyServerList();

    return true;
}


void LoginViewScene::onActionLogin(Ref *pSender)
{
    CCLOG("onActionLogin");
    
    
}

void LoginViewScene::onActionEnterGame(Ref *pSender)
{
    CCLOG("onActionEnterGame");
    
    LoginUtil::getSingleton()->ApplyEnterGame();
}



void LoginViewScene::onActionSelectServer(Ref *pSender)
{
    CCLOG("onActionSelectServer");

}

void LoginViewScene::menuCloseCallback(Ref* pSender)
{
    SceneReader::getInstance()->destroyInstance();
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}



