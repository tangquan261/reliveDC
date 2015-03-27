#ifndef __TestCpp__CustomRootNode__
#define __TestCpp__CustomRootNode__

#include "cocos2d.h"
#include "cocostudio/WidgetCallBackHandlerProtocol.h"
#include "CustomRootNodeReader.h"


class CustomRootNode : public cocos2d::Node, public cocostudio::WidgetCallBackHandlerProtocol
{
public:

    CREATE_FUNC(CustomRootNode)
    
    CustomRootNode(){};
    ~CustomRootNode(){}
    
    virtual cocos2d::ui::Widget::ccWidgetTouchCallback onLocateTouchCallback(const std::string &callBackName);
    virtual cocos2d::ui::Widget::ccWidgetClickCallback onLocateClickCallback(const std::string &callBackName);
    virtual cocos2d::ui::Widget::ccWidgetEventCallback onLocateEventCallback(const std::string &callBackName);

    
    void onClickEnterGame(cocos2d::Ref* sender);
    
    void onClickLogin(cocos2d::Ref* sender);
    
    void onClickSelectServer(cocos2d::Ref *sender);
    
    
//    void onTouch(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
//    void onEvent(cocos2d::Ref* sender, int eventType);
};

CC_LoaderReader(CustomRootNode)

#endif /* defined(__TestCpp__CustomRootNode__) */


