#ifndef VipPrerogativeTemp_info_hpp
#define VipPrerogativeTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class VipPrerogativeTemp_info : public DataBaseTable<VipPrerogativeTemp_info> {
	friend class DataBaseTable<VipPrerogativeTemp_info>;
public:
	int _id;
	int _VipPrerogativeId;
	std::string _name;
	int _type;
	int _grade;
	int _para1;
	int _para2;
	int _para3;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_VipPrerogativeId = sqlite3_column_int(stmt, 1);
		const char * name_ = (const char *)sqlite3_column_text(stmt, 2);
		if (name_)
			 _name = std::string(name_);
		_type = sqlite3_column_int(stmt, 3);
		_grade = sqlite3_column_int(stmt, 4);
		_para1 = sqlite3_column_int(stmt, 5);
		_para2 = sqlite3_column_int(stmt, 6);
		_para3 = sqlite3_column_int(stmt, 7);
	}
	static const char* tableName() {
		return "VipPrerogativeTemp_info";
	}
};

#endif
