#ifndef SkillBufferTemp_info_hpp
#define SkillBufferTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class SkillBufferTemp_info : public DataBaseTable<SkillBufferTemp_info> {
	friend class DataBaseTable<SkillBufferTemp_info>;
public:
	int _id;
	int _SkillBufferId;
	std::string _BufferName;
	int _AttackData;
	int _AddWay;
	int _AttackType;
	int _AttackObject;
	int _ValidCount;
	int _AttackWay;
	int _AttackValue;
	int _CountWay;
	std::string _Icon;
	std::string _AddEffect;
	std::string _ActionEffect;
	int _ValuePercent;
	std::string _LastEffect;
	int _PressCount;
	std::string _TalentEffIds;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_SkillBufferId = sqlite3_column_int(stmt, 1);
		const char * BufferName_ = (const char *)sqlite3_column_text(stmt, 2);
		if (BufferName_)
			 _BufferName = std::string(BufferName_);
		_AttackData = sqlite3_column_int(stmt, 3);
		_AddWay = sqlite3_column_int(stmt, 4);
		_AttackType = sqlite3_column_int(stmt, 5);
		_AttackObject = sqlite3_column_int(stmt, 6);
		_ValidCount = sqlite3_column_int(stmt, 7);
		_AttackWay = sqlite3_column_int(stmt, 8);
		_AttackValue = sqlite3_column_int(stmt, 9);
		_CountWay = sqlite3_column_int(stmt, 10);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 11);
		if (Icon_)
			 _Icon = std::string(Icon_);
		const char * AddEffect_ = (const char *)sqlite3_column_text(stmt, 12);
		if (AddEffect_)
			 _AddEffect = std::string(AddEffect_);
		const char * ActionEffect_ = (const char *)sqlite3_column_text(stmt, 13);
		if (ActionEffect_)
			 _ActionEffect = std::string(ActionEffect_);
		_ValuePercent = sqlite3_column_int(stmt, 14);
		const char * LastEffect_ = (const char *)sqlite3_column_text(stmt, 15);
		if (LastEffect_)
			 _LastEffect = std::string(LastEffect_);
		_PressCount = sqlite3_column_int(stmt, 16);
		const char * TalentEffIds_ = (const char *)sqlite3_column_text(stmt, 17);
		if (TalentEffIds_)
			 _TalentEffIds = std::string(TalentEffIds_);
	}
	static const char* tableName() {
		return "SkillBufferTemp_info";
	}
};

#endif
