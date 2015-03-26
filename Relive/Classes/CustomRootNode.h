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

    virtual cocos2d::ui::Widget::ccWidgetTouchCallback onLocateTouchCallback(const std::string &callBackName);
    virtual cocos2d::ui::Widget::ccWidgetClickCallback onLocateClickCallback(const std::string &callBackName);
    virtual cocos2d::ui::Widget::ccWidgetEventCallback onLocateEventCallback(const std::string &callBackName);

    void onTouch(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void onClick(cocos2d::Ref* sender);
    void onEvent(cocos2d::Ref* sender, int eventType);
};

class CustomRootNodeReader : public CustomRootNodeReaderParent
{
public:
    static CustomRootNodeReader* getInstance()
    {
        m_instance = new CustomRootNodeReader();
        return (CustomRootNodeReader*)m_instance;
    }
    
    virtual cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions)
    {
        cocos2d::Node* pNode = NULL;
        
        pNode = CustomRootNode::create();
        setPropsWithFlatBuffers(pNode, nodeOptions);
        
        return pNode;
    }
};

#endif /* defined(__TestCpp__CustomRootNode__) */
