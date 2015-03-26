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

void CustomRootNodeReaderParent::purge()
{
    CC_SAFE_DELETE(m_instance);
}


