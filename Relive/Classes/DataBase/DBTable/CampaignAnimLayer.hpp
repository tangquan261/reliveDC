#ifndef __CAMPAIGNANIMLAYER_HPP__

#define __CAMPAIGNANIMLAYER_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class CampaignAnimLayer : public DataBaseTable<CampaignAnimLayer> {
friend class DataBaseTable<CampaignAnimLayer>;
public:
	int _campaignId;
	int _width;
	int _height;
	int _x;
	int _y;
	int _resource;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_campaignId = sqlite3_column_int(stmt, 0);
		_width = sqlite3_column_int(stmt, 1);
		_height = sqlite3_column_int(stmt, 2);
		_x = sqlite3_column_int(stmt, 3);
		_y = sqlite3_column_int(stmt, 4);
		_resource = sqlite3_column_int(stmt, 5);
	}

	static const char* tableName() {
		return "CampaignAnimLayer";
	}
};

#endif
