//
//  HLServerDataManager.cpp
//  Relive
//
//  Created by tq on 15/3/29.
//
//

#include "HLServerDataManager.h"
#include "HLProtocalType.h"

template <typename T>
T *createMessage (T *pT, google::protobuf::MessageLite *response)
{
    if (!response)
        return pT;
    if (!pT)
    {
        pT = new T();
    }
    pT->CopyFrom(*static_cast<T*>(response));
    return pT;
}

void HLServerDataManager::parseResponse(int type, google::protobuf::MessageLite *response)
{
    switch (type)
    {
        case U_C_PLAYER_NOVICE_BOX:
        {
            m_pNoviceBox = createMessage(m_pNoviceBox, response);
            
            break;
        }
        case U_C_PLAYER_TIME_BOX:
        {
        
            
            break;
        }
        default:
            break;
    }
}




HLServerDataManager::~HLServerDataManager()
{
    CC_SAFE_DELETE(m_pNoviceBox);
}


HLServerDataManager::HLServerDataManager()
{
    m_pNoviceBox = nullptr;
}



