#ifndef __RELOGINDROP_INFO_HPP__

#define __RELOGINDROP_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ReloginDrop_info : public DataBaseTable<ReloginDrop_info> {
	friend class DataBaseTable<ReloginDrop_info>;
public:
	int _id;
	int _DropId;
	int _Times;
	int _ItemId;
	int _Data;
	int _ValidDate;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_DropId = sqlite3_column_int(stmt, 1);
		_Times = sqlite3_column_int(stmt, 2);
		_ItemId = sqlite3_column_int(stmt, 3);
		_Data = sqlite3_column_int(stmt, 4);
		_ValidDate = sqlite3_column_int(stmt, 5);
	}
	static const char* tableName() {
		return "ReloginDrop_info";
	}
};

#endif
