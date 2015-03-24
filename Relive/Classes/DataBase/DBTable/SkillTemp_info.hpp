#ifndef SkillTemp_info_hpp
#define SkillTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SkillTemp_info : public DataBaseTable<SkillTemp_info> {
	friend class DataBaseTable<SkillTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	std::string _Icons;
	int _MasterType;
	int _SonType;
	int _Grades;
	std::string _PreTemplateId;
	int _NextTemplateId;
	int _NeedPlayerGrade;
	int _Index;
	int _UseWay;
	int _AppearTime;
	int _AcceptObject;
	int _ActionId;
	int _Cost;
	int _QTETime;
	int _Parameter1;
	int _Parameter2;
	int _Parameter3;
	int _Priority;
	std::string _BufferIds;
	int _ProperType;
	int _CountWay;
	int _CoolDown;
	std::string _Description;
	int _IsUseOnDead;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		const char * Icons_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Icons_)
			 _Icons = std::string(Icons_);
		_MasterType = sqlite3_column_int(stmt, 4);
		_SonType = sqlite3_column_int(stmt, 5);
		_Grades = sqlite3_column_int(stmt, 6);
		const char * PreTemplateId_ = (const char *)sqlite3_column_text(stmt, 7);
		if (PreTemplateId_)
			 _PreTemplateId = std::string(PreTemplateId_);
		_NextTemplateId = sqlite3_column_int(stmt, 8);
		_NeedPlayerGrade = sqlite3_column_int(stmt, 9);
		_Index = sqlite3_column_int(stmt, 10);
		_UseWay = sqlite3_column_int(stmt, 11);
		_AppearTime = sqlite3_column_int(stmt, 12);
		_AcceptObject = sqlite3_column_int(stmt, 13);
		_ActionId = sqlite3_column_int(stmt, 14);
		_Cost = sqlite3_column_int(stmt, 15);
		_QTETime = sqlite3_column_int(stmt, 16);
		_Parameter1 = sqlite3_column_int(stmt, 17);
		_Parameter2 = sqlite3_column_int(stmt, 18);
		_Parameter3 = sqlite3_column_int(stmt, 19);
		_Priority = sqlite3_column_int(stmt, 20);
		const char * BufferIds_ = (const char *)sqlite3_column_text(stmt, 21);
		if (BufferIds_)
			 _BufferIds = std::string(BufferIds_);
		_ProperType = sqlite3_column_int(stmt, 22);
		_CountWay = sqlite3_column_int(stmt, 23);
		_CoolDown = sqlite3_column_int(stmt, 24);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 25);
		if (Description_)
			 _Description = std::string(Description_);
		_IsUseOnDead = sqlite3_column_int(stmt, 26);
	}
	static const char* tableName() {
		return "SkillTemp_info";
	}
};

#endif
