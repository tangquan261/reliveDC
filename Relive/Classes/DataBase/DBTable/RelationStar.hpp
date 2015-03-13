//
//  RelationStar.hpp
//  DivineComedy
//
//  Created by zhao shuan on 13-5-23.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_RelationStar_hpp
#define DivineComedy_RelationStar_hpp

class RelationStar : public DataBaseTable<RelationStar> {
	friend class DataBaseTable<RelationStar>;
public:
	int _id;
    std::string _starName;
    int _monthStart;
    int _dayStart;
    int _monthEnd;
    int _dayEnd;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
        const char * name = (const char *)sqlite3_column_text(stmt, 1);
		if (name)
            _starName = std::string(name);
        _monthStart = sqlite3_column_int(stmt, 2);
        _dayStart = sqlite3_column_int(stmt, 3);
        _monthEnd = sqlite3_column_int(stmt, 4);
        _dayEnd = sqlite3_column_int(stmt, 5);
	}
	static const char* tableName() {
		return "relationstar";
	}
};

#endif
