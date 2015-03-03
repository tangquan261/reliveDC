///
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	LoginViewScene.cpp
//	Author      :	tq
//	Date        :   2015-03-03
//	Description :	登陆场景
//

#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

#include "LoginViewScene.h"

using namespace cocos2d;
using namespace cocostudio;
using namespace ui;

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
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    

    
    std::string  _filePath = "BackgroundComponentTest/BackgroundComponentTest.json";
    auto _rootNode = SceneReader::getInstance()->createNodeWithSceneFile(_filePath.c_str());
    // add a label shows "Hello World"
    // create and initialize a label
    _rootNode->setAnchorPoint(Vec2(0 ,0));
    _rootNode->setPosition(Vec2(120, 80));
    _rootNode->setScale(0.5);
    this->addChild(_rootNode);
    
    
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(LoginViewScene::menuCloseCallback, this));
    
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
    return true;
}


void LoginViewScene::menuCloseCallback(Ref* pSender)
{
    SceneReader::getInstance()->destroyInstance();
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}



