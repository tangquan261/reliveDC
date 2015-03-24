#ifndef BuildingTemp_info_hpp
#define BuildingTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class BuildingTemp_info : public DataBaseTable<BuildingTemp_info> {
	friend class DataBaseTable<BuildingTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _Camp;
	std::string _BuildingName;
	int _MasterType;
	int _SonType;
	int _BuildingGrade;
	int _PreTemplateId;
	int _NextGradeTemplateId;
	int _NextTemplateId;
	int _PlayerGrades;
	int _CrystalsConsume;
	int _GoldConsume;
	int _Reputation;
	int _UpgradeTime;
	int _Property1;
	int _Property2;
	int _Property3;
	int _Property4;
	int _Property5;
	int _Property6;
	std::string _Description;
	std::string _Activity;
	std::string _Icon;
	int _PosX;
	int _PosY;
	int _TitleX;
	int _TitleY;
	std::string _PicPath;
    int _Sort;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_Camp = sqlite3_column_int(stmt, 2);
		const char * BuildingName_ = (const char *)sqlite3_column_text(stmt, 3);
		if (BuildingName_)
			 _BuildingName = std::string(BuildingName_);
		_MasterType = sqlite3_column_int(stmt, 4);
		_SonType = sqlite3_column_int(stmt, 5);
		_BuildingGrade = sqlite3_column_int(stmt, 6);
		_PreTemplateId = sqlite3_column_int(stmt, 7);
		_NextGradeTemplateId = sqlite3_column_int(stmt, 8);
		_NextTemplateId = sqlite3_column_int(stmt, 9);
		_PlayerGrades = sqlite3_column_int(stmt, 10);
		_CrystalsConsume = sqlite3_column_int(stmt, 11);
		_GoldConsume = sqlite3_column_int(stmt, 12);
		_Reputation = sqlite3_column_int(stmt, 13);
		_UpgradeTime = sqlite3_column_int(stmt, 14);
		_Property1 = sqlite3_column_int(stmt, 15);
		_Property2 = sqlite3_column_int(stmt, 16);
		_Property3 = sqlite3_column_int(stmt, 17);
		_Property4 = sqlite3_column_int(stmt, 18);
		_Property5 = sqlite3_column_int(stmt, 19);
		_Property6 = sqlite3_column_int(stmt, 20);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 21);
		if (Description_)
			 _Description = std::string(Description_);
		const char * Activity_ = (const char *)sqlite3_column_text(stmt, 22);
		if (Activity_)
			 _Activity = std::string(Activity_);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 23);
		if (Icon_)
			 _Icon = std::string(Icon_);
		_PosX = sqlite3_column_int(stmt, 24);
		_PosY = sqlite3_column_int(stmt, 25);
		_TitleX = sqlite3_column_int(stmt, 26);
		_TitleY = sqlite3_column_int(stmt, 27);
		const char * PicPath_ = (const char *)sqlite3_column_text(stmt, 28);
		if (PicPath_)
			 _PicPath = std::string(PicPath_);
        _Sort = sqlite3_column_int(stmt, 29);
	}
	static const char* tableName() {
		return "BuildingTemp_info";
	}
};

#endif
