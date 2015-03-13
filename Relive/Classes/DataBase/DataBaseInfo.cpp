//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	DataBaseInfo.cpp
//	Author      :	tq
//	Date        :   2015-03-12
//	Description :
//

#include "DataBaseInfo.h"

static bool findDataById(T &t, int tid)
{
    char condition[20];
    sprintf(condition, "id=%d", tid);
    
    return findDataByCondition(t, condition);
}

static bool findDataByTemplateId(T &t, int tid)
{
    char condition[20];
    sprintf(condition, "TemplateId=%d", tid);
    
    return findDataByCondition(t, condition);
}

static bool findDataByCondition(T &t, const char *condition)
{
    bool bRet = false;
    
    sqlite3_stmt * stmt = NULL;
    //stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(T::tableName(), NULL, condition);
    
    if (NULL != stmt)
    {
        if (sqlite3_step(stmt) == SQLITE_ROW)
        {
            t.parseStatement(stmt);
            bRet = true;
        }
        
        sqlite3_finalize(stmt);
    }
    
    return bRet;
}

//通过判断vecData.empty(),判断是否有数据
static void findDatasByCondition(std::vector<T> &vecData, const char *condition)
{
    sqlite3_stmt * stmt = NULL;
    // stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(T::tableName(), NULL, condition);
    
    if (NULL != stmt)
    {
        while ((sqlite3_step(stmt) == SQLITE_ROW))
        {
            T t;
            t.parseStatement(stmt);
            
            vecData.push_back(t);
        }
        
        sqlite3_finalize(stmt);
    }
    
}


//通过判断vecData.empty(),判断是否有数据
static void findData(std::vector<T> &vecData, const char *condition=NULL, int offset=0, int count=0)
{
    sqlite3_stmt * stmt = NULL;
    // stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(T::tableName(), NULL, condition, offset, count);
    
    if (NULL != stmt)
    {
        while ((sqlite3_step(stmt) == SQLITE_ROW))
        {
            T t;
            t.parseStatement(stmt);
            
            vecData.push_back(t);
        }
        
        sqlite3_finalize(stmt);
    }
}
