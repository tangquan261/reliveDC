#ifndef __MARRYSPECTEMPINFO_INFO_HPP__

#define __MARRYSPECTEMPINFO_INFO_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class MarrySpecTempInfo_info : public DataBaseTable<MarrySpecTempInfo_info> {
	friend class DataBaseTable<MarrySpecTempInfo_info>;
public:
	int _id;
	int _TemplateId;
	std::string _TemplateName;
	int _Points;
	int _CampaignId;
	int _RingGrade;
	int _Gift;
    int _Happy;
    int _SlotId;
    int _ClothId;
    int _WingId;
    int _HatId;
	std::string _Path;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
		_Points = sqlite3_column_int(stmt, 3);
		_CampaignId = sqlite3_column_int(stmt, 4);
		_RingGrade = sqlite3_column_int(stmt, 5);
		_Gift = sqlite3_column_int(stmt, 6);
        _Happy = sqlite3_column_int(stmt, 7);
        _SlotId = sqlite3_column_int(stmt, 8);
        _ClothId = sqlite3_column_int(stmt, 9);
        _WingId = sqlite3_column_int(stmt, 10);
        _HatId = sqlite3_column_int(stmt, 11);
		const char * Path_ = (const char *)sqlite3_column_text(stmt, 12);
		if (Path_)
			 _Path = std::string(Path_);
	}
	static const char* tableName() {
		return "MarrySpecTempInfo_info";
	}
};

#endif
