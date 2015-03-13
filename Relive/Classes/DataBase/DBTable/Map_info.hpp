#ifndef Map_info_hpp
#define Map_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class Map_info : public DataBaseTable<Map_info> {
	friend class DataBaseTable<Map_info>;
public:
	int _id;
	int _MapId;
	int _CampaignId;
	std::string _MapName;
	int _Type;
	int _MinLevel;
	int _MaxLevel;
	int _Width;
	int _Height;
	int _MapFileId;
	int _BattleGround;
	std::string _MusicPath;
	std::string _Description;
	int _Index;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_MapId = sqlite3_column_int(stmt, 1);
		_CampaignId = sqlite3_column_int(stmt, 2);
		const char * MapName_ = (const char *)sqlite3_column_text(stmt, 3);
		if (MapName_)
			 _MapName = std::string(MapName_);
		_Type = sqlite3_column_int(stmt, 4);
		_MinLevel = sqlite3_column_int(stmt, 5);
		_MaxLevel = sqlite3_column_int(stmt, 6);
		_Width = sqlite3_column_int(stmt, 7);
		_Height = sqlite3_column_int(stmt, 8);
		_MapFileId = sqlite3_column_int(stmt, 9);
		_BattleGround = sqlite3_column_int(stmt, 10);
		const char * MusicPath_ = (const char *)sqlite3_column_text(stmt, 11);
		if (MusicPath_)
			 _MusicPath = std::string(MusicPath_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 12);
		if (Description_)
			 _Description = std::string(Description_);
		_Index = sqlite3_column_int(stmt, 13);
	}
	static const char* tableName() {
		return "Map_info";
	}
};

#endif
