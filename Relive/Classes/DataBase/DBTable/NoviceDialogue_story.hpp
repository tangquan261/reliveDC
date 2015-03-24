#ifndef __NOVICEDIALOGUE_STORY_HPP__

#define __NOVICEDIALOGUE_STORY_HPP__

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class NoviceDialogue_txts : public DataBaseTable<NoviceDialogue_txts> {
	friend class DataBaseTable<NoviceDialogue_txts>;
public:
	int _id;
	int _direction;
	int _roleId;
	std::string _roleName;
	std::string _txt;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_direction = sqlite3_column_int(stmt, 1);
		_roleId = sqlite3_column_int(stmt, 2);
		const char * roleName_ = (const char *)sqlite3_column_text(stmt, 3);
		if (roleName_)
			 _roleName = std::string(roleName_);
		const char * txt_ = (const char *)sqlite3_column_text(stmt, 4);
		if (txt_)
			 _txt = std::string(txt_);
	}
	static const char* tableName() {
		return "NoviceDialogue_txts";
	}
};

class NoviceDialogue_story : public DataBaseTable<NoviceDialogue_story> {
	friend class DataBaseTable<NoviceDialogue_story>;
public:
	int _id;
	int _sceneType;
	std::string _nameId;
	std::vector<NoviceDialogue_txts> _txts;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_sceneType = sqlite3_column_int(stmt, 1);
		const char * nameId_ = (const char *)sqlite3_column_text(stmt, 2);
		if (nameId_)
			 _nameId = std::string(nameId_);
		char condition[50];
		sprintf(condition, "\"story_id\"=\"%d\"", _id);
		_txts = NoviceDialogue_txts::findData(condition);
	}
	static const char* tableName() {
		return "NoviceDialogue_story";
	}
};

#endif
