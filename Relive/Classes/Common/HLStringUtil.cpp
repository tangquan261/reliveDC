//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLStringUtil.cpp
//	Author      :	tq
//	Date        :   2015-03-12
//	Description :
//

#include "HLStringUtil.h"

time_t g_SysTime = 0;
int8_t g_nServerID = 0;    //服务器id 255个
int8_t g_nGroupID = 0;     //区id   255个

int64_t GetGUID()
{
    int64_t nRet = 0;
    
    static int16_t nIndex = 0;
    
    if(nIndex++ >= 30000)
    {
        nIndex = 0;
    }
    
    nRet += (g_SysTime << 16);
    
    nRet += ((int64_t)g_nGroupID << 48);
    
    nRet += ((int64_t)g_nServerID << 56);
    
    nRet += nIndex;

    return nRet;
}