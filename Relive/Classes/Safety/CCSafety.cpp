//
//  CCSafety.cpp
//  Relive
//
//  Created by tq on 15/3/6.
//
//
#include "CCSafety.h"

extern "C"
{
#include "sha1/sha1.h"
#include "base64/libb64.h"
#include "md5/md5.h"
#include "md5/md5String.h"
}



/** @brief Encoding data with Base64 algorithm, return encoded string length */
int CCSafety::encodeBase64(const void* input, int inputLength,
                        char* output, int outputBufferLength)
{
    int bufferSize = 2 * inputLength;
    char* buffer = (char*)malloc(bufferSize);
    memset(buffer, 0, bufferSize);
    
    base64_encodestate state;
    base64_init_encodestate(&state);
    int r1 = base64_encode_block(static_cast<const char*>(input), inputLength, buffer, &state);
    int r2 = base64_encode_blockend(buffer+ r1, &state);
    
    int dataUsed = r1 + r2;
    memset(output, 0, outputBufferLength);
    int cp = dataUsed < outputBufferLength ? dataUsed : outputBufferLength - 1;
    memcpy(output, buffer, cp);
    free(buffer);
    return cp;
}

/** @brief Decoding Base64 string to data, return decoded data length */
int CCSafety::decodeBase64(const char* input,
                        void* output, int outputBufferLength)
{
    int bufferSize = strlen(input) + 1;
    char* buffer = (char*)malloc(bufferSize);
    memset(buffer, 0, bufferSize);
    base64_decodestate state;
    base64_init_decodestate(&state);
    int r1 = base64_decode_block(input, bufferSize - 1, buffer, &state);
    
    memset(output, 0, outputBufferLength);
    int cp = r1 < outputBufferLength ? r1 : outputBufferLength - 1;
    memcpy(output, buffer, cp);
    free(buffer);
    return cp;
}

/** @brief Calculate MD5, get MD5 code (not string) */
void CCSafety::MD5(void* input, int inputLength,unsigned char* output)
{
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input, inputLength);
    MD5_Final(output, &ctx);
}

std::string CCSafety::ToMD5String(const char *pMsg)
{
    MD5String iMD5;
    iMD5.GenerateMD5((unsigned char*)pMsg, strlen(pMsg));
    
    return iMD5.ToString();
}

/** @brief Calculate SHA1 with a secret key. */
void CCSafety::sha1(unsigned char* input, int inputLength, unsigned char* key, int keyLength,unsigned char* buffer, int bufferLength)
{
    SHA1 sha1;
    sha1.addBytes(input, inputLength);
    sha1.addBytes(key, keyLength);
    sha1.getDigest(buffer, bufferLength);
}