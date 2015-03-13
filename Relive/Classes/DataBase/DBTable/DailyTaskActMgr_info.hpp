#ifndef __DAILYTASKACTMGR_INFO_HPP__

#define __DAILYTASKACTMGR_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class DailyTaskActMgr_info : public DataBaseTable<DailyTaskActMgr_info> {
	friend class DataBaseTable<DailyTaskActMgr_info>;
public:
	int _id;
	std::string _icon;
	std::string _name;
	std::string _RemainTimes;
	std::string _OpenTime;
	std::string _EndTime;
	std::string _descr;
	std::string _ActAward;
	std::string _ActRule;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		const char * icon_ = (const char *)sqlite3_column_text(stmt, 1);
		if (icon_)
			 _icon = std::string(icon_);
		const char * name_ = (const char *)sqlite3_column_text(stmt, 2);
		if (name_)
			 _name = std::string(name_);
		const char * RemainTimes_ = (const char *)sqlite3_column_text(stmt, 3);
		if (RemainTimes_)
			 _RemainTimes = std::string(RemainTimes_);
		const char * OpenTime_ = (const char *)sqlite3_column_text(stmt, 4);
		if (OpenTime_)
			 _OpenTime = std::string(OpenTime_);
		const char * EndTime_ = (const char *)sqlite3_column_text(stmt, 5);
		if (EndTime_)
			 _EndTime = std::string(EndTime_);
		const char * descr_ = (const char *)sqlite3_column_text(stmt, 6);
		if (descr_)
			 _descr = std::string(descr_);
		const char * ActAward_ = (const char *)sqlite3_column_text(stmt, 7);
		if (ActAward_)
			 _ActAward = std::string(ActAward_);
		const char * ActRule_ = (const char *)sqlite3_column_text(stmt, 8);
		if (ActRule_)
			 _ActRule = std::string(ActRule_);
	}
	static const char* tableName() {
		return "DailyTaskActMgr_info";
	}
};

#endif
