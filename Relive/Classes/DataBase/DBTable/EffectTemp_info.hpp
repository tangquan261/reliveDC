#ifndef EffectTemp_info_hpp
#define EffectTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class EffectTemp_info : public DataBaseTable<EffectTemp_info> {
	friend class DataBaseTable<EffectTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _Camp;
	std::string _EffectName;
	int _OwnTypes;
	int _MaxGrade;
	int _PlayerGrade;
	int _PreBuildingtemplateId;
	int _PreTemplateId;
	int _UseType;
	int _PropertyType1;
	int _Property1;
	int _PropertyType2;
	int _Property2;
	int _PropertyType3;
	int _Property3;
	std::string _Description;
	std::string _Icon;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_Camp = sqlite3_column_int(stmt, 2);
		const char * EffectName_ = (const char *)sqlite3_column_text(stmt, 3);
		if (EffectName_)
			 _EffectName = std::string(EffectName_);
		_OwnTypes = sqlite3_column_int(stmt, 4);
		_MaxGrade = sqlite3_column_int(stmt, 5);
		_PlayerGrade = sqlite3_column_int(stmt, 6);
		_PreBuildingtemplateId = sqlite3_column_int(stmt, 7);
		_PreTemplateId = sqlite3_column_int(stmt, 8);
		_UseType = sqlite3_column_int(stmt, 9);
		_PropertyType1 = sqlite3_column_int(stmt, 10);
		_Property1 = sqlite3_column_int(stmt, 11);
		_PropertyType2 = sqlite3_column_int(stmt, 12);
		_Property2 = sqlite3_column_int(stmt, 13);
		_PropertyType3 = sqlite3_column_int(stmt, 14);
		_Property3 = sqlite3_column_int(stmt, 15);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 16);
		if (Description_)
			 _Description = std::string(Description_);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 17);
		if (Icon_)
			 _Icon = std::string(Icon_);
	}
	static const char* tableName() {
		return "EffectTemp_info";
	}
};

#endif
