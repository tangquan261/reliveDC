#ifndef KingContract_info_hpp
#define KingContract_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class KingContract_info : public DataBaseTable<KingContract_info> {
	friend class DataBaseTable<KingContract_info>;
public:
	int _id;
	int _KingContractId;
	std::string _Name;
	std::string _Description;
	int _Duration;
	int _NeedPoint;
	std::string _CanAdd;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_KingContractId = sqlite3_column_int(stmt, 1);
		const char * Name_ = (const char *)sqlite3_column_text(stmt, 2);
		if (Name_)
			 _Name = std::string(Name_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Description_)
			 _Description = std::string(Description_);
		_Duration = sqlite3_column_int(stmt, 4);
		_NeedPoint = sqlite3_column_int(stmt, 5);
		const char * CanAdd_ = (const char *)sqlite3_column_text(stmt, 6);
		if (CanAdd_)
			 _CanAdd = std::string(CanAdd_);
	}
	static const char* tableName() {
		return "KingContract_info";
	}
};

#endif
