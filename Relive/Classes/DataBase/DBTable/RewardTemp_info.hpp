#ifndef __REWARDTEMP_INFO_HPP__

#define __REWARDTEMP_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class RewardTemp_info : public DataBaseTable<RewardTemp_info> {
	friend class DataBaseTable<RewardTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _Title;
	int _Type;
	std::string _Detail;
	int _NeedFightId;
	int _NeedMinLevel;
	int _NeedMaxLevel;
	std::string _IsLeague;
	int _RewardPlayGP;
	int _RewardGold;
	int _RewardStrategy;
	int _Rands;
	int _ShowType;
	std::string _StartDate;
	std::string _EndDate;
	int _RewardHappy;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * Title_ = (const char *)sqlite3_column_text(stmt, 2);
		if (Title_)
			 _Title = std::string(Title_);
		_Type = sqlite3_column_int(stmt, 3);
		const char * Detail_ = (const char *)sqlite3_column_text(stmt, 4);
		if (Detail_)
			 _Detail = std::string(Detail_);
		_NeedFightId = sqlite3_column_int(stmt, 5);
		_NeedMinLevel = sqlite3_column_int(stmt, 6);
		_NeedMaxLevel = sqlite3_column_int(stmt, 7);
		const char * IsLeague_ = (const char *)sqlite3_column_text(stmt, 8);
		if (IsLeague_)
			 _IsLeague = std::string(IsLeague_);
		_RewardPlayGP = sqlite3_column_int(stmt, 9);
		_RewardGold = sqlite3_column_int(stmt, 10);
		_RewardStrategy = sqlite3_column_int(stmt, 11);
		_Rands = sqlite3_column_int(stmt, 12);
		_ShowType = sqlite3_column_int(stmt, 13);
		const char * StartDate_ = (const char *)sqlite3_column_text(stmt, 14);
		if (StartDate_)
			 _StartDate = std::string(StartDate_);
		const char * EndDate_ = (const char *)sqlite3_column_text(stmt, 15);
		if (EndDate_)
			 _EndDate = std::string(EndDate_);
		_RewardHappy = sqlite3_column_int(stmt, 16);
	}
	static const char* tableName() {
		return "RewardTemp_info";
	}
};

#endif
