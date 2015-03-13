//
//  CampaignNodeSkeleton.hpp
//  DivineComedy
//
//  Created by liji  on 13-6-13.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_CampaignNodeSkeleton_hpp
#define DivineComedy_CampaignNodeSkeleton_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class CampaignNodeSkeleton : public DataBaseTable<CampaignNodeSkeleton> {
	friend class DataBaseTable<CampaignNodeSkeleton>;
public:
	int _id;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
	}
	static const char* tableName() {
		return "CampaignNodeSkeleton";
	}
};

#endif
