#ifndef __cocos2d_libs__CustomRootNodeReader__
#define __cocos2d_libs__CustomRootNodeReader__

#include "cocos2d.h"
#include "cocostudio/CocosStudioExport.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

#define CC_LoaderReader(NodeName) class NodeName##_Reader : public CustomRootNodeReaderParent\
{\
    public:\
        static NodeName##_Reader* getInstance()\
        {\
            m_instance = new NodeName##_Reader();\
            return (NodeName##_Reader*)m_instance;\
        }\
\
        virtual cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions)\
        {\
            cocos2d::Node* pNode = NULL;\
            \
            pNode = NodeName::create();\
            setPropsWithFlatBuffers(pNode, nodeOptions);\
            \
            return pNode;\
        }\
};\


class CustomRootNodeReaderParent : public cocostudio::NodeReader
{
public:
    CustomRootNodeReaderParent();
    virtual ~CustomRootNodeReaderParent();
      
    static void purge();
    
    virtual cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions){return NULL;};

    static CustomRootNodeReaderParent * m_instance;
};

#endif /* defined(__cocos2d_libs__CustomRootNodeReader__) */