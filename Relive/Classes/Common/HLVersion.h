//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLVersion.h
//	Author      :	tq
//	Date        :   2015-03-30
//	Description :
//

#ifndef __HL_VERSON_H__
#define __HL_VERSON_H__

#include <stdio.h>


const uint8_t __major_version = 2;
const uint8_t __minor_version = 6;
const uint8_t __build_version = 0;

extern std::string getVersionStr();
extern uint32_t getVersionInt();
extern bool casecmpChannelID();



#endif 


