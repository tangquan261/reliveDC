#include "AppDelegate.h"
#include "LoginViewScene.h"
#include "ui/CocosGUI.h"
#include "extensions/cocos-ext.h"

#include "CommonDefine.h"

USING_NS_CC;

config_msg g_configMsg;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

void AppDelegate::loadSearchPaths()
{
    std::vector<std::string> searchPaths;

    searchPaths.push_back("res");
    searchPaths.push_back("res/GUI");
    
    
    
    cocos2d::FileUtils::getInstance()->setSearchPaths(searchPaths);
}

void AppDelegate::LoadConfigFile()
{
    Configuration::getInstance()->loadConfigFile("config.plist");
    
    Configuration *conf = Configuration::getInstance();
    
    g_configMsg.strBaseUrl = conf->getValue("baseUrl").asString();
    g_configMsg.strSNSUrl = conf->getValue("baseSNSUrl").asString();
    g_configMsg.strAppKey = conf->getValue("appkey").asString();
  
    CCLOG("%s, %s, %s", g_configMsg.strAppKey.c_str(), g_configMsg.strBaseUrl.c_str(), g_configMsg.strSNSUrl.c_str());
    
    Configuration::getInstance()->destroyInstance();
}
//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    
    if(!glview)
    {
        glview = GLViewImpl::create("Relive online");
        director->setOpenGLView(glview);
    }

    auto screenSize = glview->getFrameSize();
    
    auto designSize = Size(480, 320);
    
    glview->setDesignResolutionSize(designSize.width, designSize.height, ResolutionPolicy::SHOW_ALL);
    
#ifdef COCOS2D_DEBUG
    // turn on display FPS
    director->setDisplayStats(true);
#endif
    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    
    loadSearchPaths();
    LoadConfigFile();
    
    
    // create a scene. it's an autorelease object
    auto scene = LoginViewScene::createScene();

    // run
    director->runWithScene(scene);

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
