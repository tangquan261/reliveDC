#ifndef LeedTemp_info_hpp
#define LeedTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class LeedTemp_info : public DataBaseTable<LeedTemp_info> {
	friend class DataBaseTable<LeedTemp_info>;
public:
	int _id;
	int _TemplateId;
	std::string _Title;
	int _PassCount;
	int _Num;
	int _Sort;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * Title_ = (const char *)sqlite3_column_text(stmt, 2);
		if (Title_)
			 _Title = std::string(Title_);
		_PassCount = sqlite3_column_int(stmt, 3);
		_Num = sqlite3_column_int(stmt, 4);
		_Sort = sqlite3_column_int(stmt, 5);
	}
	static const char* tableName() {
		return "LeedTemp_info";
	}
};

#endif
