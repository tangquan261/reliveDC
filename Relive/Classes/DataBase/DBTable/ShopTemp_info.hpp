#ifndef ShopTemp_info_hpp
#define ShopTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ShopTemp_info : public DataBaseTable<ShopTemp_info> {
	friend class DataBaseTable<ShopTemp_info>;
public:
	int _id;
	int _ShopId;
	int _ShopType;
	int _Area;
	int _ItemId;
	int _Point;
	int _GiftToken;
	int _Gold;
	int _ConsortiaOffer;
	int _Honor;
	int _NeedGrades;
	int _MazeCoin;
	int _MazeLayers;
	int _MazeLayers2;
	int _NeedConsortiaLevels;
	int _NeedMinVip;
	int _VIP0Count;
	int _VIP1Count;
	int _VIP2Count;
	int _VIP3Count;
	int _VIP4Count;
	int _VIP5Count;
	int _VIP6Count;
	int _FirstPrice;
	int _Discount;
	int _Price;
	int _Sort;
	std::string _IsHot;
	int _Labels;
	int _ValidDate;
	int _NeedGeste;
	int _Rands;
	int _Score;
	int _LordsScore;
    int _NeedItem;      //add:bojiewang  兑换需要的元素
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_ShopId = sqlite3_column_int(stmt, 1);
		_ShopType = sqlite3_column_int(stmt, 2);
		_Area = sqlite3_column_int(stmt, 3);
		_ItemId = sqlite3_column_int(stmt, 4);
		_Point = sqlite3_column_int(stmt, 5);
		_GiftToken = sqlite3_column_int(stmt, 6);
		_Gold = sqlite3_column_int(stmt, 7);
		_ConsortiaOffer = sqlite3_column_int(stmt, 8);
		_Honor = sqlite3_column_int(stmt, 9);
		_NeedGrades = sqlite3_column_int(stmt, 10);
		_MazeCoin = sqlite3_column_int(stmt, 11);
		_MazeLayers = sqlite3_column_int(stmt, 12);
		_MazeLayers2 = sqlite3_column_int(stmt, 13);
		_NeedConsortiaLevels = sqlite3_column_int(stmt, 14);
		_NeedMinVip = sqlite3_column_int(stmt, 15);
		_VIP0Count = sqlite3_column_int(stmt, 16);
		_VIP1Count = sqlite3_column_int(stmt, 17);
		_VIP2Count = sqlite3_column_int(stmt, 18);
		_VIP3Count = sqlite3_column_int(stmt, 19);
		_VIP4Count = sqlite3_column_int(stmt, 20);
		_VIP5Count = sqlite3_column_int(stmt, 21);
		_VIP6Count = sqlite3_column_int(stmt, 22);
		_FirstPrice = sqlite3_column_int(stmt, 23);
		_Discount = sqlite3_column_int(stmt, 24);
		_Price = sqlite3_column_int(stmt, 25);
		_Sort = sqlite3_column_int(stmt, 26);
		const char * IsHot_ = (const char *)sqlite3_column_text(stmt, 27);
		if (IsHot_)
			 _IsHot = std::string(IsHot_);
		_Labels = sqlite3_column_int(stmt, 28);
		_ValidDate = sqlite3_column_int(stmt, 29);
		_NeedGeste = sqlite3_column_int(stmt, 30);
		_Rands = sqlite3_column_int(stmt, 31);
		_Score = sqlite3_column_int(stmt, 32);
		_LordsScore = sqlite3_column_int(stmt, 33);
        _NeedItem   = sqlite3_column_int(stmt, 34);
	}
	static const char* tableName() {
		return "ShopTemp_info";
	}
};

#endif
