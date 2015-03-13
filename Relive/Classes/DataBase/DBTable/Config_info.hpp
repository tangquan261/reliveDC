#ifndef Config_info_hpp
#define Config_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Config_info : public DataBaseTable<Config_info> {
	friend class DataBaseTable<Config_info>;
public:
	int _id;
	std::string _ConfigName;
	std::string _ConfigValue;
	std::string _Description;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		const char * ConfigName_ = (const char *)sqlite3_column_text(stmt, 1);
		if (ConfigName_)
			 _ConfigName = std::string(ConfigName_);
		const char * ConfigValue_ = (const char *)sqlite3_column_text(stmt, 2);
		if (ConfigValue_)
			 _ConfigValue = std::string(ConfigValue_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 3);
		if (Description_)
			 _Description = std::string(Description_);
	}
	static const char* tableName() {
		return "Config_info";
	}
};

#endif
