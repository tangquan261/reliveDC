//
//  Hero_avatar.hpp
//  DivineComedy
//
//  Created by liji  on 13-4-28.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_Hero_avatar_hpp
#define DivineComedy_Hero_avatar_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Hero_avatar : public DataBaseTable<Hero_avatar> {
	friend class DataBaseTable<Hero_avatar>;
public:
	std::string _part;
	int _showNamePosY;
	int _offsetY;
	int _stand;
	int _walk;
	int _sizeType;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
        const char * part_ = (const char *)sqlite3_column_text(stmt, 0);
		if (part_)
            _part = std::string(part_);
		_showNamePosY = sqlite3_column_int(stmt, 1);
		_offsetY = sqlite3_column_int(stmt, 2);
		_stand = sqlite3_column_int(stmt, 3);
		_walk = sqlite3_column_int(stmt, 4);
		_sizeType = sqlite3_column_int(stmt, 5);
	}
	static const char* tableName() {
		return "Hero_avatar";
	}
};

#endif
