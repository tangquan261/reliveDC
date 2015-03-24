#ifndef VehicleSkillTemp_info_hpp
#define VehicleSkillTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class VehicleSkillTemp_info : public DataBaseTable<VehicleSkillTemp_info> {
	friend class DataBaseTable<VehicleSkillTemp_info>;
public:
	int _id;
	int _TemplateId;
    std::string _TemplateName;
	std::string _Icons;
	int _ActionId;
	int _CastTime;
	int _CoolDown;
    int _Power;
	int _Power2;
    std::string _Buffs;
    std::string _Description;
	int _AttackRange;
    int _DamageCoverage;
    int _Maximum;
    int _InjuryEffect;
	int _IFF;
	int _SonType;
	
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
		_ActionId = sqlite3_column_int(stmt, 4);
		_CastTime = sqlite3_column_int(stmt, 5);
		_CoolDown = sqlite3_column_int(stmt, 6);
        _Power = sqlite3_column_int(stmt, 7);
		_Power2 = sqlite3_column_int(stmt, 8);
        const char * Buffs_ = (const char *)sqlite3_column_text(stmt, 9);
		if (Buffs_)
            _Buffs = std::string(Icons_);
        const char * Description_ = (const char *)sqlite3_column_text(stmt, 10);
		if (Description_)
            _Description = std::string(Description_);
        _AttackRange = sqlite3_column_int(stmt, 11);
        _DamageCoverage = sqlite3_column_int(stmt, 12);
        _Maximum = sqlite3_column_int(stmt, 13);
		_InjuryEffect = sqlite3_column_int(stmt, 14);
		_IFF = sqlite3_column_int(stmt, 15);
		_SonType = sqlite3_column_int(stmt, 16);
	}
	static const char* tableName() {
		return "VehicleSkillTemp_info";
	}
};

#endif
