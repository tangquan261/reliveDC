#ifndef __REWARDGOODS_INFO_HPP__

#define __REWARDGOODS_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class RewardGoods_info : public DataBaseTable<RewardGoods_info> {
	friend class DataBaseTable<RewardGoods_info>;
public:
	int _id;
	int _TemplateId;
	int _RewardItemID;
	int _RepeatMaxLevel;
	int _RepeatMinLevel;
	int _RepeatStep;
	int _RewardItemCount;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_RewardItemID = sqlite3_column_int(stmt, 2);
		_RepeatMaxLevel = sqlite3_column_int(stmt, 3);
		_RepeatMinLevel = sqlite3_column_int(stmt, 4);
		_RepeatStep = sqlite3_column_int(stmt, 5);
		_RewardItemCount = sqlite3_column_int(stmt, 6);
	}
	static const char* tableName() {
		return "RewardGoods_info";
	}
};

#endif
