///
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	StringUtil.h
//	Author      :	tq
//	Date        :   2015-03-12
//	Description :
//

#ifndef __Relive__StringUtil__
#define __Relive__StringUtil__

#include <string>
#include <vector>
#include <string>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include "extensions/cocos-ext.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;

static const int MAX_ERROR_NUM = -999999999;

namespace HLStringUtil
{
    inline void StringToUpper(std::string& str)
    {
        if (str.empty())
        {
            return;
        }
        
        size_t size = str.size();
        for (size_t i = 0; i < size; ++i)
        {
            str[i] = toupper(str[i]);
        }
    }
    
    inline void StringToLower(std::string& str)
    {
        if (str.empty())
        {
            return;
        }
        
        size_t size = str.size();
        for (size_t i = 0; i < size; ++i)
        {
            str[i] = tolower(str[i]);
        }
    }
    
    inline std::string& ReplaceAll(std::string& str, const char* toReplace, const char* replace)
    {
        size_t pos = str.find(toReplace);
        size_t len = strlen(toReplace);
        while (pos != std::string::npos)
        {
            str = str.replace(pos, len, replace);
            pos = str.find(toReplace, pos+1);
        }
        return str;
    }
    
    inline std::string& Trim(std::string& str)
    {
        std::string::size_type p = str.find_first_not_of(" \t\r\n");
        if (p == std::string::npos)
        {
            str = "";
            return str;
        }
        std::string::size_type q = str.find_last_not_of(" \t\r\n");
        str = str.substr(p, q-p+1);
        return str;
    }
    
    inline unsigned long Hash(const char * str)
    {
        const unsigned long prime1 = 4224542477ul;
        const unsigned long prime2 = 3264857ul;
        unsigned long hash = 0;
        for (const char * c = str; *c; c++)
        {
            hash += prime1 * hash + *c + 1 + (hash % prime2);
        }
        return hash;
    }
    
    inline unsigned int BKDRHash(const char *str)
    {
        unsigned int seed = 131; // 31 131 1313 13131 131313 etc..
        unsigned int hash = 0;
        
        while (*str)
        {
            hash = hash * seed + (*str++);
        }
        
        return (hash & 0x7FFFFFFF);
    }
    
    inline void Split(std::vector<std::string>& vs,
                      const std::string& line,
                      char dmt)
    {
        std::string::size_type p=0;
        std::string::size_type q;
        vs.clear();
        for(;;)
        {
            q = line.find(dmt,p);
            std::string str = line.substr(p,q-p);
            Trim(str);
            vs.push_back(str);
            if(q == std::string::npos) break;
            p = q+1;
        }
    }
    
    inline void Split(std::vector<std::string>& vs,
                      const std::string& line,
                      const std::string& dmt)
    {
        std::string::size_type p=0;
        std::string::size_type q;
        vs.clear();
        for(;;)
        {
            q = line.find(dmt,p);
            std::string str = line.substr(p,q-p);
            Trim(str);
            vs.push_back(str);
            if(q == std::string::npos) break;
            p = q+dmt.length();
        }
    }
    
    inline void SplitInt(std::vector<int>& vs,
                         const std::string& line,
                         char dmt)
    {
        std::string::size_type p=0;
        std::string::size_type q;
        vs.clear();
        for(;;)
        {
            q = line.find(dmt,p);
            std::string str = line.substr(p,q-p);
            Trim(str);
            if(!str.empty()) vs.push_back(atoi(str.c_str()));
            if(q == std::string::npos) break;
            p = q+1;
        }
    }
    
    inline std::string Format(const std::string &fmt, ...)
    {
        int size = 100;
        std::string str;
        va_list ap;
        while (1)
        {
            str.resize(size);
            va_start(ap, fmt.c_str());
            int n = vsnprintf((char *)str.c_str(), size, fmt.c_str(), ap);
            va_end(ap);
            if (n > -1 && n < size)
            {
                str.resize(n);
                return str;
            }
            else
                size *= 2;
        }
        return str;
    }
    
    inline std::string Format(const char* fmt, ...)
    {
        int size = 100;
        std::string str;
        va_list ap;
        while (1)
        {
            str.resize(size);
            va_start(ap, fmt);
            int n = vsnprintf((char *)str.c_str(), size, fmt, ap);
            va_end(ap);
            if (n > -1 && n < size)
            {
                str.resize(n);
                return str;
            }
            else
                size *= 2;
        }
        return str;
    }

    inline bool GetJsonInt(const rapidjson::Value &jsonValue, const std::string &pKey, int &nOutput)
    {
        bool bRet = true;
        
        nOutput = MAX_ERROR_NUM;
        
        if (!jsonValue.HasMember(pKey.c_str()))
        {
            CCLOG("error: has no member pkey:%s to int", pKey.c_str());
            return false;
        }
        
        if (jsonValue[pKey.c_str()].IsInt())
        {
            nOutput =jsonValue[pKey.c_str()].GetInt();
        }
        else if(jsonValue[pKey.c_str()].IsString())
        {
            CCLOG("pkey:%s is string get int", pKey.c_str());
            
            nOutput = atoi(jsonValue[pKey.c_str()].GetString());
        }
        else if(jsonValue[pKey.c_str()].IsDouble())
        {
            CCLOG("pkey:%s is double get int", pKey.c_str());
            
            nOutput = (int)jsonValue[pKey.c_str()].GetDouble();
        }
        else if(jsonValue[pKey.c_str()].IsNull())
        {
            CCLOG("pkey:%s is null get int warnning", pKey.c_str());
            bRet = false;
        }
        else
        {
            CCLOG("pkey:%s is unkonwn type  get int error", pKey.c_str());
            bRet = false;
        }
        
        return bRet;
    }
    
    inline bool GetJsonString(const rapidjson::Value &jsonValue, const std::string &pKey, std::string &strOutput)
    {
        bool bRet = true;
        
        strOutput.clear();
        
        if (!jsonValue.HasMember(pKey.c_str()))
        {
            CCLOG("error: has no member pkey:%s to string", pKey.c_str());
            return false;
        }
        
        if (jsonValue[pKey.c_str()].IsString())
        {
            CCLOG("pkey:%s is string get string", pKey.c_str());
            strOutput = jsonValue[pKey.c_str()].GetString();
        }
        else if(jsonValue[pKey.c_str()].IsInt())
        {
            CCLOG("pkey:%s is int get string", pKey.c_str());
            strOutput = Format("%d",jsonValue[pKey.c_str()].GetInt());
        }
        else if(jsonValue[pKey.c_str()].IsNull())
        {
            CCLOG("pkey:%s is null get string warnning", pKey.c_str());
            bRet = false;
        }
        else
        {
            CCLOG("pkey:%s is unkonwn type get string error", pKey.c_str());
            bRet = false;
        }
        return bRet;
    }
}

#endif /* defined(__Relive__StringUtil__) */
