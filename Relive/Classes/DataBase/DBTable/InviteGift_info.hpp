#ifndef InviteGift_info_hpp
#define InviteGift_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class InviteGift_info : public DataBaseTable<InviteGift_info> {
	friend class DataBaseTable<InviteGift_info>;
public:
	int _id;
	int _Type;
    int _Target;
    int _Condition;
	int _MaxCount;
    int _TemplateId;
    int _Num;
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
        _Type = sqlite3_column_int(stmt, 1);
        _Target = sqlite3_column_int(stmt, 2);
        _Condition = sqlite3_column_int(stmt, 3);
        _MaxCount = sqlite3_column_int(stmt, 4);
        _TemplateId = sqlite3_column_int(stmt, 5);
        _Num = sqlite3_column_int(stmt, 6);
	}
	static const char* tableName() {
		return "t_s_invite_gift";
	}
};

#endif
