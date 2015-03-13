#ifndef StarTemp_info_hpp
#define StarTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class StarTemp_info : public DataBaseTable<StarTemp_info> {
	friend class DataBaseTable<StarTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _MasterType;
	int _SonType;
	int _NeedGrades;
	std::string _TemplateName;
	int _Job;
	int _Power;
	int _Agility;
	int _Intellect;
	int _Captain;
	int _Attack;
	int _Defence;
	int _Physique;
	int _MagicAttack;
	int _MagicDefence;
	int _ForceHit;
	int _Parry;
	int _Live;
	int _Conat;
	std::string _Icon;
	std::string _Description;
	int _Profile;
	int _SellGold;
	int _StarPoint;
	int _SellGp;
	int _DefaultSkill;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_MasterType = sqlite3_column_int(stmt, 2);
		_SonType = sqlite3_column_int(stmt, 3);
		_NeedGrades = sqlite3_column_int(stmt, 4);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 5);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_Job = sqlite3_column_int(stmt, 6);
		_Power = sqlite3_column_int(stmt, 7);
		_Agility = sqlite3_column_int(stmt, 8);
		_Intellect = sqlite3_column_int(stmt, 9);
		_Captain = sqlite3_column_int(stmt, 10);
		_Attack = sqlite3_column_int(stmt, 11);
		_Defence = sqlite3_column_int(stmt, 12);
		_Physique = sqlite3_column_int(stmt, 13);
		_MagicAttack = sqlite3_column_int(stmt, 14);
		_MagicDefence = sqlite3_column_int(stmt, 15);
		_ForceHit = sqlite3_column_int(stmt, 16);
		_Parry = sqlite3_column_int(stmt, 17);
		_Live = sqlite3_column_int(stmt, 18);
		_Conat = sqlite3_column_int(stmt, 19);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 20);
		if (Icon_)
			 _Icon = std::string(Icon_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 21);
		if (Description_)
			 _Description = std::string(Description_);
		_Profile = sqlite3_column_int(stmt, 22);
		_SellGold = sqlite3_column_int(stmt, 23);
		_StarPoint = sqlite3_column_int(stmt, 24);
		_SellGp = sqlite3_column_int(stmt, 25);
		_DefaultSkill = sqlite3_column_int(stmt, 26);
	}
	static const char* tableName() {
		return "StarTemp_info";
	}
};

#endif
