#ifndef SkillPropertyTemp_info_hpp
#define SkillPropertyTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SkillPropertyTemp_info : public DataBaseTable<SkillPropertyTemp_info> {
	friend class DataBaseTable<SkillPropertyTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _AddType;
	int _Power;
	int _Agility;
	int _Intellect;
	int _Captain;
	int _Physique;
	int _Attack;
	int _Defence;
	int _MagicAttack;
	int _MagicDefence;
	int _ForceHit;
	int _Live;
	int _Conat;
	int _Parry;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * AddType_ = (const char *)sqlite3_column_text(stmt, 2);
		if (AddType_)
			 _AddType = std::string(AddType_);
		_Power = sqlite3_column_int(stmt, 3);
		_Agility = sqlite3_column_int(stmt, 4);
		_Intellect = sqlite3_column_int(stmt, 5);
		_Captain = sqlite3_column_int(stmt, 6);
		_Physique = sqlite3_column_int(stmt, 7);
		_Attack = sqlite3_column_int(stmt, 8);
		_Defence = sqlite3_column_int(stmt, 9);
		_MagicAttack = sqlite3_column_int(stmt, 10);
		_MagicDefence = sqlite3_column_int(stmt, 11);
		_ForceHit = sqlite3_column_int(stmt, 12);
		_Live = sqlite3_column_int(stmt, 13);
		_Conat = sqlite3_column_int(stmt, 14);
		_Parry = sqlite3_column_int(stmt, 15);
	}
	static const char* tableName() {
		return "SkillPropertyTemp_info";
	}
};

#endif
