#ifndef __VIPDROP_INFO_HPP__

#define __VIPDROP_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class VipDrop_info : public DataBaseTable<VipDrop_info> {
	friend class DataBaseTable<VipDrop_info>;
public:
	int _id;
	int _site;
	int _itemId;
	int _count;
	int _ValidDate;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_site = sqlite3_column_int(stmt, 1);
		_itemId = sqlite3_column_int(stmt, 2);
		_count = sqlite3_column_int(stmt, 3);
		_ValidDate = sqlite3_column_int(stmt, 4);
	}
	static const char* tableName() {
		return "VipDrop_info";
	}
};

#endif
