//
//  HLTiledMapDraw.cpp
//  Relive
//
//  Created by tq on 15/4/9.
//
//

#include "HLTiledMapDraw.h"
#include "Map_info.hpp"

const float TileSize = 128;

using namespace cocos2d;

HLTiledMapDraw::HLTiledMapDraw()
{
    this->onEnter();
    this->onEnterTransitionDidFinish();
}

HLTiledMapDraw::~HLTiledMapDraw()
{
    
}

void HLTiledMapDraw::RegisterScene(int nMapID)
{
    Map_info mapInfo;
    Map_info::findDataById(mapInfo, nMapID);
    
    m_nMapID = nMapID;
    m_nMapHeight = ceilf(mapInfo._Height);
    m_nMapWidth = ceilf(mapInfo._Width);
    
    
    m_nTotalColNum = ceilf(m_nMapWidth / TileSize);
    m_nTotalRowNum = ceilf(m_nMapHeight / TileSize);
    
    m_sizeScreen = Director::getInstance()->getWinSize();
    
    
    this->schedule(CC_SCHEDULE_SELECTOR(HLTiledMapDraw::UpdateMap), 0.5f);
}

void HLTiledMapDraw::unRegisterScene()
{
    //m_mapInfo._MapId = 0;

    this->unschedule(CC_SCHEDULE_SELECTOR(HLTiledMapDraw::UpdateMap));
    
    
}


void HLTiledMapDraw::UpdateMap(float delta)
{
    CCLOG("UpdateMap hello world");
    
    CCTexture2D *texture = Director::getInstance()->getTextureCache()->addImage("hellw");
    
    
    
    
    
    
    
    
}