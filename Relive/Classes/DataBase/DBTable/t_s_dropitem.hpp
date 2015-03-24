//
//  t_s_dropitem.h
//  DivineComedy
//
//  Created by 互爱科技 on 14-8-26.
//  Copyright (c) 2014年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_t_s_dropitem_h
#define DivineComedy_t_s_dropitem_h
#include "DataBaseHelper.h"
#include <string>
#include "HLStringUtil.h"
#include "DCStdAfx.h"
#include "HLMacros.h"
#include "sqlite/sqlite3.h"
using std::string;
class t_s_dropitem : public DataBaseTable<t_s_dropitem>
{
public:
    int _Id;
    int _DropId;
    int _ItemId;
    int _AppearType;
    int _IsBind;
    int _Random;
    int _Data;
    int _IsTips;
    int _IsLogs;
    int _ValidDate;
    int _IsNewItems;
    int _IsShow;
    virtual void parseStatement(sqlite3_stmt * stmt) {
		_Id = sqlite3_column_int(stmt, 0);
		_DropId = sqlite3_column_int(stmt, 1);
		_ItemId = sqlite3_column_int(stmt, 2);
		_AppearType = sqlite3_column_int(stmt, 3);
        
        _IsBind = sqlite3_column_int(stmt, 4);
		_Random = sqlite3_column_int(stmt, 5);
		_Data = sqlite3_column_int(stmt, 6);
		_IsTips = sqlite3_column_int(stmt, 7);
        
        _IsLogs = sqlite3_column_int(stmt, 8);
		_ValidDate = sqlite3_column_int(stmt, 9);
		_IsNewItems = sqlite3_column_int(stmt, 10);
		_IsShow = sqlite3_column_int(stmt, 11);
	}
	static const char* tableName() {
		return "t_s_dropitem";
	}
};


#endif
