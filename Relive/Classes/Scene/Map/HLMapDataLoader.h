//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLMapDataLoader.h
//	Author      :	tq
//	Date        :   2015-04-08
//	Description :	场景地图格子点信息加载
//

#ifndef __HL_MAP_DATA_LOADER_H__
#define __HL_MAP_DATA_LOADER_H__
// F = G + H
// H = current to end 预估余下部分的数值（计算H的方法很多）
// G start to Current节点的的移动数值
// H的计算方法 1.MAX(dx, dy) 2. sqrt(dx*dx + dy*dy)欧几里德距离
//  3. min(dx,dy)*0.414 + max(dx, dy) 4. D*(abs(nx-gx) + abs(ny-gy) 曼哈顿距离

#include <stdio.h>
#include <map>

#include "HLSingleton.h"
#include "CityMinHeap.h"

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
    HLMapDataLoader();
    ~HLMapDataLoader();
    
    void LoadFiles();
    
    void SetMapFileID(int nMapFileID);
    int GetMapFileID(){ return m_nMapFileID;}
    
    int GetTileValue(int nx, int ny);
    
    //是否不可行走
    bool isBlock(const MapPosition &pos);
    bool isBlock(int nX, int nY);
    
    template < typename T>
    void ReadFile(Data &Filedata)
    {
        int nIndex = 0;
        
        uint8_t *pFile = Filedata.getBytes();
        
        nIndex += sizeof(uint16_t);
        
        T pos;
        int nKey;
        
        uint16_t nCnt[MAX_TILE_TYPE-1];
        
        memcpy(nCnt, pFile + nIndex, sizeof(nCnt));
        
        nIndex += sizeof(nCnt);
        
        for (int i = 1; i < MAX_TILE_TYPE; i++)
        {
            for (int j = 0; j < nCnt[i-1]; j++)
            {
                memcpy(&pos, pFile + nIndex, sizeof(pos));
                nIndex += sizeof(pos);
                nKey = pos.x << 16 |  pos.y;
                
                m_maptiles[nKey] = i;
            }
        }
        
    }
    
private:
    int m_nMapFileID;
    
    std::map<int, char> m_maptiles;
};


#endif /* defined(__Relive__HLMapDataLoader__) */

