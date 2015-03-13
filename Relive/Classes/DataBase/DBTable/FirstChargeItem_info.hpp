#ifndef __FIRSTCHARGEITEM_INFO_HPP__

#define __FIRSTCHARGEITEM_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class FirstChargeItem_info : public DataBaseTable<FirstChargeItem_info> {
	friend class DataBaseTable<FirstChargeItem_info>;
public:
	int _id;
	int _job;
	int _itemid;
	int _counts;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_job = sqlite3_column_int(stmt, 1);
		_itemid = sqlite3_column_int(stmt, 2);
		_counts = sqlite3_column_int(stmt, 3);
	}
	static const char* tableName() {
		return "FirstChargeItem_info";
	}
};

#endif
