//
//  t_s_pettemplate.h
//  DivineComedy
//

//  Created by hoolai on 14-6-10.
//  Copyright (c) 2014年 Hoolai. All rights reserved.
//

#ifndef DivineComedy_t_s_pettemplate_h
#define DivineComedy_t_s_pettemplate_h
#include "DataBaseHelper.h"
#include <string>
#include "HLStringUtil.h"
#include "DCStdAfx.h"
#include "HLMacros.h"
#include "sqlite/sqlite3.h"
using std::string;
class t_s_pettemplate : public DataBaseTable<t_s_pettemplate>
{
    friend class DataBaseTable<t_s_pettemplate>;
public:
    t_s_pettemplate()
    {
        _id = 0;
        nTempID_ = 0;
        strNickName_.clear();
        nPetType_ = 0;
        strPetAvatarPath_.clear();
        nQuality_ = 0;
        nMinPowerApt_ = 0;
        nMaxPowerApt_ = 0;
        nMinIntelApt_ = 0;
        nMaxIntelApt_ = 0;
        nMinPhysiApt_ = 0;
        nMaxPhysiApt_ = 0;
        nMinArmorApt_ = 0;
        nMaxArmorApt_ = 0;
        nInitHP_      = 0;
        nFirstfllowSkill_ = 0;      //第一个跟随技能
        nSecondfllowSkill_= 0;      //第二跟随技能
        nThirdfllowSkill_ = 0;       //第三跟随技能
        nNeedLevel_   = 0;          //需要的等级
        nGrowthRate_   = 0;
        strIcon_.clear();
        
        memset(nProperty, 0, sizeof(nProperty));
    }
public:     //Set-Get函数
    SET_ACCESSOR_VALUE(int,nTempID_);
    SET_ACCESSOR_VALUE(string,strNickName_);
    SET_ACCESSOR_VALUE(int,nPetType_);
    SET_ACCESSOR_VALUE(string,strPetAvatarPath_);
    SET_ACCESSOR_VALUE(int,nQuality_);
    SET_ACCESSOR_VALUE(int,nMinPowerApt_);
    SET_ACCESSOR_VALUE(int,nMaxPowerApt_);
    SET_ACCESSOR_VALUE(int,nMinIntelApt_);
    SET_ACCESSOR_VALUE(int,nMaxIntelApt_);
    SET_ACCESSOR_VALUE(int,nMinPhysiApt_);
    SET_ACCESSOR_VALUE(int,nMaxPhysiApt_);
    SET_ACCESSOR_VALUE(int,nMinArmorApt_);
    SET_ACCESSOR_VALUE(int,nMaxArmorApt_);
    SET_ACCESSOR_VALUE(int,nInitHP_);
    SET_ACCESSOR_VALUE(int,nFirstfllowSkill_);
    SET_ACCESSOR_VALUE(int,nSecondfllowSkill_);
    SET_ACCESSOR_VALUE(int,nThirdfllowSkill_);
    SET_ACCESSOR_VALUE(int,nNeedLevel_);
    SET_ACCESSOR_VALUE(int,nGrowthRate_);
    SET_ACCESSOR_VALUE(string,strIcon_);
    int         nProperty[5];            //新增5个属性
    
public:
    static const char* tableName() {
		return "t_s_pettemplate";
	}
    static t_s_pettemplate findDataById(int tid) {
        char condition[20];
        sprintf(condition, "TemplateId=%d", tid);
        sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(tableName(), NULL, condition);
        t_s_pettemplate t;
        t.nTempID_ = DBNOTFOUND;
        if ((sqlite3_step(stmt)==SQLITE_ROW)) {
            t.parseStatement(stmt);
        }
        sqlite3_finalize(stmt);
        return t;
    }
    //quaID:英灵品质 nPetType:种族 strName:英灵名称
    static t_s_pettemplate findDataByQuality(int quaID,int nPetType,const std::string& strName)
    {
        char condition[255];
        memset(condition,0,sizeof(condition));
        sprintf(condition, "Quality=%d and PetType=%d and TemplateName='%s'", quaID,nPetType,strName.c_str());
        sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(tableName(), NULL, condition);
        t_s_pettemplate t;
        t.nTempID_ = DBNOTFOUND;
        if ((sqlite3_step(stmt)==SQLITE_ROW)) {
            t.parseStatement(stmt);
        }
        sqlite3_finalize(stmt);
        return t;
    }
    //quaID:英灵品质 nPetType:种族 level:等级
    static t_s_pettemplate findDataBylevel(int quaID,int nPetType,int level)
    {
        char condition[255];
        memset(condition,0,sizeof(condition));
        sprintf(condition, "Quality=%d and PetType=%d and NeedGrade='%d'", quaID,nPetType,level);
        sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(tableName(), NULL, condition);
        t_s_pettemplate t;
        t.nTempID_ = DBNOTFOUND;
        if ((sqlite3_step(stmt)==SQLITE_ROW)) {
            t.parseStatement(stmt);
        }
        sqlite3_finalize(stmt);
        return t;
    }
    virtual void parseStatement(sqlite3_stmt * stmt) 
    {
        nTempID_ =sqlite3_column_int(stmt,0);
        const char * tmp_str = (const char *)sqlite3_column_text(stmt, 1);
        strNickName_.assign(tmp_str);
        
        nPetType_ = sqlite3_column_int(stmt,2);
        tmp_str = (const char *)sqlite3_column_text(stmt, 3);
        strPetAvatarPath_.assign(tmp_str);
        nQuality_ = sqlite3_column_int(stmt,4);
        //加载力量的值
        tmp_str = (const char *)sqlite3_column_text(stmt, 9);
        
        if(!GetAptValue(tmp_str,nMinPowerApt_,nMaxPowerApt_))
        {
            HLASSERT(false, "力量存储的数据为空!");
            return;
        }
        //智力
        tmp_str = (const char *)sqlite3_column_text(stmt, 10);
        if(!GetAptValue(tmp_str,nMinIntelApt_,nMaxIntelApt_))
        {
            HLASSERT(false, "力量存储的数据为空!");
            return;
        }
        //体质
        tmp_str = (const char *)sqlite3_column_text(stmt, 11);
        if(!GetAptValue(tmp_str,nMinPhysiApt_,nMaxPhysiApt_))
        {
            HLASSERT(false, "力量存储的数据为空!");
            return;
        }
        //护甲
        tmp_str = (const char *)sqlite3_column_text(stmt, 12);
        if(!GetAptValue(tmp_str,nMinArmorApt_,nMaxArmorApt_))
        {
            HLASSERT(false, "力量存储的数据为空!");
            return;
        }
        //获取初始血
        nInitHP_ = sqlite3_column_int(stmt,13);
        //获取三个跟随技能
        tmp_str = (const char *)sqlite3_column_text(stmt, 20);
        if(tmp_str!=NULL)
        {
            std::vector<int> vec;
            hoolai::StringUtil::SplitInt(vec, tmp_str, ',');
            if(vec.size()==3)
            {
                nFirstfllowSkill_ = vec.at(0);
                nSecondfllowSkill_= vec.at(1);
                nThirdfllowSkill_ = vec.at(2);
            }else{
                HLASSERT(false, "跟随技能没有被找到!");
                return;
            }
        }
        //佩戴英灵需要的等级
        nNeedLevel_ = sqlite3_column_int(stmt,23);
        nGrowthRate_= sqlite3_column_int(stmt,24);
        
        for (int i = 0; i < 5; i++)
        {
            nProperty[i] = sqlite3_column_int(stmt, 26+i);
        }
        
    }
private:        //存放变量
    
    int         _id;                //不知道他们用来做什么
    int         nTempID_;           //模板ID
    string      strNickName_;       //英灵名称
    int         nPetType_;          //种族类型(电系还是火系)
    string      strPetAvatarPath_;  //资源路径
    int         nQuality_;           //品质
    
    int         nMinPowerApt_;           //当前级别的力量上限
    int         nMaxPowerApt_;           //当前级别的力量下限
    
    int         nMinIntelApt_;           //当前级别的智力下限
    int         nMaxIntelApt_;           //当前级别的智力上限
    
    int         nMinPhysiApt_;           //当前级别的体质下限
    int         nMaxPhysiApt_;           //当前级别的体质上限
    
    int         nMinArmorApt_;           //当前级别的护甲下限
    int         nMaxArmorApt_;           //当前级别的护甲上限
    int         nInitHP_;                //初始数据
    int         nFirstfllowSkill_;      //第一个跟随技能
    int         nSecondfllowSkill_;      //第二跟随技能
    int         nThirdfllowSkill_;       //第三跟随技能
    int         nNeedLevel_;             //佩蒂当前宠物需要的等级
    int         nGrowthRate_;            //成长率
    string      strIcon_;                //英灵图标  刘振兴添加
private:
    bool  GetAptValue(const char* temp,int& min_,int& max)
    {
        std::vector<int>    temp_vec;
        hoolai::StringUtil::SplitInt(temp_vec, temp, ',');
        if(temp_vec.size()>=2)
        {
            min_ = temp_vec.at(0);
            max = temp_vec.at(1);
            return true;
        }else
        {
            return false;
            
        }
    }
};

/*#include <vector>
#include "DCStdAfx.h"

class t_s_pettemplate : public DataBaseTable<t_s_pettemplate>
{
  friend class DataBaseTable<t_s_pettemplate>;  
private:        //属性字段
    int                     nTempid_;            //模板ID
    std::string             strName_;            //名称
    int                     nPetType;           //英灵类型(应该是电系等)
    std::string             strPetAvatarPath_;   //路径
    int                     nMinPowerApt;       //当前等级最低力量资质
    int                     nMaxPowerApt;       //当前等级最高力量资质
    
    
    
public:         //Get-Set函数
    
    
protected:
    virtual void parseStatement(sqlite3_stmt * stmt)
    {
        
    }
    static const char* tableName()
    {
        return "t_s_pettemplate";
    }
    
    
};*/
#endif
