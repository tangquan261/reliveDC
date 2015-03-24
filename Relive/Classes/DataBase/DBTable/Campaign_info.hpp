#ifndef Campaign_info_hpp
#define Campaign_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Campaign_info : public DataBaseTable<Campaign_info> {
	friend class DataBaseTable<Campaign_info>;
public:
	int _id;
	int _CampaignId;
	std::string _CampaignName;
	int _Types;
	int _SonTypes;
	int _LandId;
	int _DungeonId;
	int _AreaId;
	int _MinLevel;
	int _MaxLevel;
	int _PreCampaignId;
	int _NextCampaignId;
	int _Capacity;
	int _DifficultyGrade;
	std::string _Description;
	int _CardPayment;
	int _PosX;
	int _PosY;
	std::string _Item;
	int _StandSecond;
	int _StandardDamage;
	int _StandardHurt;
	int _BaseGp;
	std::string _OpenTime;
	std::string _StopTime;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_CampaignId = sqlite3_column_int(stmt, 1);
		const char * CampaignName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (CampaignName_)
			 _CampaignName = std::string(CampaignName_);
		_Types = sqlite3_column_int(stmt, 3);
		_SonTypes = sqlite3_column_int(stmt, 4);
		_LandId = sqlite3_column_int(stmt, 5);
		_DungeonId = sqlite3_column_int(stmt, 6);
		_AreaId = sqlite3_column_int(stmt, 7);
		_MinLevel = sqlite3_column_int(stmt, 8);
		_MaxLevel = sqlite3_column_int(stmt, 9);
		_PreCampaignId = sqlite3_column_int(stmt, 10);
		_NextCampaignId = sqlite3_column_int(stmt, 11);
		_Capacity = sqlite3_column_int(stmt, 12);
		_DifficultyGrade = sqlite3_column_int(stmt, 13);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 14);
		if (Description_)
			 _Description = std::string(Description_);
		_CardPayment = sqlite3_column_int(stmt, 15);
		_PosX = sqlite3_column_int(stmt, 16);
		_PosY = sqlite3_column_int(stmt, 17);
		const char * Item_ = (const char *)sqlite3_column_text(stmt, 18);
		if (Item_)
			 _Item = std::string(Item_);
		_StandSecond = sqlite3_column_int(stmt, 19);
		_StandardDamage = sqlite3_column_int(stmt, 20);
		_StandardHurt = sqlite3_column_int(stmt, 21);
		_BaseGp = sqlite3_column_int(stmt, 22);
		const char * OpenTime_ = (const char *)sqlite3_column_text(stmt, 23);
		if (OpenTime_)
			 _OpenTime = std::string(OpenTime_);
		const char * StopTime_ = (const char *)sqlite3_column_text(stmt, 24);
		if (StopTime_)
			 _StopTime = std::string(StopTime_);
	}
	static const char* tableName() {
		return "Campaign_info";
	}
};

#endif
