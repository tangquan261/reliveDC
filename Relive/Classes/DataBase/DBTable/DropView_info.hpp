#ifndef DropView_info_hpp
#define DropView_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class DropView_info : public DataBaseTable<DropView_info> {
	friend class DataBaseTable<DropView_info>;
public:
	int _id;
	int _CondictionType;
	int _Site;
	std::string _Names;
	std::string _Res;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_CondictionType = sqlite3_column_int(stmt, 1);
		_Site = sqlite3_column_int(stmt, 2);
		const char * Names_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Names_)
			 _Names = std::string(Names_);
		const char * Res_ = (const char *)sqlite3_column_text(stmt, 4);
		if (Res_)
			 _Res = std::string(Res_);
	}
	static const char* tableName() {
		return "DropView_info";
	}
public:
    static DropView_info findDataBySite(int site) {
        char condition[20];
        sprintf(condition, "Site=%d", site);
        sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(DropView_info::tableName(), NULL, condition);
        DropView_info t;
        t._id = DBNOTFOUND;
        if ((sqlite3_step(stmt)==SQLITE_ROW)) {
            t.parseStatement(stmt);
        }
        sqlite3_finalize(stmt);
        return t;
    }
};

#endif
