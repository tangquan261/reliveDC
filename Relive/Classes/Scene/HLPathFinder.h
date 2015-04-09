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

class HLPathFinder : public HLSingleton<HLPathFinder>, public UIServerInterface
{
public:
    
    ~HLPathFinder();
    
    bool isFly();
    
    
    virtual void onResponse(const Packageheader& header, MessageLite* pMessage)
    {
        
    }
    
private:
    HLPathFinder();
    
    int m_nWidth;
    int m_nHeight;
    
    
    
    
    bool m_bFlyState;//飞行状态
    
    

    

};


#endif /* defined(__Relive__HLPathFinder__) */
