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

#include "CCSafety.h"


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
    
    //Size visibleSize = Director::getInstance()->getVisibleSize();
    //Vec2 origin = Director::getInstance()->getVisibleOrigin();
    auto rootNode = CSLoader::createNode("Layer.csb");
    rootNode->setScale(0.5);
    
    Button* pBtnEnter = static_cast<Button*>(rootNode->getChildByName("Btn_EnterGame"));
    pBtnEnter->addClickEventListener(CC_CALLBACK_1(LoginViewScene::onActionEnterGame, this));
    
    Button* pBtnLogin = static_cast<Button*>(rootNode->getChildByName("dengluzhuce_bg_di_4")->getChildByName("Btn_Login"));
    
    pBtnLogin->addClickEventListener(CC_CALLBACK_1(LoginViewScene::onActionLogin, this));
    
    
    Button* pBtnSelect = static_cast<Button*>(rootNode->getChildByName("dengluzhuce_bg_di_3")->getChildByName("Btn_Select"));
    
    pBtnSelect->addClickEventListener(CC_CALLBACK_1(LoginViewScene::onActionSelectServer, this));
    
    
    addChild(rootNode);
    
    std::string input = "111111";
    
    unsigned char OutPut[100];
  
    CCSafety::MD5((void*)input.c_str(), input.size(), OutPut);
    
    std::string url = StringUtils::format("%s/v2/user/registerUser?email=%s&nickname=0&password=%s&appKey=%s&udid=%s&idfa=%s",g_configMsg.strSNSUrl.c_str(),"xixihaha1",(char*)OutPut,  g_configMsg.strAppKey.c_str(), "anysssssdfsf1","");
    
    HttpRequest* request = new (std::nothrow) HttpRequest();
    request->setUrl(url.c_str());
    request->setRequestType(HttpRequest::Type::GET);
    request->setResponseCallback(CC_CALLBACK_2(LoginViewScene::onHttpRequestCompleted, this));
    HttpClient::getInstance()->sendImmediate(request);
    request->setTag("1");

    return true;
}

void LoginViewScene::onActionLogin(Ref *pSender)
{
    CCLOG("onActionLogin");
    
    
}



void LoginViewScene::onActionEnterGame(Ref *pSender)
{
    CCLOG("onActionEnterGame");
    
    std::string url = "http://61.148.167.74:11116/user/v2/user/shengQuLoginServer?site=nw_001&appKey=ekVETXlBQ1ZUTkVJekVqTzFNak96RURJMUVESW5WWFFnVUhhVTFpTXdBRE0=&udid=anysssssdfsf1&sessionId=M1VXT2pGRE5tTm1ZMkVXTWtaRE9tZHpNNGdETnlralptTm1ZMkFqWWtsak9rSjNiM04zY2hCWEx4QURNd0FETXdZek4=&idfa=";
    
    HttpRequest* request = new (std::nothrow) HttpRequest();
    request->setUrl(url.c_str());
    request->setRequestType(HttpRequest::Type::GET);
    request->setResponseCallback(CC_CALLBACK_2(LoginViewScene::onHttpRequestCompleted, this));
    HttpClient::getInstance()->sendImmediate(request);
    request->setTag("2");
    

    
}

void LoginViewScene::onHttpRequestCompleted(cocos2d::network::HttpClient *sender, cocos2d::network::HttpResponse *response)
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

void LoginViewScene::DoTaskRequest(int nType, cocos2d::network::HttpResponse *response)
{
    std::string strMsg = response->getResponseDataString();
    rapidjson::Document doc;
    
    switch (nType)
    {
        case 1:
        {
            if (strMsg.empty())
            {
                return;
            }
            
            doc.Parse<rapidjson::kParseDefaultFlags>(strMsg.c_str());
            
            rapidjson::Value &jsonMap=doc;
            
            std::string strMessage = jsonMap["message"].GetString();
            int nCode = 0;
            nCode = jsonMap["code"].GetInt();
            
            CCLOG("社区登陆成功: %s", strMessage.c_str());
            
            if (1000 != nCode)
            {
                CCLOG("error : %s", strMsg.c_str());
            }
            
            
            
            
            
            break;
        }
        case 2:
        {
            rapidjson::Document _doc;
            
            std::string strData =  FileUtils::getInstance()->getStringFromFile("config.json");
            
            _doc.Parse<rapidjson::kParseDefaultFlags>(strData.c_str());
            
            if (_doc.HasParseError() || !_doc.IsArray())
            {
                CCLOG("load config error %u %u",strData.size(), strMsg.size());
                return;
            }

            
            break;
        }
        default:
            break;
    }

    
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



