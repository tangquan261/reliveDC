//
//  TiledMapDrawTest.cpp
//  Relive
//
//  Created by tq on 15/4/14.
//
//

#include "TiledMapDrawTest.h"
#include "HLStringUtil.h"

const float TileSize = 128;

using namespace cocos2d;

TiledMapDrawTest::TiledMapDrawTest()
{
    this->onEnter();
    this->onEnterTransitionDidFinish();
    this->setScale(0.5);
}

TiledMapDrawTest::~TiledMapDrawTest()
{

}

void TiledMapDrawTest::RegisterScene(int nMapID)
{
    m_nMapID = nMapID;

    m_nMapHeight = 1800;
    m_nMapWidth = 1800;
    
    m_nTotalCol = ceilf(m_nMapWidth / TileSize / 2);
    m_nTotalRow = ceilf(m_nMapHeight / TileSize /2);
    
    m_sizeScreen = Director::getInstance()->getWinSize();
    
    
    this->schedule(CC_SCHEDULE_SELECTOR(TiledMapDrawTest::UpdateMap), 0.5f);
}

void TiledMapDrawTest::UpdateMap(float delta)
{
    m_Currentpoint.y = 50;
    
    
    float x = m_Currentpoint.x - 20;
    
    x = MAX(x, 0);
    
    int tileMinx = floorf(x/TileSize);
    
    x += m_sizeScreen.width + 40;
    
    x = MIN(x, m_nMapWidth);
    
    int tileMaxx = floorf(x / TileSize);
    
    
    float y = m_Currentpoint.y - 20;
    
    y = MAX(y, 0);
    int tileMiny = floorf(y/TileSize);
    
    y += m_sizeScreen.height + 40;
    y = MIN(y, m_nMapHeight);
    int tileMaxy = floor(y/TileSize);
    
    int rowNum = tileMaxy - tileMiny + 1;
    int colNum = tileMaxx - tileMinx +1;
    
    
    int index = tileMinx + tileMiny * m_nTotalRow;
    
    if (m_nIndex == index && m_nCol == colNum && m_nRow == rowNum)
    {
        return;
    }
    
    m_nIndex = index;
   
    m_nRow = rowNum;
    m_nCol = colNum;
    
    std::vector<Texture2D *> texs;
    
    for (int i = tileMiny; i <= tileMaxy; i++)//3
    {
        for (int j = tileMinx; j <= tileMaxx; j++)//5
        {
            texs.push_back(Director::getInstance()->getTextureCache()->addImage(HLStringUtil::Format("Map/%d/%d_%d.png",m_nMapID, m_nTotalRow - i - 1, j)));
        }
    }
    
    
    std::vector<Texture2D *>::iterator iter = m_listTex.begin();
    
    for (; iter != m_listTex.end(); iter++)
    {
        Texture2D *&ptex = *iter;
        ptex->release();
    }
    
    texs.swap(m_listTex);
    
}


void TiledMapDrawTest::draw(Renderer* renderer, const Mat4 &transform, uint32_t flags)
{
    Node::draw(renderer, transform, flags);
    
    int nidx = m_nIndex % m_nTotalCol;
    int nidy = m_nIndex / m_nTotalCol;
    
    Point p(nidx * TileSize, nidy * TileSize);
    
    Point p1;
    
    if (m_listTex.empty())
    {
        return;
    }
    
    for (int i = 0; i < m_nRow; i++)//3
    {
        for (int j = 0; j < m_nCol; j++)//5
        {
            Texture2D* & ptex = m_listTex[i * m_nCol + j];
            
            p1.x = (j * TileSize*2);
            
            p1.y = ((i-1) * TileSize*2);
            
            ptex->drawAtPoint(p1);
        }
    }
    
}