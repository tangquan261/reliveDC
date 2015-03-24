//
//  RelationCity.hpp
//  DivineComedy
//
//  Created by zhao shuan on 13-5-23.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_RelationCity_hpp
#define DivineComedy_RelationCity_hpp

#include "DataBaseHelper.h"

class RelationCity : public DataBaseTable<RelationCity> {
	friend class DataBaseTable<RelationCity>;
public:
	int _id;
    int _cityId;
    std::string _cityName;
    int _provinceId;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
        _cityId = sqlite3_column_int(stmt, 1);
        const char * name = (const char *)sqlite3_column_text(stmt, 2);
		if (name)
            _cityName = std::string(name);
        _provinceId = sqlite3_column_int(stmt, 3);
	}
	static const char* tableName() {
		return "relationcity";
	}
};

#endif
