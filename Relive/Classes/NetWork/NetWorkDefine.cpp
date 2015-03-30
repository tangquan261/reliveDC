//
//  NetWorkDefine.cpp
//  Relive
//
//  Created by tq on 15/3/27.
//
//

#include <stdio.h>

template<int size>
void NativeToBigEndian(void*p)
{
    if (sizeof(int16_t) == sizeof(size))
    {
        NTOHS(*(int16_t*)p);
    }
    else if (sizeof(int32_t) == sizeof(size))
    {
        NTOHL(*(int32_t*)p);
    }
    else if(sizeof(int64_t) == sizeof(size))
    {
        NTOHLL(*(int64_t*)p);
    }
    else
    {
        printf("error size undefine %lu", sizeof(size));
    }
}

void decrptBytes(uint8_t* src, int length, uint8_t key[8])
{
    uint8_t * result = (uint8_t*)malloc(length);
    
    for (int i = 0; i < length; ++i)
    {
        if (i > 0)
        {
            key[i % 8] = (key[i % 8] + src[i-1]) ^ i;
            result[i] = (src[i] - src[i-1]) ^ key[i % 8];
        }
        else
        {
            result[0] = src[0] ^ key[0];
        }
    }
    
    memcpy(src, result, length);
    free(result);
}

extern uint8_t SEND_KEY[];

void encryptPacketOut(uint8_t *msg, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            SEND_KEY[i%8] = (SEND_KEY[i%8] + msg[i-1]^i);
            msg[i] = (msg[i] ^ SEND_KEY[i%8]) + msg[i-1];
        }
        else
        {
            msg[0] = msg[0]^SEND_KEY[0];
        }
    }
}


uint16_t calculateCheckSum(uint8_t* data, int length)
{
    uint32_t nRes = 0x77;
    
    int i = 6;
    
    while(i < length)
    {
        nRes += data[i++];
    }
    return (uint16_t)(nRes&0x7F7F);
}

