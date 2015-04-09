//
//  CityMinHeap.cpp
//  DivineComedy
//
//  Created by hoolai & tq on 14-10-11.
//  Copyright (c) 2014年 Hoolai. All rights reserved.
//

#include "CityMinHeap.h"

MapPosition::MapPosition()
{
    clear();
}

MapPosition::~MapPosition()
{
    clear();
}

void MapPosition::clear()
{
    x = 0;
    y = 0;
    g = 0;
    f = 0;
    h = 0;
    
    lastPosition = NULL;
}

DCCityMinHeap::~DCCityMinHeap()
{
    m_vecNode.clear();
}

int DCCityMinHeap::push(MapPosition *pNode)
{
    int nSize = (int)m_vecNode.size();
    
    int nRet = 0;
    
    m_vecNode.push_back(pNode);
    
    do
    {
        if (nSize == 0)
        {
            break;
        }
        
        nRet = (nSize-1)/2;
        
        if (compare(nSize, nRet) < 0)
        {
            MapPosition *temp = m_vecNode[nSize];
            m_vecNode[nSize] = m_vecNode[nRet];
            m_vecNode[nRet] = temp;
            
            _mapNodeIndex[m_vecNode[nSize]->x << 16 | m_vecNode[nSize]->y] = nRet;
            _mapNodeIndex[m_vecNode[nRet]->x << 16 | m_vecNode[nRet]->y] = nSize;
            nSize = nRet;
        }
        else
        {
            break;
        }
    }while (true);
    
    return nRet;
}

MapPosition * DCCityMinHeap::pop()
{
    if (m_vecNode.empty())
    {
        return NULL;
    }
    
    MapPosition *pResult = m_vecNode[0];
    
    int p = 0;
    int p1 = 0;
    int p2 = 0;
    int pn = 0;
    
    size_t nSize = m_vecNode.size();
    
    m_vecNode[0] = m_vecNode[nSize-1];
    
    m_vecNode.pop_back();
    
    do
    {
        pn = p;
        p1 = 2*p + 1;
        p2 = 2*p + 2;
        
        if (m_vecNode.size() > p1 && compare(p, p1) > 0)
        {
            p = p1;
        }
        
        if (m_vecNode.size() > p2 && compare(p, p2) > 0)
        {
            p = p2;
        }
        
        if (p == pn)
        {
            break;
        }
        
        MapPosition *pTemp = m_vecNode[pn];
        m_vecNode[pn] = m_vecNode[p];
        m_vecNode[p] = pTemp;
        
        _mapNodeIndex[m_vecNode[p]->x << 16 | m_vecNode[p]->y] = pn;
        _mapNodeIndex[m_vecNode[pn]->x << 16 | m_vecNode[pn]->y] = p;

    }while (true);
    
    return pResult;
}

void DCCityMinHeap::update(int i)
{
    i = _mapNodeIndex[i];
    
    int p = i;
    int pn = 0;
    
    int p1 =0;
    int p2 = 0;
    
    do
    {
        if (p == 0)
        {
            break;
        }
        
        p2 = (p -1)/2;
        if (compare(p, p2) < 0)
        {
            MapPosition *pTemp = m_vecNode[p2];
            m_vecNode[p2] = m_vecNode[p];
            m_vecNode[p] = pTemp;
            p = p2;
            
            _mapNodeIndex[m_vecNode[p]->x << 16 | m_vecNode[p]->y] = p2;
            _mapNodeIndex[m_vecNode[p2]->x << 16 | m_vecNode[p2]->y] = p;
        }
        else
        {
            break;
        }
        
    }while (true) ;
    
    if (p < i)
    {
        return;
    }
    
    do
    {
        pn = p;
        p1 = 2*p + 1;
        p2 = 2*p + 1;
        if (m_vecNode.size() > p1 && compare(p, p1) > 0)
        {
            p = p1;
        }
        
        if (m_vecNode.size() > p2 && compare(p, p2) > 0)
        {
            p = p2;
        }
        
        if (p == pn)
        {
            break;
        }
        
        MapPosition *pTemp = m_vecNode[pn];
        m_vecNode[pn] = m_vecNode[p];
        m_vecNode[p] = pTemp;
        
        _mapNodeIndex[m_vecNode[p]->x << 16 | m_vecNode[p]->y] = pn;
        _mapNodeIndex[m_vecNode[pn]->x << 16 | m_vecNode[pn]->y] = p;
        
    }while (true);
}



