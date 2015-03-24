#ifndef VehicleObjectTemp_info_hpp
#define VehicleObjectTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>
#include "UpGradeTemp_info.hpp"

class VehicleObjectTemp_info : public DataBaseTable<VehicleObjectTemp_info> {
	friend class DataBaseTable<VehicleObjectTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	int _Attack;
	int _NeedDiamond;
	int _Defence;
	int _Hp;
	int _Dodge;
	int _GeniusSkill;
	int _NormalSkill;
	std::string _Description;
	std::string _Avatar;
	int _NeedGrades;
	int _Speed;
	int _Sort;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_Attack = sqlite3_column_int(stmt, 3);
		_NeedDiamond = sqlite3_column_int(stmt, 4);
		_Defence = sqlite3_column_int(stmt, 5);
		_Hp = sqlite3_column_int(stmt, 6);
		_Dodge = sqlite3_column_int(stmt, 7);
		_GeniusSkill = sqlite3_column_int(stmt, 8);
		_NormalSkill = sqlite3_column_int(stmt, 9);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 10);
		if (Description_)
			 _Description = std::string(Description_);
		const char * Avatar_ = (const char *)sqlite3_column_text(stmt, 11);
		if (Avatar_)
			 _Avatar = std::string(Avatar_);
		_NeedGrades = sqlite3_column_int(stmt, 12);
		_Speed = sqlite3_column_int(stmt, 13);
		_Sort = sqlite3_column_int(stmt, 14);
	}
	static const char* tableName() {
		return "VehicleObjectTemp_info";
	}
public:
    int autoOpenGrade()
    {
        _autoOpenGrade = 1;
//        std::string con = StringUtil::Format("Grades = %d and Types = %d",maxGrades,UpgradeType::UPGRADE_TYPE_PLAYER);
//                std::vector<UpGradeTemp_info> temp = UpGradeTemp_info::findData(con.c_str());
        char a[100];
        sprintf(a, "Types = %d",24);

        std::vector<UpGradeTemp_info> arr = UpGradeTemp_info::findDatasByCondition(a);
        std::vector<UpGradeTemp_info>::iterator iter = arr.begin();
        for (; iter != arr.end(); iter++) {
            if ((*iter)._ActiveObject == _TemplateId) {
                _autoOpenGrade = (*iter)._Grades;
                break;
            }
        }
        return _autoOpenGrade;
    }
    
private:
    int _autoOpenGrade;
};

#endif
