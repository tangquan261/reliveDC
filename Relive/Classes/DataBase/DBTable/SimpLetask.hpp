
#ifndef SimpLetask_hpp
#define SimpLetask_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SimpLetask : public DataBaseTable<SimpLetask> {
	friend class DataBaseTable<SimpLetask>;
public:
	int _TaskId;
	int _Type;
	std::string _Detail;
	int _IParam1;
	int _IParam2;
	int _IParam3;
	int _IParam4;
	int _IParam5;
	int _SParam1;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_TaskId = sqlite3_column_int(stmt, 0);
		_Type = sqlite3_column_int(stmt, 1);
        const char * Detail_ = (const char *)sqlite3_column_text(stmt, 2);
		if (Detail_)
            _Detail = std::string(Detail_);
		_IParam1 = sqlite3_column_int(stmt, 3);
		_IParam2 = sqlite3_column_int(stmt, 4);
		_IParam3 = sqlite3_column_int(stmt, 5);
		_IParam4 = sqlite3_column_int(stmt, 6);
		_IParam5 = sqlite3_column_int(stmt, 7);
		_SParam1 = sqlite3_column_int(stmt, 8);
	}
	static const char* tableName() {
		return "SimpLetask";
	}
};

#endif
