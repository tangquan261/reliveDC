//
//  RelationProvince.hpp
//  DivineComedy
//
//  Created by zhao shuan on 13-5-23.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_RelationProvince_hpp
#define DivineComedy_RelationProvince_hpp

class RelationProvince : public DataBaseTable<RelationProvince> {
	friend class DataBaseTable<RelationProvince>;
public:
	int _id;
    int _provinceId;
    std::string _provinceName;
    int _countryId;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
        _provinceId = sqlite3_column_int(stmt, 1);
        const char * name = (const char *)sqlite3_column_text(stmt, 2);
		if (name)
            _provinceName = std::string(name);
        _countryId = sqlite3_column_int(stmt, 3);
	}
	static const char* tableName() {
		return "relationprovince";
	}
};

#endif
