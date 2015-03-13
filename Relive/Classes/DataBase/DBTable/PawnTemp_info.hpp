#ifndef PawnTemp_info_hpp
#define PawnTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class PawnTemp_info : public DataBaseTable<PawnTemp_info> {
	friend class DataBaseTable<PawnTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _MasterType;
	int _SonType;
	int _Camp;
	int _Level;
	int _NextLevelTemplateId;
	std::string _PawnName;
	std::string _Description;
	int _CrystalsConsume;
	int _GoldConsume;
	int _NeedBuilding;
	int _NeedTime;
	int _NeedPopulation;
	int _Live;
	int _Attack;
	int _Defence;
	int _MagicAttack;
	int _MagicDefence;
	int _ForceHit;
	int _Parry;
	std::string _Swf;
	int _AttackType;
	int _DefaultSkill;
	std::string _Icon;
	int _HighSkill;
	int _HeroSkill;
	int _AI;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_MasterType = sqlite3_column_int(stmt, 2);
		_SonType = sqlite3_column_int(stmt, 3);
		_Camp = sqlite3_column_int(stmt, 4);
		_Level = sqlite3_column_int(stmt, 5);
		_NextLevelTemplateId = sqlite3_column_int(stmt, 6);
		const char * PawnName_ = (const char *)sqlite3_column_text(stmt, 7);
		if (PawnName_)
			 _PawnName = std::string(PawnName_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 8);
		if (Description_)
			 _Description = std::string(Description_);
		_CrystalsConsume = sqlite3_column_int(stmt, 9);
		_GoldConsume = sqlite3_column_int(stmt, 10);
		_NeedBuilding = sqlite3_column_int(stmt, 11);
		_NeedTime = sqlite3_column_int(stmt, 12);
		_NeedPopulation = sqlite3_column_int(stmt, 13);
		_Live = sqlite3_column_int(stmt, 14);
		_Attack = sqlite3_column_int(stmt, 15);
		_Defence = sqlite3_column_int(stmt, 16);
		_MagicAttack = sqlite3_column_int(stmt, 17);
		_MagicDefence = sqlite3_column_int(stmt, 18);
		_ForceHit = sqlite3_column_int(stmt, 19);
		_Parry = sqlite3_column_int(stmt, 20);
		const char * Swf_ = (const char *)sqlite3_column_text(stmt, 21);
		if (Swf_)
			 _Swf = std::string(Swf_);
		_AttackType = sqlite3_column_int(stmt, 22);
		_DefaultSkill = sqlite3_column_int(stmt, 23);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 24);
		if (Icon_)
			 _Icon = std::string(Icon_);
		_HighSkill = sqlite3_column_int(stmt, 25);
		_HeroSkill = sqlite3_column_int(stmt, 26);
		_AI = sqlite3_column_int(stmt, 27);
	}
	static const char* tableName() {
		return "PawnTemp_info";
	}
};

#endif
