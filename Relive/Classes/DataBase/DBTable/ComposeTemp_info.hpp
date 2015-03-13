#ifndef ComposeTemp_info_hpp
#define ComposeTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ComposeTemp_info : public DataBaseTable<ComposeTemp_info> {
	friend class DataBaseTable<ComposeTemp_info>;
public:
	int _id;
	int _ComposeId;
	int _Types;
	int _Material1;
	int _Count1;
	int _Material2;
	int _Count2;
	int _Material3;
	int _Count3;
	int _Material4;
	int _Count4;
	int _NeedMinLevel;
	int _NeedBuildingTemp;
	int _NewMaterial;
	int _Counts;
	int _NeedGold;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_ComposeId = sqlite3_column_int(stmt, 1);
		_Types = sqlite3_column_int(stmt, 2);
		_Material1 = sqlite3_column_int(stmt, 3);
		_Count1 = sqlite3_column_int(stmt, 4);
		_Material2 = sqlite3_column_int(stmt, 5);
		_Count2 = sqlite3_column_int(stmt, 6);
		_Material3 = sqlite3_column_int(stmt, 7);
		_Count3 = sqlite3_column_int(stmt, 8);
		_Material4 = sqlite3_column_int(stmt, 9);
		_Count4 = sqlite3_column_int(stmt, 10);
		_NeedMinLevel = sqlite3_column_int(stmt, 11);
		_NeedBuildingTemp = sqlite3_column_int(stmt, 12);
		_NewMaterial = sqlite3_column_int(stmt, 13);
		_Counts = sqlite3_column_int(stmt, 14);
		_NeedGold = sqlite3_column_int(stmt, 15);
	}
	static const char* tableName() {
		return "ComposeTemp_info";
	}
};

#endif
