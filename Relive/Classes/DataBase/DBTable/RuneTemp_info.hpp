#ifndef RuneTemp_info_hpp
#define RuneTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class RuneTemp_info : public DataBaseTable<RuneTemp_info> {
	friend class DataBaseTable<RuneTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	int _RuneType;
	int _SonType;
//	int _Job;
    std::string _Job;
	int _RuneGrade;
	int _SkillTemplateId;
	int _RuneIndex;
	std::string _Icon;
	int _NextRuneId;
	int _NeedGp;
	int _UseCount;
	int _NeedGrade;
	std::string _Description;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_RuneType = sqlite3_column_int(stmt, 3);
		_SonType = sqlite3_column_int(stmt, 4);
//		_Job = sqlite3_column_int(stmt, 5);
        const char * Job_ = (const char *)sqlite3_column_text(stmt, 5);
        if (Job_) {
            _Job = std::string(Job_);
        }
		_RuneGrade = sqlite3_column_int(stmt, 6);
		_SkillTemplateId = sqlite3_column_int(stmt, 7);
		_RuneIndex = sqlite3_column_int(stmt, 8);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 9);
		if (Icon_)
			 _Icon = std::string(Icon_);
		_NextRuneId = sqlite3_column_int(stmt, 10);
		_NeedGp = sqlite3_column_int(stmt, 11);
		_UseCount = sqlite3_column_int(stmt, 12);
		_NeedGrade = sqlite3_column_int(stmt, 13);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 14);
		if (Description_)
			 _Description = std::string(Description_);
	}
	static const char* tableName() {
		return "RuneTemp_info";
	}
};

#endif
