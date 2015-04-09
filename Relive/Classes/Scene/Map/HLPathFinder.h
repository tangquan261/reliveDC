//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLPathFinder.h
//	Author      :	tq
//	Date        :   2015-04-08
//	Description :   地图寻路的支持
//

#ifndef __Relive__HLPathFinder__
#define __Relive__HLPathFinder__

#include <map>
#include <vector>

#include "HLSingleton.h"
#include "CityMinHeap.h"
#include "UIServerManager.h"

using namespace cocos2d;

class HLPathFinder : public HLSingleton<HLPathFinder>
{
public:
    HLPathFinder();
    
    ~HLPathFinder();
    
    bool isFly()
    {
        return m_bFlyState;
    }
    
    void FindPath(std::list<Point> &listResult, MapPosition &posStart, MapPosition& posEnd);
    
    
    void FindPathByFly(std::list<Point> &listResult, MapPosition &posStart, MapPosition& posEnd);
    
private:

    int32_t GetKey(const MapPosition &pPos);
    int32_t GetKey(int nx, int ny);
   
    int GetH(int nx, int ny);
    int GetH();
    
    //根据目标start点，获得nround 范围内的最近点，找不到则返回false
    bool GetRound(MapPosition &startpos, int nRound);
    bool GetRoundInRange(MapPosition &startPos, int nRound);
    
    
    //合法的路径查询
    void FindNearBy();
    
    void ReleaseListItems();
    
    MapPosition* GetMinItemInOpenList();
    
    void AddItemOpenList(int nDirect, MapPosition *pos);
    
    //判断是否已经找到完全路径,设置路径点到结果集
    bool SuccessFindAndSetPathList();
    
    MapPosition * CreateNewStart(int nx, int ny);
    
    bool InCloseList(const MapPosition &pos);
    
    bool InOpenList(const MapPosition &pos);
    
    bool m_bFlyState;//飞行状态
    
    std::list<Point> *m_plistResult;
    
    std::map<int32_t, MapPosition*> m_mapOpenList;
    std::map<int32_t, MapPosition*> m_mapCLoseList;
    
    MapPosition *m_CurrentPos;
    MapPosition m_EndPos;
    
    DCCityMinHeap m_minHeap;
    
   // cocos2d::Size m_MapSize;
};


#endif /* defined(__Relive__HLPathFinder__) */
