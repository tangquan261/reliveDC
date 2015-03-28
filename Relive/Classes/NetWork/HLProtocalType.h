//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLProtocalType.h
//	Author      :	tq
//	Date        :   2015-03-27
//	Description :网络协议
//

#ifndef Relive_HLProtocalType_h
#define Relive_HLProtocalType_h

#include "google/protobuf/message_lite.h"

google::protobuf::MessageLite * parseMessage(int protocalType, void *buffer, int length);



static const int U_C_GOLD_IMPOSERESULT  = 0x1092;           //征收结果
static const int U_C_RATE_INFO          = 0x1097;           //验收结果



static const int U_C_PLAYER_NOVICE_BOX  = 0x0002;           //新手礼包
static const int U_C_PLAYER_CITY_INFO   = 0x0003;           //领主信息
static const int U_C_PLAYER_TIME_BOX    = 0x0004;           //时间宝箱


#endif


