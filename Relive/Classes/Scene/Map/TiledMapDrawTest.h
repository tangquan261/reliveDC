//
//  TiledMapDrawTest.h
//  Relive
//
//  Created by tq on 15/4/14.
//
//

//地图实现真麻烦，该用tilemap试试

#ifndef __Relive__TiledMapDrawTest__
#define __Relive__TiledMapDrawTest__

#include <stdio.h>

class TiledMapDrawTest : public cocos2d::Node
{
public:
    TiledMapDrawTest();
    ~TiledMapDrawTest();
    
    void RegisterScene(int nMapID);
    
    void UpdateMap(float delta);
    
    virtual void draw(cocos2d::Renderer* renderer, const cocos2d::Mat4 &transform, uint32_t flags);
    
private:
    
    int m_nMapID;
    
    int m_nMapWidth;
    int m_nMapHeight;
    
    int m_nTotalCol;
    int m_nTotalRow;
    
    int m_nIndex;
    
    int m_nCol;
    int m_nRow;
    
    std::vector<cocos2d::Texture2D*> m_listTex;
    
    cocos2d::Size m_sizeScreen;
    
    cocos2d::Point m_Currentpoint;

};

#endif /* defined(__Relive__TiledMapDrawTest__) */
