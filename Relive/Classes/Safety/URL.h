//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	URL.h
//	Author      :	tq
//	Date        :   2015-03-06
//	Description :	url task
//

#ifndef __URL_H__
#define __URL_H__

#include <iostream>
#include <string>

using namespace std;

class URL
{

public:
    
    static std::string UrlEncode(const std::string& str)
    {
        std::string src = str;
        char hex[] = "0123456789abcdef";
        string dst;
        for (size_t i = 0; i < src.size(); ++i)
        {
            unsigned char cc = src[i];
            if (cc == ' ')
            {
                dst += "+";
            }
            else if (isalnum(cc) || strchr("-_.!~*'()", cc))
            {
                dst += cc;
            }
            else
            {
                unsigned char c = static_cast<unsigned char>(src[i]);
                dst += '%';
                dst += hex[c>>4];
                dst += hex[c&0xf];
            }
        }
        return dst;
    }
    
    static std::string UrlDecode(const std::string& str)
    {
        std::string result;
        int hex = 0;
      
        for (size_t i = 0; i < str.length(); ++i)
        {
            switch (str[i])
            {
                case '+':
                    result += ' ';
                    break;
                case '%':
                    if (isxdigit(str[i + 1]) && isxdigit(str[i + 2]))
                    {
                        std::string hexStr = str.substr(i + 1, 2);
                        hex = (int)strtol(hexStr.c_str(), 0, 16);
                                              result += char(hex);
                        i += 2;
                    }
                    else
                    {
                        result += '%';
                    }
                    break;
                default:
                    result += str[i];
                    break;
            }
        }
        
        return result;
    }
};

#endif