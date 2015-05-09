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


#include "HLTiledMapDraw.h"
#include "HLMapDataLoader.h"
#include "HLPathFinder.h"


#include "TiledMapDrawTest.h"



using namespace cocos2d;
using namespace cocostudio;
using namespace ui;
using namespace cocos2d::network;

extern config_msg g_configMsg;

LoginViewScene * LoginViewScene::m_pInstance = NULL;

Scene* LoginViewScene::createScene()
{
    
    auto scene = Scene::create();
    
    m_pInstance = LoginViewScene::create();
    scene->addChild(m_pInstance);
    
    return scene;
}


LoginViewScene::LoginViewScene()
{
    clear();
}

LoginViewScene::~LoginViewScene()
{
    CSLoader::destroyInstance();
    m_pInstance = NULL;
}

void LoginViewScene::clear()
{
    
}

void LoginViewScene::draw(Renderer* renderer, const Mat4 &transform, uint32_t flags)
{
    Layer::draw(renderer, transform, flags);
    
//    Image p;
//    p.initWithImageFile("CloseNormal.png");
//    
//    Texture2D p1;
//    p1.initWithImage(&p);
    
   // p1.drawAtPoint(Point(50,110));
    
}

bool LoginViewScene::init()
{
    //HLTiledMapDraw * p = new HLTiledMapDraw();
    //p->RegisterScene(100);
    
    TiledMapDrawTest *p = new TiledMapDrawTest();
    
    p->RegisterScene(10000);
    
    this->addChild(p);
    
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    CSLoader* instance = CSLoader::getInstance();
    instance->registReaderObject("CustomRootNodeReader",
                                 (ObjectFactory::Instance)CustomRootNode_Reader::getInstance);
    
    auto rootNode = CSLoader::createNode("Layer.csb");
    
    rootNode->setScale(0.5);
    
    //addChild(rootNode);
    
    LoginUtil::getSingleton()->ApplyServerList();

    return true;
}

