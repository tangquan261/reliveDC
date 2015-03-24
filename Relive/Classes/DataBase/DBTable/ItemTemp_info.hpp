#ifndef ItemTemp_info_hpp
#define ItemTemp_info_hpp

#include "DataBaseHelper.h"
#include <string>
#include <vector>

class ItemTemp_info : public DataBaseTable<ItemTemp_info> {
	friend class DataBaseTable<ItemTemp_info>;
public:
	int _id;   //物品 id
	int _TemplateId; //模板id
	int _MasterType; //物品类型
	int _SonType; //二级类型，用来判断是哪个部位 GoodsSonType
	int _Sexs; //所属性别
	int _NeedGrades; //需要等级 
	int _MaxCount; //最大可使用量
	std::string _TemplateName; //物品名称
	//int _Job; //所属职业
    std::string _Job;
	int _Power;//效率
	int _Agility;//护甲
	int _Intellect;//智力
	int _Captain;//统帅
	int _Attack;//物理攻击（物攻）
	int _Defence;//物理防御 (物防)
	int _Physique;//体质
	int _MagicAttack; //魔法攻击
	int _MagicDefence; //魔法防御
	int _ForceHit; //暴击
	int _Parry; //档格
	int _Live; //生命
	int _Conat; //带兵数
	int _Refresh; 
	int _Property1;
	int _Property2;
	int _Property3;
	int _Property4;
	int _Property5;
	int _Property6;
	std::string _Icon; //图标
	std::string _Description; //描述
	int _Profile; //评分
	int _SellGold;//售价
	std::string _DefaultSkill; //默认技能
	std::string _Avata; //换装
	int _StrengthenMax; //最大可强化等级
	int _RandomSkillCount; //随机技能数
	int _SuiteId; //套装id
	int _StartingPrice; //起始价格
	int _TransformId; //转换模板id
	std::string _IsCanBatch; //是否可以批量使用
protected:
	virtual void parseStatement(sqlite3_stmt * stmt) {
		_id = sqlite3_column_int(stmt, 0);
		_TemplateId = sqlite3_column_int(stmt, 1);
		_MasterType = sqlite3_column_int(stmt, 2);
		_SonType = sqlite3_column_int(stmt, 3);
		_Sexs = sqlite3_column_int(stmt, 4);
		_NeedGrades = sqlite3_column_int(stmt, 5);
		_MaxCount = sqlite3_column_int(stmt, 6);
		const char * TemplateName_ = (const char *)sqlite3_column_text(stmt, 7);
		if (TemplateName_)
			 _TemplateName = std::string(TemplateName_);
        const char * job = (const char *)sqlite3_column_text(stmt, 8);
        if (job) {
            _Job = std::string(job);
        }
		//_Job = sqlite3_column_int(stmt, 8);
		_Power = sqlite3_column_int(stmt, 9);
		_Agility = sqlite3_column_int(stmt, 10);
		_Intellect = sqlite3_column_int(stmt, 11);
		_Captain = sqlite3_column_int(stmt, 12);
		_Attack = sqlite3_column_int(stmt, 13);
		_Defence = sqlite3_column_int(stmt, 14);
		_Physique = sqlite3_column_int(stmt, 15);
		_MagicAttack = sqlite3_column_int(stmt, 16);
		_MagicDefence = sqlite3_column_int(stmt, 17);
		_ForceHit = sqlite3_column_int(stmt, 18);
		_Parry = sqlite3_column_int(stmt, 19);
		_Live = sqlite3_column_int(stmt, 20);
		_Conat = sqlite3_column_int(stmt, 21);
		_Refresh = sqlite3_column_int(stmt, 22);
		_Property1 = sqlite3_column_int(stmt, 23);
		_Property2 = sqlite3_column_int(stmt, 24);
		_Property3 = sqlite3_column_int(stmt, 25);
		_Property4 = sqlite3_column_int(stmt, 26);
		_Property5 = sqlite3_column_int(stmt, 27);
		_Property6 = sqlite3_column_int(stmt, 28);
		const char * Icon_ = (const char *)sqlite3_column_text(stmt, 29);
		if (Icon_)
			 _Icon = std::string(Icon_);
		const char * Description_ = (const char *)sqlite3_column_text(stmt, 30);
		if (Description_)
			 _Description = std::string(Description_);
		_Profile = sqlite3_column_int(stmt, 31);
		_SellGold = sqlite3_column_int(stmt, 32);
		const char * DefaultSkill_ = (const char *)sqlite3_column_text(stmt, 33);
		if (DefaultSkill_)
			 _DefaultSkill = std::string(DefaultSkill_);
		const char * Avata_ = (const char *)sqlite3_column_text(stmt, 34);
		if (Avata_)
			 _Avata = std::string(Avata_);
		_StrengthenMax = sqlite3_column_int(stmt, 35);
		_RandomSkillCount = sqlite3_column_int(stmt, 36);
		_SuiteId = sqlite3_column_int(stmt, 37);
		_StartingPrice = sqlite3_column_int(stmt, 38);
		_TransformId = sqlite3_column_int(stmt, 39);
		const char * IsCanBatch_ = (const char *)sqlite3_column_text(stmt, 40);
		if (IsCanBatch_)
			 _IsCanBatch = std::string(IsCanBatch_);
	}
	static const char* tableName() {
		return "ItemTemp_info";
	}
};

#endif
