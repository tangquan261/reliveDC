#ifndef Action_info_hpp
#define Action_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Action_info : public DataBaseTable<Action_info> {
	friend class DataBaseTable<Action_info>;
public:
	int _id;
	int _ActionId;
	int _ActionType;
	int _Frame;
	std::string _Para;
	int _Sex;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_ActionId = sqlite3_column_int(stmt, 1);
		_ActionType = sqlite3_column_int(stmt, 2);
		_Frame = sqlite3_column_int(stmt, 3);
		const char * Para_ = (const char *)sqlite3_column_text(stmt, 4);
		if (Para_)
			 _Para = std::string(Para_);
		_Sex = sqlite3_column_int(stmt, 5);
	}
	static const char* tableName() {
		return "Action_info";
	}
};

#endif
