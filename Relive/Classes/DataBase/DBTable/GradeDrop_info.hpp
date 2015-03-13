#ifndef __GRADEDROP_INFO_HPP__

#define __GRADEDROP_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class GradeDrop_info : public DataBaseTable<GradeDrop_info> {
	friend class DataBaseTable<GradeDrop_info>;
public:
	int _id;
	int _DropId;
	int _Grade;
	int _TemplateId;
	int _Data;
	int _Job;
	int _ValidDate;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_DropId = sqlite3_column_int(stmt, 1);
		_Grade = sqlite3_column_int(stmt, 2);
		_TemplateId = sqlite3_column_int(stmt, 3);
		_Data = sqlite3_column_int(stmt, 4);
		_Job = sqlite3_column_int(stmt, 5);
		_ValidDate = sqlite3_column_int(stmt, 6);
	}
	static const char* tableName() {
		return "GradeDrop_info";
	}
};

#endif
