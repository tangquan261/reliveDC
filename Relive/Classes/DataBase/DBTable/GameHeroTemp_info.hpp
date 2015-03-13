#ifndef GameHeroTemp_info_hpp
#define GameHeroTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class GameHeroTemp_info : public DataBaseTable<GameHeroTemp_info> {
	friend class DataBaseTable<GameHeroTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	int _HeroType;
	int _Job;
	int _Sexs;
	std::string _Icon;
	int _Grades;
	int _AI;
	int _DefaultSkill;
	int _Power;
	int _Agility;
	int _Intellect;
	int _Captain;
	int _Physique;
	int _Attack;
	int _Defence;
	int _MagicAttack;
	int _MagicDefence;
	int _Live;
	int _Conat;
	int _ForceHit;
	int _Parry;
	std::string _SkillScript;
	std::string _ResPath;
	std::string _ArmPath;
	std::string _ClothPath;
	std::string _RejectType;
	std::string _AddName;
    std::string _Show;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_HeroType = sqlite3_column_int(stmt, 3);
		_Job = sqlite3_column_int(stmt, 4);
		_Sexs = sqlite3_column_int(stmt, 5);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 6);
		if (Icon_)
			 _Icon = std::string(Icon_);
		_Grades = sqlite3_column_int(stmt, 7);
		_AI = sqlite3_column_int(stmt, 8);
		_DefaultSkill = sqlite3_column_int(stmt, 9);
		_Power = sqlite3_column_int(stmt, 10);
		_Agility = sqlite3_column_int(stmt, 11);
		_Intellect = sqlite3_column_int(stmt, 12);
		_Captain = sqlite3_column_int(stmt, 13);
		_Physique = sqlite3_column_int(stmt, 14);
		_Attack = sqlite3_column_int(stmt, 15);
		_Defence = sqlite3_column_int(stmt, 16);
		_MagicAttack = sqlite3_column_int(stmt, 17);
		_MagicDefence = sqlite3_column_int(stmt, 18);
		_Live = sqlite3_column_int(stmt, 19);
		_Conat = sqlite3_column_int(stmt, 20);
		_ForceHit = sqlite3_column_int(stmt, 21);
		_Parry = sqlite3_column_int(stmt, 22);
		const char * SkillScript_ = (const char *)sqlite3_column_text(stmt, 23);
		if (SkillScript_)
			 _SkillScript = std::string(SkillScript_);
		const char * ResPath_ = (const char *)sqlite3_column_text(stmt, 24);
		if (ResPath_)
			 _ResPath = std::string(ResPath_);
		const char * ArmPath_ = (const char *)sqlite3_column_text(stmt, 25);
		if (ArmPath_)
			 _ArmPath = std::string(ArmPath_);
		const char * ClothPath_ = (const char *)sqlite3_column_text(stmt, 26);
		if (ClothPath_)
			 _ClothPath = std::string(ClothPath_);
		const char * RejectType_ = (const char *)sqlite3_column_text(stmt, 27);
		if (RejectType_)
			 _RejectType = std::string(RejectType_);
		const char * AddName_ = (const char *)sqlite3_column_text(stmt, 28);
		if (AddName_)
			 _AddName = std::string(AddName_);
        const char * Show_ = (const char *)sqlite3_column_text(stmt, 38);
        if (Show_)
            _Show = std::string(Show_);
	}
	static const char* tableName() {
		return "GameHeroTemp_info";
	}
};

#endif
