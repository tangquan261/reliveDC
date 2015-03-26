#include "CustomRootNodeReader.h"

#include "CustomRootNode.h"

USING_NS_CC;

CustomRootNodeReaderParent * CustomRootNodeReaderParent::m_instance = nullptr;

CustomRootNodeReaderParent::CustomRootNodeReaderParent()
{
    
}

CustomRootNodeReaderParent::~CustomRootNodeReaderParent()
{

}

CustomRootNodeReaderParent* CustomRootNodeReaderParent::getInstance()
{
//    if (NULL == m_instance)
//    {
//        m_instance = new CustomRootNodeReaderParent();
//    }

    return m_instance;
}

void CustomRootNodeReaderParent::purge()
{
    CC_SAFE_DELETE(m_instance);
}

Node* CustomRootNodeReaderParent::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions)
{
    //CustomRootNode* node = CustomRootNode::create();

    //setPropsWithFlatBuffers(node, nodeOptions);

    return NULL;
}
