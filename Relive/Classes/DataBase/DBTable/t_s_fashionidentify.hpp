#ifndef t_s_fashionidentify_hpp
#define t_s_fashionidentify_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class t_s_fashionidentify : public DataBaseTable<t_s_fashionidentify> {
	friend class DataBaseTable<t_s_fashionidentify>;
public:
	int _id;   //物品 id
	int _Level;
	int _Power; //力量
	int _Armor; //护甲
	int _Intellect;////智力
	int _Physique;//体质
	int _Cost;
	int _CostTemplateId;
	int _SuccessRate;
	int _ActivePower; //力量激活
	int _ActiveArmor; // 护甲激活
	int _ActiveIntellect; // 智力激活
	int _ActivePhysique;  // 体质激活
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_Level = sqlite3_column_int(stmt, 1);
		_Power = sqlite3_column_int(stmt, 2);
		_Armor = sqlite3_column_int(stmt, 3);
		_Intellect = sqlite3_column_int(stmt, 4);
		_Physique = sqlite3_column_int(stmt, 5);
		_Cost = sqlite3_column_int(stmt, 6);
		_CostTemplateId = sqlite3_column_int(stmt, 7);
		_SuccessRate = sqlite3_column_int(stmt, 8);
		_ActivePower = sqlite3_column_int(stmt, 9);
		_ActiveArmor = sqlite3_column_int(stmt, 10);
		_ActiveIntellect = sqlite3_column_int(stmt, 11);
		_ActivePhysique = sqlite3_column_int(stmt, 12);
	}
	static const char* tableName() {
		return "t_s_fashionidentify";
	}
};

#endif
