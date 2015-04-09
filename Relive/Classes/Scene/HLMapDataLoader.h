//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLMapDataLoader.h
//	Author      :	tq
//	Date        :   2015-04-08
//	Description :	场景地图格子点信息加载
//

#ifndef __HL_MAP_DATA_LOADER_H__
#define __HL_MAP_DATA_LOADER_H__

#include <stdio.h>
#include <map>

#include "HLSingleton.h"
using namespace cocos2d;

enum MAP_TILE_TYPE
{
    MAP_TILE_NO_WALK    = 0,    //不可行走
    MAP_TILE_CAN_WALK   = 1,    //可行走
    MAP_TILE_BARRIER    = 2,    //弹道障碍点（魔灵用）
    MAP_TILE_EVENT_POINT= 3,    //事件点
    MAP_TILE_LUCENCY    = 4,    //建筑，半透明状态
};

struct tile16
{
    uint16_t x;
    uint16_t y;
};

struct tile8
{
    uint8_t x;
    uint8_t y;
};

const int MAX_TILE_TYPE = 8;

class HLMapDataLoader : public HLSingleton<HLMapDataLoader>
{
public:
    
    ~HLMapDataLoader();
    
    void LoadFiles();
    
    void SetMapFileID(int nMapFileID);
    int GetMapFileID(){ return m_nMapFileID;}
    
    int GetTileValue(int nx, int ny);
    

    template < typename T>
    void ReadFile(Data &Filedata)
    {
        uint8_t *pFile = Filedata.getBytes();
        
        pFile += sizeof(uint16_t);
        
        T pos;
        int nKey;
        
        uint16_t nCnt[MAX_TILE_TYPE-1];
        
        memcpy(nCnt, pFile, sizeof(nCnt));
        
        for (int i = 0; i < MAX_TILE_TYPE; i++)
        {
            for (int j = 0; j < nCnt[i]; j++)
            {
                memcpy(&pos, pFile, sizeof(pos));
                nKey = pos.x << 16 ||  pos.y;
                m_maptiles[nKey] = i;
            }
        }
        
    }
    
private:
     HLMapDataLoader();
    int m_nMapFileID;
    
    std::map<int, char> m_maptiles;
};


#endif /* defined(__Relive__HLMapDataLoader__) */

