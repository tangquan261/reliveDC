//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	CityMinHeap.h
//	Author      :	tq
//	Date        :    2014-10-11
//	Description :	天空之城寻路辅助类，小根堆的实现
//

#ifndef __DC_CITY_MIN_HEAP_H__
#define __DC_CITY_MIN_HEAP_H__

#include <stdio.h>
#include <vector>
#include <map>

class MapPosition
{
public:
    MapPosition();
    
    ~MapPosition();
    
    void clear();
    
    inline bool operator <(const MapPosition& mp)const
    {
        return this->f < mp.f ? true : false;
    }
    
    MapPosition operator = (const MapPosition &mp)
    {
        x = mp.x;
        y = mp.y;
        g = mp.g;
        f = mp.f;
        h = mp.h;
        lastPosition = mp.lastPosition;
        return *this;
    }
    
    int x;
    int y;
    int g;
    int f;
    int h;
    
    MapPosition *lastPosition;
};

class DCCityMinHeap
{
public:
    ~DCCityMinHeap();
    
    int push(MapPosition *pNode);
    
    MapPosition *pop();
    
    void update(int i);
    
    int GetHeapSize()
    {
        return (int)m_vecNode.size();
    }
    
    void Clear()
    {
        m_vecNode.clear();
        _mapNodeIndex.clear();
    }
    
private:
    int compare(int p1, int p2)
    {
        return m_vecNode[p1]->f - m_vecNode[p2]->f;
    }
    
    std::vector<MapPosition*> m_vecNode;
    std::map<int, int> _mapNodeIndex;
};

#endif


