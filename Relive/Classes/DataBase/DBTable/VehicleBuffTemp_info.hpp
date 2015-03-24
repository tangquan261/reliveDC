#ifndef VehicleBuffTemp_info_hpp
#define VehicleBuffTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class VehicleBuffTemp_info : public DataBaseTable<VehicleBuffTemp_info> {
	friend class DataBaseTable<VehicleBuffTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _Name;
	std::string _Icon;
	int _EffectType;
	int _EffectValue;
	int _EffectPercent;
	int _TogglePercent;
	int _PrepareTime;
	int _Duration;
	int _Interval;
	std::string _LastEffect;
	std::string _Description;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * Name_ = (const char *)sqlite3_column_text(stmt, 2);
		if (Name_)
			 _Name = std::string(Name_);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Icon_)
			 _Icon = std::string(Icon_);
		_EffectType = sqlite3_column_int(stmt, 4);
		_EffectValue = sqlite3_column_int(stmt, 5);
		_EffectPercent = sqlite3_column_int(stmt, 6);
		_TogglePercent = sqlite3_column_int(stmt, 7);
		_PrepareTime = sqlite3_column_int(stmt, 8);
		_Duration = sqlite3_column_int(stmt, 9);
		_Interval = sqlite3_column_int(stmt, 10);
		const char * LastEffect_ = (const char *)sqlite3_column_text(stmt, 11);
		if (LastEffect_)
			 _LastEffect = std::string(LastEffect_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 12);
		if (Description_)
			 _Description = std::string(Description_);
	}
	static const char* tableName() {
		return "VehicleBuffTemp_info";
	}
};

#endif
