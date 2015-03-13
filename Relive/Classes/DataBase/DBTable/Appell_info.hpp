#ifndef Appell_info_hpp
#define Appell_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Appell_info : public DataBaseTable<Appell_info> {
	friend class DataBaseTable<Appell_info>;
public:
	int _id;
	int _TemplateId;
	int _Type;
	std::string _Title;
	std::string _Descript;
	int _Quality;
	int _Notice;
	std::string _Perfix;
	int _Sort;
	std::string _IsLong;
	int _CondtionType;
	//int _Para;
    std::string _newParam;
	int _Job;
    std::string _ShowParam;
//    std::string _titleDetail;           //称号属性  liuzx注释  新版本DB没有该列
    std::string _TimeDeatail;               //时效
    std::string _Skill;
    std::string _Buffs;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_Type = sqlite3_column_int(stmt, 2);
		const char * Title_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Title_)
			 _Title = std::string(Title_);
		const char * Descript_ = (const char *)sqlite3_column_text(stmt, 4);
		if (Descript_)
			 _Descript = std::string(Descript_);
		_Quality = sqlite3_column_int(stmt, 5);
		_Notice = sqlite3_column_int(stmt, 6);
		const char * Perfix_ = (const char *)sqlite3_column_text(stmt, 7);
		if (Perfix_)
			 _Perfix = std::string(Perfix_);
		_Sort = sqlite3_column_int(stmt, 8);
		const char * IsLong_ = (const char *)sqlite3_column_text(stmt, 9);
		if (IsLong_)
			 _IsLong = std::string(IsLong_);
		_CondtionType = sqlite3_column_int(stmt, 10);
		//_Para = sqlite3_column_int(stmt, 11);
        //add:bojiewang 新添加的原先是一个值
        const char* _PramStr = (const char *)sqlite3_column_text(stmt, 11);
        if(_PramStr!=NULL)
        {
            _newParam = _PramStr;
        }
        
        
		_Job = sqlite3_column_int(stmt, 12);
        const char * ShowParam_ = (const char *)sqlite3_column_text(stmt, 13);
		if (ShowParam_)
            _ShowParam = std::string(ShowParam_);
        
//        const char* TitleParam_ = (const char*)sqlite3_column_text(stmt,15);
//        if(TitleParam_)
//        {
//            _titleDetail = std::string(TitleParam_);
//        }
        const char* Times = (const char *)sqlite3_column_text(stmt, 14);
        if(Times!=NULL)
        {
            _TimeDeatail.append(Times);
        }
        const char * Skills_ = (const char *)sqlite3_column_text(stmt, 15);
		if (Skills_)
            _Skill = std::string(Skills_);
        const char * Buffs_ = (const char *)sqlite3_column_text(stmt, 16);
		if (Buffs_)
            _Buffs = std::string(Buffs_);
	}
	static const char* tableName() {
		return "Appell_info";
	}
};

#endif
