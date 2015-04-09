//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLTiledMapDraw
//	Author      :	tq
//	Date        :   2015-04-08
//	Description :   绘制地图
//

#ifndef __HL_TILED_MAP_DRAW_H__
#define __HL_TILED_MAP_DRAW_H__


class HLTiledMapDraw : public cocos2d::Node
{
  
public:
    HLTiledMapDraw();
    
    ~HLTiledMapDraw();
  
    void RegisterScene(int nMapID);
    
    void unRegisterScene();
    
    void UpdateMap(float delta);
private:
    
    int m_nMapID;
    
    int m_nMapWidth;
    int m_nMapHeight;
    
    int m_nTotalColNum;
    int m_nTotalRowNum;
    
    cocos2d::Size m_sizeScreen;
    
    
    
};

#endif /* defined(__Relive__HLTiledMapDraw__) */

