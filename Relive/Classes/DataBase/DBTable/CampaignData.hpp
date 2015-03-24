#ifndef __CAMPAIGNDATA_HPP__

#define __CAMPAIGNDATA_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class CampaignData : public DataBaseTable<CampaignData> {
friend class DataBaseTable<CampaignData>;
public:
	int _id;
	int _CampaignId;
	std::string _NodeName;
	int _MasterType;
	int _SonType;
	int _RefreshSpeed;
	int _PreNodeIds;
	std::string _Heros;
	std::string _Soldiers;
	std::string _AI;
	int _Property1;
	int _Property2;
	int _Property3;
	int _Property4;
	int _HeroGP;
	int _Level;
	int _NextNodeIds;
	int _BattleType;
	int _StyleType;
	int _MoveToNodeIds;
	int _Formation;
	std::string _PatrolPos;
	int _AttackTypes;
	int _NameColor;
	int _SizeType;
	int _Toward;
	int _Resource;
	std::string _BornPoints;
	int _FixX;
	int _FixY;
	int _Param1;
	int _Param2;
	std::string _Param3;
	std::string _Param4;
	std::string _Param5;
	std::string _Param6;
	int _IsReport;
	int _NodeState;
	int _HandlerRange;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_CampaignId = sqlite3_column_int(stmt, 1);
		const char * NodeName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (NodeName_)
			_NodeName = std::string(NodeName_);
		_MasterType = sqlite3_column_int(stmt, 3);
		_SonType = sqlite3_column_int(stmt, 4);
		_RefreshSpeed = sqlite3_column_int(stmt, 5);
		_PreNodeIds = sqlite3_column_int(stmt, 6);
		const char * Heros_ = (const char *)sqlite3_column_text(stmt, 7);
		if (Heros_)
			_Heros = std::string(Heros_);
		const char * Soldiers_ = (const char *)sqlite3_column_text(stmt, 8);
		if (Soldiers_)
			_Soldiers = std::string(Soldiers_);
		const char * AI_ = (const char *)sqlite3_column_text(stmt, 9);
		if (AI_)
			_AI = std::string(AI_);
		_Property1 = sqlite3_column_int(stmt, 10);
		_Property2 = sqlite3_column_int(stmt, 11);
		_Property3 = sqlite3_column_int(stmt, 12);
		_Property4 = sqlite3_column_int(stmt, 13);
		_HeroGP = sqlite3_column_int(stmt, 14);
		_Level = sqlite3_column_int(stmt, 15);
		_NextNodeIds = sqlite3_column_int(stmt, 16);
		_BattleType = sqlite3_column_int(stmt, 17);
		_StyleType = sqlite3_column_int(stmt, 18);
		_MoveToNodeIds = sqlite3_column_int(stmt, 19);
		_Formation = sqlite3_column_int(stmt, 20);
		const char * PatrolPos_ = (const char *)sqlite3_column_text(stmt, 21);
		if (PatrolPos_)
			_PatrolPos = std::string(PatrolPos_);
		_AttackTypes = sqlite3_column_int(stmt, 22);
		_NameColor = sqlite3_column_int(stmt, 23);
		_SizeType = sqlite3_column_int(stmt, 24);
		_Toward = sqlite3_column_int(stmt, 25);
		_Resource = sqlite3_column_int(stmt, 26);
		const char * BornPoints_ = (const char *)sqlite3_column_text(stmt, 27);
		if (BornPoints_)
			_BornPoints = std::string(BornPoints_);
		_FixX = sqlite3_column_int(stmt, 28);
		_FixY = sqlite3_column_int(stmt, 29);
		_Param1 = sqlite3_column_int(stmt, 30);
		_Param2 = sqlite3_column_int(stmt, 31);
		const char * Param3_ = (const char *)sqlite3_column_text(stmt, 32);
		if (Param3_)
			_Param3 = std::string(Param3_);
		const char * Param4_ = (const char *)sqlite3_column_text(stmt, 33);
		if (Param4_)
			_Param4 = std::string(Param4_);
		const char * Param5_ = (const char *)sqlite3_column_text(stmt, 34);
		if (Param5_)
			_Param5 = std::string(Param5_);
		const char * Param6_ = (const char *)sqlite3_column_text(stmt, 35);
		if (Param6_)
			_Param6 = std::string(Param6_);
		_IsReport = sqlite3_column_int(stmt, 36);
		_NodeState = sqlite3_column_int(stmt, 37);
		_HandlerRange = sqlite3_column_int(stmt, 38);
	}

	static const char* tableName() {
		return "CampaignData";
	}
};

#endif
