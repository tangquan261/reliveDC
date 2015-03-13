#ifndef __MARRIAGETREE_INFO_HPP__

#define __MARRIAGETREE_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>		
#include <vector>

class MarriageTree_Info : public DataBaseTable<MarriageTree_Info> {
	friend class DataBaseTable<MarriageTree_Info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName; //物品名称
	int _Upgrade;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_Upgrade = sqlite3_column_int(stmt, 3);

	}
	static const char* tableName() {
		return "MarriageTree_Info";
	}
};

#endif
