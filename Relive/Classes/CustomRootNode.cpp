#include "CustomRootNode.h"

#include "ui/UIText.h" 
#include "LoginUtil.h"

USING_NS_CC;
using namespace std;
using namespace cocos2d::ui;

Widget::ccWidgetClickCallback CustomRootNode::onLocateClickCallback(const string &callBackName)
{
    if (callBackName == "onClickEnterGame")
    {
        return CC_CALLBACK_1(CustomRootNode::onClickEnterGame, this);
    }
    else if(callBackName == "onClickLogin")
    {
        return CC_CALLBACK_1(CustomRootNode::onClickLogin, this);
    }
    else if(callBackName == "onClickSelectServer")
    {
        return CC_CALLBACK_1(CustomRootNode::onClickSelectServer, this);
    }
    
    return nullptr;
}

void CustomRootNode::onClickEnterGame(cocos2d::Ref* sender)
{
    CCLOG("onClickEnterGame");
    LoginUtil::getSingleton()->ApplyEnterGame();
}

void CustomRootNode::onClickLogin(cocos2d::Ref* sender)
{
    CCLOG("onClickLogin");
}

void CustomRootNode::onClickSelectServer(cocos2d::Ref *sender)
{
    CCLOG("onClickSelectServer");
}


Widget::ccWidgetTouchCallback CustomRootNode::onLocateTouchCallback(const string &callBackName)
{
    return nullptr;
}

Widget::ccWidgetEventCallback CustomRootNode::onLocateEventCallback(const string &callBackName)
{
    return nullptr;
}

