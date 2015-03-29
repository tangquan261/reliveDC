//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLServerDataManager.h
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#ifndef __HL_SERVERDATA_MANAGER_H__
#define __HL_SERVERDATA_MANAGER_H__

#include <stdio.h>
#include "HLSingleton.h"
#include <google/protobuf/message_lite.h>
#include "BoxMsg.pb.h"

class HLServerDataManager : public HLSingleton<HLServerDataManager>
{
public:
    void parseResponse(int type, google::protobuf::MessageLite *response);
    

    com::road::yishi::proto::box::BoxMsg*  m_pNoviceBox;
    
    ~HLServerDataManager();
    HLServerDataManager();
    
    
    
    
};


#endif

