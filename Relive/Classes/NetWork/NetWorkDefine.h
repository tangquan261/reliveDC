//
//  NetWorkDefine.h
//  Relive
//
//  Created by tq on 15/3/27.
//
//

#ifndef Relive_NetWorkDefine_h
#define Relive_NetWorkDefine_h
#include <google/protobuf/message_lite.h>

typedef struct
{
    uint16_t header;
    uint16_t length;
    uint16_t checksum;
    uint16_t code;
    uint16_t toID;
    uint32_t extend1;
    uint32_t extend2;
    
}Packageheader;

struct ResponseData
{
    Packageheader header;
    google::protobuf::MessageLite *pMessage;
    //std::vector<uint8_t> datas;
};

//判断大小端
#define HOST_IS_BIG_ENDIAN (bool)(*(unsigned short *)"\0\xff" < 0x100)



#endif
