#ifndef HeroAi_info_hpp
#define HeroAi_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class HeroAi_info : public DataBaseTable<HeroAi_info> {
	friend class DataBaseTable<HeroAi_info>;
public:
	int _id;
	int _HeroID;
	std::string _Skills;
	int _CrazySkill;
	int _BottomSkill;
	std::string _BottomSkills;
	int _DeadSkill;
	int _LessHpSkill;
	int _AngrySkill;
	int _AwakenSkill;
	std::string _Soldiers;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_HeroID = sqlite3_column_int(stmt, 1);
		const char * Skills_ = (const char *)sqlite3_column_text(stmt, 2);
		if (Skills_)
			 _Skills = std::string(Skills_);
		_CrazySkill = sqlite3_column_int(stmt, 3);
		_BottomSkill = sqlite3_column_int(stmt, 4);
		const char * BottomSkills_ = (const char *)sqlite3_column_text(stmt, 5);
		if (BottomSkills_)
			 _BottomSkills = std::string(BottomSkills_);
		_DeadSkill = sqlite3_column_int(stmt, 6);
		_LessHpSkill = sqlite3_column_int(stmt, 7);
		_AngrySkill = sqlite3_column_int(stmt, 8);
		_AwakenSkill = sqlite3_column_int(stmt, 9);
		const char * Soldiers_ = (const char *)sqlite3_column_text(stmt, 10);
		if (Soldiers_)
			 _Soldiers = std::string(Soldiers_);
	}
	static const char* tableName() {
		return "HeroAi_info";
	}
};

#endif
