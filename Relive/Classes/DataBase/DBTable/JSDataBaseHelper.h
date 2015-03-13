//
//  JSDataBaseHelper.h
//  DivineComedy
//
//  Created by zhao shuan on 13-4-24.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef __JSDATABASEHELPER_H__
#define __JSDATABASEHELPER_H__

#include "jsapi.h"
#include "HLMacros.h"
void registDataBaseHelper(JSContext *cx, JSObject* global);
JSBool jsDataBaseQueryTable(JSContext *cx, uint32_t argc, jsval *vp);

#endif
