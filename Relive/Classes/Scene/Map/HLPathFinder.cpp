//
//  HLPathFinder.cpp
//  Relive
//
//  Created by tq on 15/4/8.
//
//

#include "HLPathFinder.h"

#include "HLMapDataLoader.h"

const int MAX_DIRECT_SIZE = 8;
//八个方向及其权重，
int ableX[MAX_DIRECT_SIZE] = {-1, 0, 1, -1, 0, 1, -1, 1};
int ableY[MAX_DIRECT_SIZE] = {-1, -1, -1, 1, 1, 1, 0, 0};
int ableH[MAX_DIRECT_SIZE] = {14, 10, 14, 14, 10, 14, 10, 10};


HLPathFinder::HLPathFinder()
{
    m_bFlyState = false;
    
    m_minHeap.Clear();
    m_mapOpenList.clear();
    m_mapCLoseList.clear();
    
    m_CurrentPos = NULL;;
    m_EndPos.clear();
    
    m_plistResult = NULL;
    
}

HLPathFinder::~HLPathFinder()
{
    m_bFlyState = false;
    
    m_minHeap.Clear();
    m_mapOpenList.clear();
    m_mapCLoseList.clear();

    m_CurrentPos = NULL;
    m_EndPos.clear();
    
    m_plistResult = NULL;
}

void HLPathFinder::FindPath(std::list<Point> &listResult, MapPosition &posStart, MapPosition& posEnd)
{
    listResult.clear();
    
    if (HLMapDataLoader::getSingleton()->isBlock(posStart))
    {
        GetRound(posStart, 50);
    }
    
    if (HLMapDataLoader::getSingleton()->isBlock(posEnd))
    {
        GetRound(posEnd, 50);
    }
    
    m_EndPos = posEnd;

    if (HLMapDataLoader::getSingleton()->isBlock(posStart)
        || HLMapDataLoader::getSingleton()->isBlock(posStart)
        || (posStart.x ==m_EndPos.x && posStart.y == m_EndPos.y))
    {
        //不可点，或者起至点相同则不寻路
        m_EndPos.clear();
        return;
    }
    
    m_CurrentPos = new MapPosition();
    
    m_CurrentPos->x = posStart.x;
    m_CurrentPos->y = posStart.y;
    
    m_plistResult = &listResult;
    
    FindNearBy();
    
    ReleaseListItems();
    
    m_plistResult = NULL;
    m_EndPos.clear();
    
}

void HLPathFinder::FindPathByFly(std::list<Point> &listResult, MapPosition &posStart, MapPosition& posEnd)
{
    listResult.clear();
    
    m_EndPos = posEnd;
    m_CurrentPos = &posStart;

    
    while (true)
    {
        if (m_CurrentPos->x == m_EndPos.x
            && m_CurrentPos->y == m_EndPos.y)
        {
            listResult.reverse();
            
            break;
        }
        
        int nMin = 999999999;
        
        int nTemp = 0;
        int nTempx = 0;
        int nTempy = 0;
        
        for (int i = 0; i < MAX_DIRECT_SIZE; i++)
        {
            nTemp = GetH(m_CurrentPos->x + ableX[i], m_CurrentPos->y + ableY[i]);
            
            if (nMin > nTemp)
            {
                nMin = nTemp;
                
                nTempx = m_CurrentPos->x + ableX[i];
                nTempy = m_CurrentPos->y + ableY[i];
            }
        }
        
        m_CurrentPos->x = nTempx;
        m_CurrentPos->y = nTempy;
        
        listResult.push_back(Point(nTempx, nTempy));
    
    }

    m_plistResult = NULL;
    m_EndPos.clear();

}



void HLPathFinder::FindNearBy()
{
    while (true)
    {
        m_mapCLoseList.insert(make_pair(GetKey(*m_CurrentPos), m_CurrentPos));
        
        if (SuccessFindAndSetPathList())
        {
            //找到了完整路径则跳出
            break;
        }
        
        //分八个方向查找合适的加入open的接电
        for (int i = 0; i < MAX_DIRECT_SIZE; i++)
        {
            MapPosition *pTemp = CreateNewStart(m_CurrentPos->x + ableX[i], m_CurrentPos->y + ableY[i]);
            
            AddItemOpenList(i, pTemp);
        }
        
        m_CurrentPos = GetMinItemInOpenList();
        
        if(NULL == m_CurrentPos)
        {
            //找不到合适的点，则退出
            break;
        }
    }
}

void HLPathFinder::ReleaseListItems()
{
    
    std::map<int32_t, MapPosition*>::iterator iter = m_mapOpenList.begin();
    
    for (; iter != m_mapOpenList.end(); iter++)
    {
        delete iter->second;
    }
    
    iter = m_mapCLoseList.begin();
    
    for (; iter != m_mapCLoseList.end(); iter++)
    {
        delete iter->second;
    }
    
    m_mapCLoseList.clear();
    m_mapOpenList.clear();
    
    m_minHeap.Clear();
}


MapPosition* HLPathFinder::GetMinItemInOpenList()
{
    MapPosition *pRet = NULL;
    
    pRet = m_minHeap.pop();
    
    if (NULL != pRet)
    {
        m_mapOpenList.erase(GetKey(*pRet));
    }
 
    return pRet;
}

void HLPathFinder::AddItemOpenList(int nDirect, MapPosition *pos)
{
    if (HLMapDataLoader::getSingleton()->isBlock(*pos)
        || InCloseList(*pos))
    {
        //不需要处理的节点
        delete pos;
        return;
    }
    
    if (InOpenList(*pos))
    {
        //已经在open中的节点
        int nTempG = m_CurrentPos->g + ableH[nDirect];
        
        if (nTempG < pos->g)
        {
            pos->lastPosition = m_CurrentPos;
            pos->g = nTempG;
            pos->f = pos->g + pos->h;
            
            m_minHeap.update(pos->x << 16 | pos->y);
        }
    }
    else
    {
        pos->lastPosition = m_CurrentPos;
        
        pos->g = m_CurrentPos->g + ableH[nDirect];
        pos->h = GetH() * 10;
        pos->f = pos->g + pos->h;
        
        m_minHeap.push(pos);
        
        m_mapOpenList.insert(make_pair(GetKey(*pos), pos));
    }
}

bool HLPathFinder::SuccessFindAndSetPathList()
{
    
    bool bRet = false;
    
    if (m_CurrentPos->x == m_EndPos.x && m_CurrentPos->y == m_EndPos.y)
    {
        bRet = true;
        
        MapPosition *pLast = m_CurrentPos->lastPosition;
        
        while (NULL != pLast)
        {
            m_plistResult->push_back(Point(pLast->x, pLast->y));
            pLast = pLast->lastPosition;
        }
        
    }
    
    return bRet;
}

MapPosition * HLPathFinder::CreateNewStart(int nx, int ny)
{
    MapPosition *pTemp = new MapPosition();
    
    pTemp->x = nx;
    pTemp->y = ny;
    pTemp->g = 0;
    pTemp->f = 0;
    pTemp->h = 0;
    pTemp->lastPosition = NULL;
    
    return pTemp;
}

bool HLPathFinder::InCloseList(const MapPosition &pos)
{
    return m_mapCLoseList.find(GetKey(pos)) != m_mapCLoseList.end();
}

bool HLPathFinder::InOpenList(const MapPosition &pos)
{
    return m_mapOpenList.find(GetKey(pos)) != m_mapOpenList.end();

}

int32_t HLPathFinder::GetKey(const MapPosition &pPos)
{
    return pPos.x << 16 | pPos.y;
}

int32_t HLPathFinder::GetKey(int nx, int ny)
{
    return nx << 16 | ny;
}


int HLPathFinder::GetH(int nx, int ny)
{
    return abs(nx - m_EndPos.x) * abs(nx - m_EndPos.x)
    + abs(ny - m_EndPos.y) * abs(ny- m_EndPos.y);
}

int HLPathFinder::GetH()
{
    return abs(m_CurrentPos->x - m_EndPos.x) > abs(m_CurrentPos->y - m_EndPos.y) ?\
    abs(m_CurrentPos->x - m_EndPos.x): abs(m_CurrentPos->y - m_EndPos.y);
}

bool HLPathFinder::GetRound(MapPosition &startpos, int nRound)
{
    bool binRange = false;
    
    for (int i = 1; i < nRound; i++)
    {
        if (GetRoundInRange(startpos, i))
        {
            binRange = true;
            
            break;
        }
    }
    
    return binRange;
}

bool HLPathFinder::GetRoundInRange(MapPosition &startPos, int nRound)
{
    bool bRet = false;
    
    for (int i = -nRound; i < nRound; i++)
    {
        if (!HLMapDataLoader::getSingleton()->isBlock((startPos.x + i), (startPos.y + nRound)))
        {
            startPos.x += i;
            startPos.y += nRound;
            
            bRet = true;
        }
        else if (!HLMapDataLoader::getSingleton()->isBlock((startPos.x + i), (startPos.y = nRound)))
        {
            startPos.x += i;
            startPos.y -= nRound;
            
            bRet = true;
        }
        else if(!HLMapDataLoader::getSingleton()->isBlock((startPos.x - nRound), (startPos.y + i)))
        {
            startPos.x -= nRound;
            startPos.y+= i;
            
            bRet = true;
        }
        else if(!HLMapDataLoader::getSingleton()->isBlock((startPos.x + nRound),(startPos.y + i)))
        {
            startPos.x += nRound;
            startPos.y += i;
            
            bRet = true;
        }
        else
        {
            //do nothing
        }
    }
    
    return false;
}




