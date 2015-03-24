#ifndef __GUIDEVALUETEMP_INFO_HPP__

#define __GUIDEVALUETEMP_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class GuideValueTemp_info : public DataBaseTable<GuideValueTemp_info> {
	friend class DataBaseTable<GuideValueTemp_info>;
public:
	int _id;
	int _Type;
	int _MinLv;
	int _MaxLv;
	int _Parameter1;
	int _Parameter2;
	int _Parameter3;
	int _Parameter4;
	int _Parameter5;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_Type = sqlite3_column_int(stmt, 1);
		_MinLv = sqlite3_column_int(stmt, 2);
		_MaxLv = sqlite3_column_int(stmt, 3);
		_Parameter1 = sqlite3_column_int(stmt, 4);
		_Parameter2 = sqlite3_column_int(stmt, 5);
		_Parameter3 = sqlite3_column_int(stmt, 6);
		_Parameter4 = sqlite3_column_int(stmt, 7);
		_Parameter5 = sqlite3_column_int(stmt, 8);
	}
	static const char* tableName() {
		return "GuideValueTemp_info";
	}
};

#endif
