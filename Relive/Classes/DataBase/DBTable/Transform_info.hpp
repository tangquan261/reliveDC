#ifndef Transform_info_hpp
#define Transform_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Transform_info : public DataBaseTable<Transform_info> {
	friend class DataBaseTable<Transform_info>;
public:
	int _id;
	int _TransformId;
	int _Material1;
	int _Material2;
	int _Material3;
	int _Material4;
	int _Material5;
	int _Material6;
	int _Material7;
	int _Material8;
	int _CostGold;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TransformId = sqlite3_column_int(stmt, 1);
		_Material1 = sqlite3_column_int(stmt, 2);
		_Material2 = sqlite3_column_int(stmt, 3);
		_Material3 = sqlite3_column_int(stmt, 4);
		_Material4 = sqlite3_column_int(stmt, 5);
		_Material5 = sqlite3_column_int(stmt, 6);
		_Material6 = sqlite3_column_int(stmt, 7);
		_Material7 = sqlite3_column_int(stmt, 8);
		_Material8 = sqlite3_column_int(stmt, 9);
		_CostGold = sqlite3_column_int(stmt, 10);
	}
	static const char* tableName() {
		return "Transform_info";
	}
};

#endif
