#ifndef ConsortiaLevel_info_hpp
#define ConsortiaLevel_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ConsortiaLevel_info : public DataBaseTable<ConsortiaLevel_info> {
	friend class DataBaseTable<ConsortiaLevel_info>;
public:
	int _id;
	int _TemplateId;
	int _Types;
	int _Levels;
	std::string _LevelName;
	int _PreTemplateId;
	std::string _NextTemplateId;
	int _NeedOffer;
	int _CodeTime;
	int _Property1;
	int _Property2;
	int _Property3;
	std::string _Icon;
	std::string _Description;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_Types = sqlite3_column_int(stmt, 2);
		_Levels = sqlite3_column_int(stmt, 3);
		const char * LevelName_ = (const char *)sqlite3_column_text(stmt, 4);
		if (LevelName_)
			 _LevelName = std::string(LevelName_);
		_PreTemplateId = sqlite3_column_int(stmt, 5);
		const char * NextTemplateId_ = (const char *)sqlite3_column_text(stmt, 6);
		if (NextTemplateId_)
			 _NextTemplateId = std::string(NextTemplateId_);
		_NeedOffer = sqlite3_column_int(stmt, 7);
		_CodeTime = sqlite3_column_int(stmt, 8);
		_Property1 = sqlite3_column_int(stmt, 9);
		_Property2 = sqlite3_column_int(stmt, 10);
		_Property3 = sqlite3_column_int(stmt, 11);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 12);
		if (Icon_)
			 _Icon = std::string(Icon_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 13);
		if (Description_)
			 _Description = std::string(Description_);
	}
	static const char* tableName() {
		return "ConsortiaLevel_info";
	}
public:
    static ConsortiaLevel_info getConsortiaTempleteByTypeAndLevel(int type, int level) {
        char condition[200];
        sprintf(condition, " Types=%d and Levels=%d", type, level);
        sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(ConsortiaLevel_info::tableName(), NULL, condition);
        ConsortiaLevel_info t;
        t._id = DBNOTFOUND;
        if ((sqlite3_step(stmt)==SQLITE_ROW)) {
            t.parseStatement(stmt);
        }
        sqlite3_finalize(stmt);
        return t;
    }
    
    static ConsortiaLevel_info getConsortiaTempleteByTempId(int tempId) {
        char condition[200];
        sprintf(condition, " TemplateId=%d ", tempId);
        sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(ConsortiaLevel_info::tableName(), NULL, condition);
        ConsortiaLevel_info t;
        t._id = DBNOTFOUND;
        if ((sqlite3_step(stmt)==SQLITE_ROW)) {
            t.parseStatement(stmt);
        }
        sqlite3_finalize(stmt);
        return t;
    }

};

#endif
