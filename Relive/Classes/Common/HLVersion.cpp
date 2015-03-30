//
//  HLVersion.cpp
//  Relive
//
//  Created by tq on 15/3/30.
//
//

#include "HLVersion.h"
#include "HLStringUtil.h"

std::string ChannelID = "";

std::string getVersionStr()
{
    return HLStringUtil::Format("%d.%d.%d", __major_version, __minor_version, __build_version);

}

uint32_t getVersionInt()
{
    uint32_t nVersion = 0;
    
    nVersion |= __major_version << 16;
    nVersion |= __minor_version << 8;
    nVersion |= __build_version;
    
    return nVersion;

}

bool casecmpChannelID()
{
    bool bRet = false;
    
    return bRet;
}

