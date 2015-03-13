#ifndef CampaignBufferTemp_info_hpp
#define CampaignBufferTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class CampaignBufferTemp_info : public DataBaseTable<CampaignBufferTemp_info> {
	friend class DataBaseTable<CampaignBufferTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	std::string _Icon;
	int _Types;
	int _Grades;
	int _Attack;
	int _Defence;
	int _MagicAttack;
	int _MagicDefence;
	int _Leadpawn;
	int _Live;
	int _Crit;
	int _Block;
	std::string _Description;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Icon_)
			 _Icon = std::string(Icon_);
		_Types = sqlite3_column_int(stmt, 4);
		_Grades = sqlite3_column_int(stmt, 5);
		_Attack = sqlite3_column_int(stmt, 6);
		_Defence = sqlite3_column_int(stmt, 7);
		_MagicAttack = sqlite3_column_int(stmt, 8);
		_MagicDefence = sqlite3_column_int(stmt, 9);
		_Leadpawn = sqlite3_column_int(stmt, 10);
		_Live = sqlite3_column_int(stmt, 11);
		_Crit = sqlite3_column_int(stmt, 12);
		_Block = sqlite3_column_int(stmt, 13);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 14);
		if (Description_)
			 _Description = std::string(Description_);
	}
	static const char* tableName() {
		return "CampaignBufferTemp_info";
	}
};

#endif
