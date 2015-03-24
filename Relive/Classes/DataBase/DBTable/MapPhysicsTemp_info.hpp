#ifndef MapPhysicsTemp_info_hpp
#define MapPhysicsTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class MapPhysicsTemp_info : public DataBaseTable<MapPhysicsTemp_info> {
	friend class DataBaseTable<MapPhysicsTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _MapPhysicsTempName;
	int _MasterType;
	int _SonType;
	int _Grades;
	int _RefreshTime;
	int _Property1;
	int _Property2;
	int _Property3;
	int _Property4;
	int _Property5;
	int _Property6;
	std::string _Description;
	int _HeroGP;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * MapPhysicsTempName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (MapPhysicsTempName_)
			 _MapPhysicsTempName = std::string(MapPhysicsTempName_);
		_MasterType = sqlite3_column_int(stmt, 3);
		_SonType = sqlite3_column_int(stmt, 4);
		_Grades = sqlite3_column_int(stmt, 5);
		_RefreshTime = sqlite3_column_int(stmt, 6);
		_Property1 = sqlite3_column_int(stmt, 7);
		_Property2 = sqlite3_column_int(stmt, 8);
		_Property3 = sqlite3_column_int(stmt, 9);
		_Property4 = sqlite3_column_int(stmt, 10);
		_Property5 = sqlite3_column_int(stmt, 11);
		_Property6 = sqlite3_column_int(stmt, 12);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 13);
		if (Description_)
			 _Description = std::string(Description_);
		_HeroGP = sqlite3_column_int(stmt, 14);
	}
	static const char* tableName() {
		return "MapPhysicsTemp_info";
	}
};

#endif
