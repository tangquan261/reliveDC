//
//  RelationCountry.hpp
//  DivineComedy
//
//  Created by zhao shuan on 13-5-23.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_RelationCountry_hpp
#define DivineComedy_RelationCountry_hpp

#include "DataBaseHelper.h"

class RelationCountry : public DataBaseTable<RelationCountry> {
	friend class DataBaseTable<RelationCountry>;
public:
	int _id;
    std::string _countryName;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
        const char * name = (const char *)sqlite3_column_text(stmt, 1);
		if (name)
            _countryName = std::string(name);
	}
	static const char* tableName() {
		return "relationcountry";
	}
};

#endif
