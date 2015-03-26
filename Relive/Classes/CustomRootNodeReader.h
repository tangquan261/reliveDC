#ifndef __cocos2d_libs__CustomRootNodeReader__
#define __cocos2d_libs__CustomRootNodeReader__

#include "cocos2d.h"
#include "cocostudio/CocosStudioExport.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"


class CustomRootNodeReaderParent : public cocostudio::NodeReader
{        
public:
    CustomRootNodeReaderParent();
    ~CustomRootNodeReaderParent();
    
    static CustomRootNodeReaderParent* getInstance();
    
    static void purge();
        
    virtual cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);

    static CustomRootNodeReaderParent * m_instance;
};

#endif /* defined(__cocos2d_libs__CustomRootNodeReader__) */