#ifndef MountTemp_info_hpp
#define MountTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class MountTemp_info : public DataBaseTable<MountTemp_info> {
	friend class DataBaseTable<MountTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	int _MountType;
	int _Power;
	int _Intellect;
	int _Physique;
	int _Agility;
	int _ExpandLevel;
	int _Speed;
	std::string _AvatarPath;
	int _NeedItemId;
	int _Property1;
	int _Property2;
	int _NeedMountGrade;
	std::string _Description;
	int _SoulScore;
	int _Sort;
    int _canFly;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_MountType = sqlite3_column_int(stmt, 3);
		_Power = sqlite3_column_int(stmt, 4);
		_Intellect = sqlite3_column_int(stmt, 5);
		_Physique = sqlite3_column_int(stmt, 6);
		_Agility = sqlite3_column_int(stmt, 7);
		_ExpandLevel = sqlite3_column_int(stmt, 8);
		_Speed = sqlite3_column_int(stmt, 9);
		const char * AvatarPath_ = (const char *)sqlite3_column_text(stmt, 10);
		if (AvatarPath_)
			 _AvatarPath = std::string(AvatarPath_);
		_NeedItemId = sqlite3_column_int(stmt, 11);
		_Property1 = sqlite3_column_int(stmt, 12);
		_Property2 = sqlite3_column_int(stmt, 13);
		_NeedMountGrade = sqlite3_column_int(stmt, 14);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 15);
		if (Description_)
			 _Description = std::string(Description_);
		_SoulScore = sqlite3_column_int(stmt, 16);
		_Sort = sqlite3_column_int(stmt, 17);
        _canFly = sqlite3_column_int(stmt, 18);
	}
	static const char* tableName() {
		return "MountTemp_info";
	}
};

#endif
