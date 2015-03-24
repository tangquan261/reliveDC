#ifndef SpecialTemp_info_hpp
#define SpecialTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SpecialTemp_info : public DataBaseTable<SpecialTemp_info> {
	friend class DataBaseTable<SpecialTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	std::string _Description;
	int _MasterType;
	int _Grades;
	int _CurProperty;
	int _TarProperty;
	int _ChangeRandom;
	int _ChangeNumber;
	int _PawnMasterType;
	std::string _ResPath;
	int _TakeRandom;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Description_)
			 _Description = std::string(Description_);
		_MasterType = sqlite3_column_int(stmt, 4);
		_Grades = sqlite3_column_int(stmt, 5);
		_CurProperty = sqlite3_column_int(stmt, 6);
		_TarProperty = sqlite3_column_int(stmt, 7);
		_ChangeRandom = sqlite3_column_int(stmt, 8);
		_ChangeNumber = sqlite3_column_int(stmt, 9);
		_PawnMasterType = sqlite3_column_int(stmt, 10);
		const char * ResPath_ = (const char *)sqlite3_column_text(stmt, 11);
		if (ResPath_)
			 _ResPath = std::string(ResPath_);
		_TakeRandom = sqlite3_column_int(stmt, 12);
	}
	static const char* tableName() {
		return "SpecialTemp_info";
	}
};

#endif
