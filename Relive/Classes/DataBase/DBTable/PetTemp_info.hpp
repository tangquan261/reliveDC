#ifndef __PetTemp_info_HPP__

#define __PetTemp_info_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class PetTemp_info : public DataBaseTable<PetTemp_info> {
	friend class DataBaseTable<PetTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	std::string _PetAvatar;
	int _PetType;
	int _Quality;
	int _Power;
	int _Intel;
	int _Physi;
	int _Armor;
	std::string _PowerApt;
	std::string _IntelApt;
	std::string _PhysiApt;
	std::string _ArmorApt;
	int _MaxHp;
	int _GrowthRate;
	int _FireResi;
	int _WaterResi;
	int _ElectResi;
	int _WindResi;
	int _DarkResi;
	int _LightResi;
	std::string _FollowSkills;
	std::string _ChangeSkills;
	int _DefaultSkills;
	int _NeedGrade;
	std::string _Description;
	int _Property1;
	int _Property2;
	int _Property3;
	int _Property4;
	int _Property5;
	int _Property6;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		const char * PetAvatar_ = (const char *)sqlite3_column_text(stmt, 3);
		if (PetAvatar_)
			 _PetAvatar = std::string(PetAvatar_);
		_PetType = sqlite3_column_int(stmt, 4);
		_Quality = sqlite3_column_int(stmt, 5);
		_Power = sqlite3_column_int(stmt, 6);
		_Intel = sqlite3_column_int(stmt, 7);
		_Physi = sqlite3_column_int(stmt, 8);
		_Armor = sqlite3_column_int(stmt, 9);
		const char * PowerApt_ = (const char *)sqlite3_column_text(stmt, 10);
		if (PowerApt_)
			 _PowerApt = std::string(PowerApt_);
		const char * IntelApt_ = (const char *)sqlite3_column_text(stmt, 11);
		if (IntelApt_)
			 _IntelApt = std::string(IntelApt_);
		const char * PhysiApt_ = (const char *)sqlite3_column_text(stmt, 12);
		if (PhysiApt_)
			 _PhysiApt = std::string(PhysiApt_);
		const char * ArmorApt_ = (const char *)sqlite3_column_text(stmt, 13);
		if (ArmorApt_)
			 _ArmorApt = std::string(ArmorApt_);
		_MaxHp = sqlite3_column_int(stmt, 14);
		_GrowthRate = sqlite3_column_int(stmt, 15);
		_FireResi = sqlite3_column_int(stmt, 16);
		_WaterResi = sqlite3_column_int(stmt, 17);
		_ElectResi = sqlite3_column_int(stmt, 18);
		_WindResi = sqlite3_column_int(stmt, 19);
		_DarkResi = sqlite3_column_int(stmt, 20);
		_LightResi = sqlite3_column_int(stmt, 21);
		const char * FollowSkills_ = (const char *)sqlite3_column_text(stmt, 22);
		if (FollowSkills_)
			 _FollowSkills = std::string(FollowSkills_);
		const char * ChangeSkills_ = (const char *)sqlite3_column_text(stmt, 23);
		if (ChangeSkills_)
			 _ChangeSkills = std::string(ChangeSkills_);
		_DefaultSkills = sqlite3_column_int(stmt, 24);
		_NeedGrade = sqlite3_column_int(stmt, 25);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 26);
		if (Description_)
			 _Description = std::string(Description_);
		_Property1 = sqlite3_column_int(stmt, 27);
		_Property2 = sqlite3_column_int(stmt, 28);
		_Property3 = sqlite3_column_int(stmt, 29);
		_Property4 = sqlite3_column_int(stmt, 30);
		_Property5 = sqlite3_column_int(stmt, 31);
		_Property6 = sqlite3_column_int(stmt, 32);
	}
	static const char* tableName() {
		return "PetTemp_info";
	}
};

#endif
