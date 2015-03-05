#include "AppDelegate.h"
#include "LoginViewScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

void AppDelegate::loadSearchPaths()
{
    std::vector<std::string> searchPaths;
    
    searchPaths.push_back("BackgroundComponentTest");
    searchPaths.push_back("Default");
    searchPaths.push_back("res");
    
    //FileUtils::getInstance()->addSearchPath("res");
    
    cocos2d::FileUtils::getInstance()->setSearchPaths(searchPaths);
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
    
    auto designSize = Size(320, 640);
    
    if (screenSize.width/screenSize.height > 320.f/640.f)
    {
        //width过大，固定高度，调整宽度的适应
       glview->setDesignResolutionSize(designSize.width, designSize.height, ResolutionPolicy::FIXED_HEIGHT);
    }
    else
    {
        //height过大，固定宽度，调整高度的适应
        glview->setDesignResolutionSize(designSize.width, designSize.height, ResolutionPolicy::FIXED_WIDTH);
    }
    
#ifdef COCOS2D_DEBUG
    // turn on display FPS
    director->setDisplayStats(true);
#endif
    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    
    loadSearchPaths();
    
    
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
