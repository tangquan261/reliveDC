#ifndef QuestCondition_info_hpp
#define QuestCondition_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class QuestCondition_info : public DataBaseTable<QuestCondition_info> {
	friend class DataBaseTable<QuestCondition_info>;
public:
	int _id;
	int _TemplateId;
	int _CondictionType;
	std::string _CondictionTitle;
	int _Para1;
	int _Para2;
	int _Para3;
    std::string _para4;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_CondictionType = sqlite3_column_int(stmt, 2);
		const char * CondictionTitle_ = (const char *)sqlite3_column_text(stmt, 3);
		if (CondictionTitle_)
			 _CondictionTitle = std::string(CondictionTitle_);
		_Para1 = sqlite3_column_int(stmt, 4);
		_Para2 = sqlite3_column_int(stmt, 5);
		_Para3 = sqlite3_column_int(stmt, 6);
        
        const char * para4 = (const char *)sqlite3_column_text(stmt, 7);
		if (para4)
            _para4 = std::string(para4);
	}
	static const char* tableName() {
		return "QuestCondition_info";
	}
};

#endif
