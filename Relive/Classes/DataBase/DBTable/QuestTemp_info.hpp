#ifndef QuestTemp_info_hpp
#define QuestTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class QuestTemp_info : public DataBaseTable<QuestTemp_info> {
	friend class DataBaseTable<QuestTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _TemplateType;
	std::string _Title;
	std::string _Detail;
	std::string _Objective;
	int _NeedFightId;
	int _NeedBuildingTemp;
	int _NeedItemTemp;
	int _NeedPos;
	int _NeedMinLevel;
	int _NeedMaxLevel;
	std::string _PreQuestId;
	std::string _IsLeague;
	std::string _IsAuto;
	std::string _IsRepeat;
	std::string _IsLost;
	int _RepeatInterval;
	int _RepeatMax;
	int _RewardPlayGP;
	int _RewardHeroGP;
	int _RewardGold;
	int _RewardCrystal;
	int _RewardDower;
	int _RewardMoney;
	int _RewardConsortiaOffer;
	int _RewardPlayerOffer;
	std::string _StartDate;
	std::string _EndDate;
	std::string _WeekSpace;
	std::string _HourSpace;
	int _RewardStrategy;
	std::string _Sort;
	int _ShowType;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_TemplateType = sqlite3_column_int(stmt, 2);
		const char * Title_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Title_)
			 _Title = std::string(Title_);
		const char * Detail_ = (const char *)sqlite3_column_text(stmt, 4);
		if (Detail_)
			 _Detail = std::string(Detail_);
		const char * Objective_ = (const char *)sqlite3_column_text(stmt, 5);
		if (Objective_)
			 _Objective = std::string(Objective_);
		_NeedFightId = sqlite3_column_int(stmt, 6);
		_NeedBuildingTemp = sqlite3_column_int(stmt, 7);
		_NeedItemTemp = sqlite3_column_int(stmt, 8);
		_NeedPos = sqlite3_column_int(stmt, 9);
		_NeedMinLevel = sqlite3_column_int(stmt, 10);
		_NeedMaxLevel = sqlite3_column_int(stmt, 11);
		const char * PreQuestId_ = (const char *)sqlite3_column_text(stmt, 12);
		if (PreQuestId_)
			 _PreQuestId = std::string(PreQuestId_);
		const char * IsLeague_ = (const char *)sqlite3_column_text(stmt, 13);
		if (IsLeague_)
			 _IsLeague = std::string(IsLeague_);
		const char * IsAuto_ = (const char *)sqlite3_column_text(stmt, 14);
		if (IsAuto_)
			 _IsAuto = std::string(IsAuto_);
		const char * IsRepeat_ = (const char *)sqlite3_column_text(stmt, 15);
		if (IsRepeat_)
			 _IsRepeat = std::string(IsRepeat_);
		const char * IsLost_ = (const char *)sqlite3_column_text(stmt, 16);
		if (IsLost_)
			 _IsLost = std::string(IsLost_);
		_RepeatInterval = sqlite3_column_int(stmt, 17);
		_RepeatMax = sqlite3_column_int(stmt, 18);
		_RewardPlayGP = sqlite3_column_int(stmt, 19);
		_RewardHeroGP = sqlite3_column_int(stmt, 20);
		_RewardGold = sqlite3_column_int(stmt, 21);
		_RewardCrystal = sqlite3_column_int(stmt, 22);
		_RewardDower = sqlite3_column_int(stmt, 23);
		_RewardMoney = sqlite3_column_int(stmt, 24);
		_RewardConsortiaOffer = sqlite3_column_int(stmt, 25);
		_RewardPlayerOffer = sqlite3_column_int(stmt, 26);
		const char * StartDate_ = (const char *)sqlite3_column_text(stmt, 27);
		if (StartDate_)
			 _StartDate = std::string(StartDate_);
		const char * EndDate_ = (const char *)sqlite3_column_text(stmt, 28);
		if (EndDate_)
			 _EndDate = std::string(EndDate_);
		const char * WeekSpace_ = (const char *)sqlite3_column_text(stmt, 29);
		if (WeekSpace_)
			 _WeekSpace = std::string(WeekSpace_);
		const char * HourSpace_ = (const char *)sqlite3_column_text(stmt, 30);
		if (HourSpace_)
			 _HourSpace = std::string(HourSpace_);
		_RewardStrategy = sqlite3_column_int(stmt, 31);
		const char * Sort_ = (const char *)sqlite3_column_text(stmt, 32);
		if (Sort_)
			 _Sort = std::string(Sort_);
		_ShowType = sqlite3_column_int(stmt, 33);
	}
	static const char* tableName() {
		return "QuestTemp_info";
	}
};

#endif
