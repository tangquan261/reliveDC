//
//  RelationArea.hpp
//  DivineComedy
//
//  Created by zhao shuan on 13-5-23.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_RelationArea_hpp
#define DivineComedy_RelationArea_hpp

class RelationArea : public DataBaseTable<RelationArea> {
	friend class DataBaseTable<RelationArea>;
public:
	int _id;
    int _areaId;
    std::string _areaName;
    int _cityId;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
        _areaId = sqlite3_column_int(stmt, 1);
        const char * name = (const char *)sqlite3_column_text(stmt, 2);
		if (name)
            _areaName = std::string(name);
        _cityId = sqlite3_column_int(stmt, 3);
	}
	static const char* tableName() {
		return "relationarea";
	}
};

#endif
