#ifndef __REWARDCONDITION_INFO_HPP__

#define __REWARDCONDITION_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class RewardCondition_info : public DataBaseTable<RewardCondition_info> {
	friend class DataBaseTable<RewardCondition_info>;
public:
	int _id;
	int _TemplateId;
	int _CondictionType;
	std::string _CondictionTitle;
	int _Para1;
	int _Para2;
	int _Para3;
	std::string _Para4;
	std::string _Para5;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_CondictionType = sqlite3_column_int(stmt, 2);
		const char * CondictionTitle_ = (const char *)sqlite3_column_text(stmt, 3);
		if (CondictionTitle_)
			 _CondictionTitle = std::string(CondictionTitle_);
		_Para1 = sqlite3_column_int(stmt, 4);
		_Para2 = sqlite3_column_int(stmt, 5);
		_Para3 = sqlite3_column_int(stmt, 6);
		const char * Para4_ = (const char *)sqlite3_column_text(stmt, 7);
		if (Para4_)
			 _Para4 = std::string(Para4_);
		const char * Para5_ = (const char *)sqlite3_column_text(stmt, 8);
		if (Para5_)
			 _Para5 = std::string(Para5_);
	}
	static const char* tableName() {
		return "RewardCondition_info";
	}
};

#endif
