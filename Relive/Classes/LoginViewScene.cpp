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
    CSLoader::destroyInstance();
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
    
    rootNode->setScale(0.5);
    
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



