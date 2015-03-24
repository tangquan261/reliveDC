//
//  SevendayReward_info.h
//  DivineComedy
//
//  Created by konnin on 13-12-19.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef SevendayReward_info_hpp
#define SevendayReward_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SevendayReward_info : public DataBaseTable<SevendayReward_info> {
	friend class DataBaseTable<SevendayReward_info>;
public:
	int _id;
	int _para1;
	int _para2;
	int _dropid;
	int _itemid;
	int _appeartype;
	int _isbind;
	int _random;
	int _data;
	int _istips;
	int _islogs;
	int _validate;
	int _isnewitems;
	int _isshow;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_para1 = sqlite3_column_int(stmt, 1);
		_para2 = sqlite3_column_int(stmt, 2);
		_dropid = sqlite3_column_int(stmt, 3);
		_itemid = sqlite3_column_int(stmt, 4);
		_appeartype = sqlite3_column_int(stmt, 5);
		_isbind = sqlite3_column_int(stmt, 6);
		_random = sqlite3_column_int(stmt, 7);
		_data = sqlite3_column_int(stmt, 8);
		_istips = sqlite3_column_int(stmt, 9);
		_islogs = sqlite3_column_int(stmt, 10);
		_validate = sqlite3_column_int(stmt, 11);
		_isnewitems = sqlite3_column_int(stmt, 12);
		_isshow = sqlite3_column_int(stmt, 13);
	}
	static const char* tableName() {
		return "SevendayReward_info";
	}
};

#endif
