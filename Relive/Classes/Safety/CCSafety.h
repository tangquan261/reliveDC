//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	CCSafety.h
//	Author      :	tq
//	Date        :   2015-03-06
//	Description :	加密
//
#ifndef __Relive__CCSafety__
#define __Relive__CCSafety__

#include <iostream>
#include <string>

class CCSafety
{
public:  
    static const int MD5_BUFFER_LENGTH = 16;
    static const int SHA1_BUFFER_LENGTH = 20;
    
    /** @brief Encoding data with Base64 algorithm, return encoded string length */
    static int encodeBase64(const void* input, int inputLength,
                            char* output, int outputBufferLength);
    
    static std::string encodeBase64(const void* input, int inputLength);
    
    /** @brief Decoding Base64 string to data, return decoded data length */
    static int decodeBase64(const char* input,
                            void* output, int outputBufferLength);
    
    static void decodeBase64(const char *input, std::vector<unsigned char> &vecOutPut);
    /** @brief Calculate MD5, get MD5 code (not string) */
    static void MD5(void* input, int inputLength,
                    unsigned char* output);
    
    static std::string ToMD5String(const char *pMsg);
    
    /** @brief Calculate SHA1 with a secret key. */
    static void sha1(unsigned char* input, int inputLength,
                     unsigned char* key, int keyLength,
                     unsigned char* buffer, int bufferLength);
    
};


#endif /* defined(__Relive__CCSafety__) */

