#ifndef UpGradeTemp_info_hpp
#define UpGradeTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class UpGradeTemp_info : public DataBaseTable<UpGradeTemp_info> {
	friend class DataBaseTable<UpGradeTemp_info>;
public:
	int _id;
	int _UpGradeId;
	int _Types;
	int _TemplateId;
	std::string _TemplateName;
	int _Grades;
	int _Data;
	int _ActiveObject;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_UpGradeId = sqlite3_column_int(stmt, 1);
		_Types = sqlite3_column_int(stmt, 2);
		_TemplateId = sqlite3_column_int(stmt, 3);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 4);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_Grades = sqlite3_column_int(stmt, 5);
		_Data = sqlite3_column_int(stmt, 6);
		_ActiveObject = sqlite3_column_int(stmt, 7);
	}
	static const char* tableName() {
		return "UpGradeTemp_info";
	}
};

#endif
