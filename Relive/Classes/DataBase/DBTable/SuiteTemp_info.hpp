#ifndef SuiteTemp_info_hpp
#define SuiteTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SuiteTemp_info : public DataBaseTable<SuiteTemp_info> {
	friend class DataBaseTable<SuiteTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	int _Template1;
	int _Template2;
	int _Template3;
	int _Template4;
	int _Template5;
	int _Template6;
	int _Template7;
	int _Template8;
	int _Template1s;
	int _Template2s;
	int _Template3s;
	int _Template4s;
	int _Template5s;
	int _Template6s;
	int _Template7s;
	int _Template8s;
	int _Property1;
	int _Property2;
	int _Property3;
	int _Property4;
	int _Property5;
	int _Property6;
	int _Property7;
	int _Property8;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_Template1 = sqlite3_column_int(stmt, 3);
		_Template2 = sqlite3_column_int(stmt, 4);
		_Template3 = sqlite3_column_int(stmt, 5);
		_Template4 = sqlite3_column_int(stmt, 6);
		_Template5 = sqlite3_column_int(stmt, 7);
		_Template6 = sqlite3_column_int(stmt, 8);
		_Template7 = sqlite3_column_int(stmt, 9);
		_Template8 = sqlite3_column_int(stmt, 10);
		_Template1s = sqlite3_column_int(stmt, 11);
		_Template2s = sqlite3_column_int(stmt, 12);
		_Template3s = sqlite3_column_int(stmt, 13);
		_Template4s = sqlite3_column_int(stmt, 14);
		_Template5s = sqlite3_column_int(stmt, 15);
		_Template6s = sqlite3_column_int(stmt, 16);
		_Template7s = sqlite3_column_int(stmt, 17);
		_Template8s = sqlite3_column_int(stmt, 18);
		_Property1 = sqlite3_column_int(stmt, 19);
		_Property2 = sqlite3_column_int(stmt, 20);
		_Property3 = sqlite3_column_int(stmt, 21);
		_Property4 = sqlite3_column_int(stmt, 22);
		_Property5 = sqlite3_column_int(stmt, 23);
		_Property6 = sqlite3_column_int(stmt, 24);
		_Property7 = sqlite3_column_int(stmt, 25);
		_Property8 = sqlite3_column_int(stmt, 26);
	}
	static const char* tableName() {
		return "SuiteTemp_info";
	}
};

#endif
