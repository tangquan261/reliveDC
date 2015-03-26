#include "CustomRootNode.h"

#include "ui/UIText.h"

USING_NS_CC;
using namespace std;
using namespace cocos2d::ui;

//CustomRootNodeReader * CustomRootNodeReader::m_instance = NULL;


Widget::ccWidgetTouchCallback CustomRootNode::onLocateTouchCallback(const string &callBackName)
{
    if (callBackName == "onActionLogin")
    {
        return CC_CALLBACK_2(CustomRootNode::onTouch, this);
    }

    return nullptr;
}

Widget::ccWidgetClickCallback CustomRootNode::onLocateClickCallback(const string &callBackName)
{
    if (callBackName == "onClick")
    {
        return CC_CALLBACK_1(CustomRootNode::onClick, this);
    }

    return nullptr;
}

Widget::ccWidgetEventCallback CustomRootNode::onLocateEventCallback(const string &callBackName)
{
    if (callBackName == "onEvent")
    {
        return CC_CALLBACK_2(CustomRootNode::onEvent, this);
    }
    return nullptr;
}

void CustomRootNode::onTouch(cocos2d::Ref* object, cocos2d::ui::Widget::TouchEventType type)
{
    CCLOG("onTouch");
}

void CustomRootNode::onClick(cocos2d::Ref* sender)
{
    CCLOG("onClick");
    
}

void CustomRootNode::onEvent(cocos2d::Ref* sender, int eventType)
{
    CCLOG("onEvent");
    
}



