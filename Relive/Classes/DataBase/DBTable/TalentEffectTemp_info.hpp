#ifndef TalentEffectTemp_info_hpp
#define TalentEffectTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class TalentEffectTemp_info : public DataBaseTable<TalentEffectTemp_info> {
	friend class DataBaseTable<TalentEffectTemp_info>;
public:
	int _id;
	int _TemplateId;
	int _EffSkillType;
	int _EffSpPercent;
	int _EffSpValue;
	int _EffDamPercent;
	int _EffDamValue;
	int _EffCdPercent;
	int _EffCdValue;
	int _EffCtPercent;
	int _EffCtValue;
	int _EffCriValue;
	int _EffAttackObject;
	int _EffBuffer;
	std::string _EffBufferIds;
	int _EffBufferType;
	int _EffBuffPercent;
	int _EffBuffValue;
	int _EffRandPercent;
	int _EffRandValue;
	int _EffCountPercent;
	int _EffCountValue;
	int _EffIsActive;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_EffSkillType = sqlite3_column_int(stmt, 2);
		_EffSpPercent = sqlite3_column_int(stmt, 3);
		_EffSpValue = sqlite3_column_int(stmt, 4);
		_EffDamPercent = sqlite3_column_int(stmt, 5);
		_EffDamValue = sqlite3_column_int(stmt, 6);
		_EffCdPercent = sqlite3_column_int(stmt, 7);
		_EffCdValue = sqlite3_column_int(stmt, 8);
		_EffCtPercent = sqlite3_column_int(stmt, 9);
		_EffCtValue = sqlite3_column_int(stmt, 10);
		_EffCriValue = sqlite3_column_int(stmt, 11);
		_EffAttackObject = sqlite3_column_int(stmt, 12);
		_EffBuffer = sqlite3_column_int(stmt, 13);
		const char * EffBufferIds_ = (const char *)sqlite3_column_text(stmt, 14);
		if (EffBufferIds_)
			 _EffBufferIds = std::string(EffBufferIds_);
		_EffBufferType = sqlite3_column_int(stmt, 15);
		_EffBuffPercent = sqlite3_column_int(stmt, 16);
		_EffBuffValue = sqlite3_column_int(stmt, 17);
		_EffRandPercent = sqlite3_column_int(stmt, 18);
		_EffRandValue = sqlite3_column_int(stmt, 19);
		_EffCountPercent = sqlite3_column_int(stmt, 20);
		_EffCountValue = sqlite3_column_int(stmt, 21);
		_EffIsActive = sqlite3_column_int(stmt, 22);
	}
	static const char* tableName() {
		return "TalentEffectTemp_info";
	}
};

#endif
