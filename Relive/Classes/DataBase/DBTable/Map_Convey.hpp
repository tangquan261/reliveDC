#ifndef __MAP_CONVEYS_MAP_CONVEYS_HPP__

#define __MAP_CONVEYS_MAP_CONVEYS_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Map_Convey : public DataBaseTable<Map_Convey> {
	friend class DataBaseTable<Map_Convey>;
public:
	int _id;
	int _FromID;
    int _nToID;
    int _nBy;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_FromID = sqlite3_column_int(stmt, 1);
		_nToID = sqlite3_column_int(stmt, 2);
        _nBy = sqlite3_column_int(stmt, 3);
	}
	static const char* tableName() {
		return "Map_Convey";
	}
};

#endif
