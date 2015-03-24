#ifndef __NOVICE__HPP__

#define __NOVICE__HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Novice : public DataBaseTable<Novice> {
	friend class DataBaseTable<Novice>;
public:
	int _id;
	int _serverID;
	std::string _nodeName;
	std::string _nodeClassStyle;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_serverID = sqlite3_column_int(stmt, 1);
		const char * nodeName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (nodeName_)
			 _nodeName = std::string(nodeName_);
		const char * nodeClassStyle_ = (const char *)sqlite3_column_text(stmt, 3);
		if (nodeClassStyle_)
			 _nodeClassStyle = std::string(nodeClassStyle_);
	}
	static const char* tableName() {
		return "Novice_";
	}
};

#endif
