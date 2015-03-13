//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	DataBaseHelper.h
//	Author      :	tq
//	Date        :   2015-03-06
//	Description :   数据库访问管理类
//

#ifndef __DATABASE_HELPLER_H__
#define __DATABASE_HELPLER_H__

#include "sqlite/sqlite3.h"
#include <vector>
#include <string>


#define DBNOTFOUND INT_MAX

#if defined(TARGET_ANDROID)

#define DEPRECATED

#else

#define DEPRECATED __declspec(deprecated)

#endif

class sqlite3;

class DataBaseHelper
{
public:
    static DataBaseHelper* getInstance();
    
    static void destroy();
    
    
    void initDB();
    ~DataBaseHelper();
    
    void copyDatabaseIfNeeded();
    
    //获得数据库名字
    const char* getDBName();
    
    //根据字符串，转译int DB版本号
    unsigned int parseDBVersion(const char*);
    
    //表记录总条数
    int countForTable(const char * table);
    
    sqlite3_stmt * queryTable(const char * table, const char *fields, const char *condition, int offset=0, int count=0);
    
private:
    DataBaseHelper();
    
    void copyDB();
    
    static DataBaseHelper *m_instance;
    sqlite3 *m_database;
};



template <class T>
class DataBaseTable
{
public:
    DataBaseTable(){}
    virtual void parseStatement(sqlite3_stmt *) = 0;
public:
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
        stmt = DataBaseHelper::getInstance()->queryTable(T::tableName(), NULL, condition);
        
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
        stmt = DataBaseHelper::getInstance()->queryTable(T::tableName(), NULL, condition);
        
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
        stmt = DataBaseHelper::getInstance()->queryTable(T::tableName(), NULL, condition, offset, count);
        
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
    
    static int count()
    {
        return DataBaseHelper::getInstance()->countForTable(T::tableName());
    }
};

#endif

