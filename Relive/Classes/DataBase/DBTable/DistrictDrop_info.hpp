#ifndef __DISTRICTDROP_INFO_HPP__

#define __DISTRICTDROP_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class DistrictDrop_info : public DataBaseTable<DistrictDrop_info> {
	friend class DataBaseTable<DistrictDrop_info>;
public:
	int _id;
	int _District;
	int _ItemId;
	int _Count;
	int _ValidDate;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_District = sqlite3_column_int(stmt, 1);
		_ItemId = sqlite3_column_int(stmt, 2);
		_Count = sqlite3_column_int(stmt, 3);
		_ValidDate = sqlite3_column_int(stmt, 4);
	}
	static const char* tableName() {
		return "DistrictDrop_info";
	}
};

#endif
