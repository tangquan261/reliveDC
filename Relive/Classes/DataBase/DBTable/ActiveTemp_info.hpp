#ifndef ActiveTemp_info_hpp
#define ActiveTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ActiveTemp_info : public DataBaseTable<ActiveTemp_info> {
	friend class DataBaseTable<ActiveTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _Sort;
	std::string _ActiveName;
	std::string _ActiveTime;
	int _MaxCount;
	int _Levels;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_Sort = sqlite3_column_int(stmt, 2);
		const char * ActiveName_ = (const char *)sqlite3_column_text(stmt, 3);
		if (ActiveName_)
			 _ActiveName = std::string(ActiveName_);
		const char * ActiveTime_ = (const char *)sqlite3_column_text(stmt, 4);
		if (ActiveTime_)
			 _ActiveTime = std::string(ActiveTime_);
		_MaxCount = sqlite3_column_int(stmt, 5);
		_Levels = sqlite3_column_int(stmt, 6);
	}
	static const char* tableName() {
		return "ActiveTemp_info";
	}
};

#endif
