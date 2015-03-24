//
//  t_s_dropcondition.h
//  DivineComedy
//
//  Created by 互爱科技 on 14-8-26.
//  Copyright (c) 2014年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_t_s_dropcondition_h
#define DivineComedy_t_s_dropcondition_h

#include "DataBaseHelper.h"
#include <string>
#include "HLStringUtil.h"
#include "DCStdAfx.h"
#include "HLMacros.h"
#include "sqlite/sqlite3.h"
using std::string;
class t_s_dropcondition : public DataBaseTable<t_s_dropcondition>
{
public:
    int _DropId;
    int _ConditionType;
    int _Para1;
    std::string _Para2;
    virtual void parseStatement(sqlite3_stmt * stmt) {
		_DropId = sqlite3_column_int(stmt, 0);
		_ConditionType = sqlite3_column_int(stmt, 1);
		_Para1 = sqlite3_column_int(stmt, 2);
//		_Para2 = sqlite3_column_int(stmt, 3);
        const char * Title_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Title_)
            _Para2 = std::string(Title_);
	}
	static const char* tableName() {
		return "t_s_dropcondition";
	}
};
#endif
