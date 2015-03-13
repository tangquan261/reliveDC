#ifndef QuestGoods_info_hpp
#define QuestGoods_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class QuestGoods_info : public DataBaseTable<QuestGoods_info> {
	friend class DataBaseTable<QuestGoods_info>;
public:
	int _id;
	int _TemplateId;
	int _RewardItemID;
	std::string _IsSelect;
	int _RewardItemCount;
	int _ToJob;
	int _ValidDate;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_RewardItemID = sqlite3_column_int(stmt, 2);
		const char * IsSelect_ = (const char *)sqlite3_column_text(stmt, 3);
		if (IsSelect_)
			 _IsSelect = std::string(IsSelect_);
		_RewardItemCount = sqlite3_column_int(stmt, 4);
		_ToJob = sqlite3_column_int(stmt, 5);
		_ValidDate = sqlite3_column_int(stmt, 6);
	}
	static const char* tableName() {
		return "QuestGoods_info";
	}
};

#endif
