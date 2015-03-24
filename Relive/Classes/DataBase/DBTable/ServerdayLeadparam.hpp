

#ifndef ServerdayLeadparam_hpp
#define ServerdayLeadparam_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ServerdayLeadparam : public DataBaseTable<ServerdayLeadparam> {
	friend class DataBaseTable<ServerdayLeadparam>;
public:
	int _Id;
	int _Day;
	int _TaskId;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_Id = sqlite3_column_int(stmt, 0);
		_Day = sqlite3_column_int(stmt, 1);
		_TaskId = sqlite3_column_int(stmt, 2);
	}
	static const char* tableName() {
		return "ServerdayLeadparam";
	}
};

#endif
