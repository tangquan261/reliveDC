//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLProtocalType.cpp
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#include "HLProtocalType.h"
#include "BoxMsg.pb.h"

using namespace google::protobuf;

google::protobuf::MessageLite * parseMessage(int protocalType, void *buffer, int length)
{
    MessageLite *pMessage = nullptr;
    
    switch (protocalType)
    {
        case U_C_PLAYER_NOVICE_BOX:
        case U_C_PLAYER_TIME_BOX:
            pMessage = new com::road::yishi::proto::box::BoxMsg();
            break;
        default:
            break;
    }
    
    if (NULL!= pMessage)
    {
        pMessage->ParseFromArray(buffer, length);
    }
    
    return pMessage;

}

