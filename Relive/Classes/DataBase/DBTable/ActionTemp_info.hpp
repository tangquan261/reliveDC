#ifndef ActionTemp_info_hpp
#define ActionTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ActionTemp_info : public DataBaseTable<ActionTemp_info> {
	friend class DataBaseTable<ActionTemp_info>;
public:
	int _id;
	int _ActionId;
	std::string _ActionName;
	int _AttackTimes;
	int _FrameNum;
	int _AttackType;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_ActionId = sqlite3_column_int(stmt, 1);
		const char * ActionName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (ActionName_)
			 _ActionName = std::string(ActionName_);
		_AttackTimes = sqlite3_column_int(stmt, 3);
		_FrameNum = sqlite3_column_int(stmt, 4);
		_AttackType = sqlite3_column_int(stmt, 5);
	}
	static const char* tableName() {
		return "ActionTemp_info";
	}
};

#endif
