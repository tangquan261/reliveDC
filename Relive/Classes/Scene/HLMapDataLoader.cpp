//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLMapDataLoader.h
//	Author      :	tq
//	Date        :   2015-04-08
//	Description :	场景地图格子点信息加载
//

#include "HLMapDataLoader.h"

#include "HLStringUtil.h"
using namespace cocos2d;
using namespace std;

HLMapDataLoader::HLMapDataLoader()
{
    m_nMapFileID = 0;
    m_maptiles.clear();
}

HLMapDataLoader::~HLMapDataLoader()
{
    m_nMapFileID = 0;
    m_maptiles.clear();
}

void HLMapDataLoader::LoadFiles()
{
    string filepath = CCFileUtils::getInstance()->fullPathForFilename(HLStringUtil::Format("%d.tl", m_nMapFileID));
    
    //读取的内容
    Data data= CCFileUtils::getInstance()->getDataFromFile(filepath);
    
    uint16_t nTileFlag = 0;
    
    memcpy(&nTileFlag, data.getBytes(), sizeof(uint16_t));
    
    if (0 == nTileFlag)
    {
        ReadFile<tile8>(data);
    }
    else if(1 == nTileFlag)
    {
        ReadFile<tile16>(data);
    }
    else
    {
        //do nothing
    }
}

void HLMapDataLoader::SetMapFileID(int nMapFileID)
{
    if (nMapFileID != 0
        && m_nMapFileID != nMapFileID)
    {
        m_nMapFileID = nMapFileID;
        m_maptiles.clear();
        LoadFiles();
    }
}

int HLMapDataLoader::GetTileValue(int nx, int ny)
{
    int nKey = nx << 16 | ny;
    
    std::map<int ,char>::iterator iter = m_maptiles.find(nKey);
    
    if (iter != m_maptiles.end())
    {
        return (int)iter->second;
    }

    return 0;
}


