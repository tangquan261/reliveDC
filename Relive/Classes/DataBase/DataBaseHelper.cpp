//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	DataBaseHelper.cpp
//	Author      :	tq
//	Date        :   2015-03-06
//	Description :
//

#include "DataBaseHelper.h"

#include <unistd.h>
#include "HLStringUtil.h"

static int _sql_callback(void * notused, int argc, char ** argv, char ** szColName)
{
    int i;
    for ( i=0; i < argc; i++ )
    {
        printf( "%s = %s\n", szColName[i], argv[i] == 0 ? "NUL" : argv[i] );
    }
    printf("\n");
    return 0;
}

const char* DBKEY = "Hoolai#@!";

using namespace cocos2d;

DataBaseHelper *DataBaseHelper::m_instance = NULL;

DataBaseHelper* DataBaseHelper::getInstance()
{
    if (NULL == m_instance)
    {
        m_instance = new DataBaseHelper();
        ::atexit(destroy);
    }
    return m_instance;
}

void DataBaseHelper::destroy()
{
    if (NULL != m_instance)
    {
        delete m_instance;
    }
}

DataBaseHelper::DataBaseHelper()
{
    m_database = NULL;
}

void DataBaseHelper::initDB()
{
    if (NULL != m_database)
    {
        return;
    }
    
    copyDatabaseIfNeeded();
    
    std::string DBName;
    
    std::string strPath = FileUtils::getInstance()->fullPathForFilename(getDBName());
    
    if (strPath.empty())
    {
        CCLOG("%s db not find", getDBName());
        return;
    }
    
    if ((sqlite3_open(strPath.c_str(), &m_database)==SQLITE_OK))
    {
        //sqlite3_key(m_database, DBKEY, 9);
        printf("open sqlite db ok.\n");
#ifdef COCOS2D_DEBUG
        sqlite3_stmt * stmt = queryTable("version", NULL, "1 order by rowid desc", 0, 0);
        
        if ((sqlite3_step(stmt)==SQLITE_ROW))
        {
            CCLOG("database version: %s", (const char *)sqlite3_column_text(stmt, 0));
        }
        sqlite3_finalize(stmt);
#endif
    }
    else
    {
        CCLOG("error sqlite database\n");
    }
}

DataBaseHelper::~DataBaseHelper()
{
    sqlite3_close(m_database);
    m_database = NULL;
}

void DataBaseHelper::copyDatabaseIfNeeded()
{
//    std::string path = NULL;
//    //hoolai::HLResourceManager::getSingleton()->getWritablePath();
//    path += getDBName();
//#if defined(TARGET_IOS)
//    bool needCopy = false;
//    if (access(path.c_str(), 0) == 0)
//    {
//        sqlite3 *db1;
//        sqlite3 *db2;
//        std::string path1 = hoolai::HLResourceManager::getSingleton()->getBundleFullPath();
//        path1 += getDBName();
//        if (sqlite3_open(path.c_str(), &db1) == SQLITE_OK)
//        {
//            sqlite3_key(db1, DBKEY, 9);
//            int version1 = 0;
//            sqlite3_stmt *statement;
//            if (sqlite3_prepare_v2(db1, "select * from sqlite_master where type ='table' and name = 'version'", -1, &statement, NULL)==SQLITE_OK && sqlite3_step(statement)==SQLITE_ROW)
//            {
//                sqlite3_finalize(statement);
//                
//                if (sqlite3_prepare_v2(db1, "select vid from version order by rowid desc", -1, &statement, NULL)==SQLITE_OK && sqlite3_step(statement)==SQLITE_ROW)
//                {
//                    const char* verStr = (const char*)sqlite3_column_text(statement, 0);
//                    version1 = parseDBVersion(verStr);
//                }
//                
//                if (sqlite3_open(path1.c_str(), &db2) == SQLITE_OK)
//                {
//                    sqlite3_key(db2, DBKEY, 9);
//                    
//                    sqlite3_stmt *statement1;
//                    if (sqlite3_prepare_v2(db2, "select * from sqlite_master where type ='table' and name = 'version'", -1, &statement1, NULL)==SQLITE_OK && sqlite3_step(statement1)==SQLITE_ROW)
//                    {
//                        sqlite3_finalize(statement1);
//                        
//                        if (sqlite3_prepare_v2(db2, "select vid from version order by rowid desc", -1, &statement1, NULL)==SQLITE_OK && sqlite3_step(statement1)==SQLITE_ROW)
//                        {
//                            const char* verStr1 = (const char*)sqlite3_column_text(statement1, 0);
//                            if (parseDBVersion(verStr1) > version1)
//                            {
//                                needCopy = true;
//                            }
//                        }
//                    }
//                    
//                    sqlite3_finalize(statement1);
//                    sqlite3_close(db2);
//                }
//            }
//            else
//            {
//                needCopy = true;
//            }
//            sqlite3_finalize(statement);
//            
//            sqlite3_close(db1);
//        }
//    }
//    else
//    {
//        needCopy = true;
//    }
//    
//    if (needCopy)
//    {
//        copyDB();
//    }
//#elif defined(TARGET_ANDROID)
//    if (access(path.c_str(), 0) == 0)
//    {
//        sqlite3 *db;
//        if (sqlite3_open(path.c_str(), &db) == SQLITE_OK)
//        {
//            sqlite3_key(db, DBKEY, 9);
//            sqlite3_stmt *statement;
//            if (sqlite3_prepare_v2(db, "select * from sqlite_master where type ='table' and name = 'version'", -1, &statement, NULL)==SQLITE_OK && sqlite3_step(statement)==SQLITE_ROW)
//            {
//                sqlite3_finalize(statement);
//                
//                if (sqlite3_prepare_v2(db, "select vid from version order by rowid desc", -1, &statement, NULL)==SQLITE_OK && sqlite3_step(statement)==SQLITE_ROW)
//                {
//                    const char* verStr = (const char*)sqlite3_column_text(statement, 0);
//                    if (parseDBVersion(getDBVersionAndroid().c_str()) > parseDBVersion(verStr))
//                    {
//                        sqlite3_finalize(statement);
//                        sqlite3_close(db);
//                        copyDBFileAndroid();
//                    }
//                    else
//                    {
//                        sqlite3_finalize(statement);
//                        sqlite3_close(db);
//                    }
//                }
//            }
//            else
//            {
//                sqlite3_finalize(statement);
//                sqlite3_close(db);
//                copyDBFileAndroid();
//            }
//        }
//    }
//    else
//    {
//        copyDBFileAndroid();
//    }
//#endif
}

#if defined(CC_TARGET_OS_IPHONE)

void DataBaseHelper::copyDB()
{
    return;
    std::string destpath;
    
    //destpath = FileUtils::getInstance()->fullPathForFilename(getDBName());
    //destpath = hoolai::HLResourceManager::getSingleton()->getWritablePath();
    destpath += getDBName();
    
    std::string sourcepath;
    //sourcepath = hoolai::HLResourceManager::getSingleton()->getBundleFullPath();
    sourcepath += getDBName();
    
    char buf[4096];
    size_t size;
    
    FILE* source = fopen(sourcepath.c_str(), "rb");
    FILE* dest = fopen(destpath.c_str(), "wb");
    
    if (source == NULL || dest == NULL)
    {
        CCLOG("db not find error");
        return;
    }
    
    // clean and more secure
    // feof(FILE* stream) returns non-zero if the end of file indicator for stream is set
    
    while ((size = fread(buf, 1, 4096, source)) != 0)
    {
        fwrite(buf, 1, size, dest);
    }
    
    fclose(source);
    fclose(dest);
    
}
#endif


const char* DataBaseHelper::getDBName()
{
    extern cocos2d::LanguageType g_nLanguageType;
    
    switch(g_nLanguageType)
    {
        case cocos2d::LanguageType::ENGLISH:
            return "main.db";
            break;
        case cocos2d::LanguageType::CHINESE:
            return "main.db";
            break;
        case cocos2d::LanguageType::TAIWAN:
            return "sq_hant.db";
            break;
        case cocos2d::LanguageType::FRENCH:
            return "sq_fr.db";
            break;
        case cocos2d::LanguageType::ITALIAN:
            return "sq_it.db";
            break;
        case cocos2d::LanguageType::GERMAN:
            return "sq_de.db";
            break;
        case cocos2d::LanguageType::SPANISH:
            return "sq_es.db";
            break;
        case cocos2d::LanguageType::RUSSIAN:
            return "sq_ru.db";
            break;
        case cocos2d::LanguageType::KOREAN:
            return "sq_ko.db";
            break;
        case cocos2d::LanguageType::JAPANESE:
            return "sq_ja.db";
            break;
        case cocos2d::LanguageType::HUNGARIAN:
            return "sq_hu.db";
            break;
        case cocos2d::LanguageType::PORTUGUESE:
            return "sq_pt.db";
            break;
        case cocos2d::LanguageType::ARABIC:
            return "sq_ar.db";
            break;
        default:
            return "main.db";
            break;
    }
}

unsigned int DataBaseHelper::parseDBVersion(const char* verStr)
{
    std::vector<int> vs;
    HLStringUtil::SplitInt(vs, verStr, '.');
    
    int version = 0;
    static const int shift[] = {24, 16, 0};
    for (int i = 0; i < vs.size(); ++i)
    {
        version |= (vs[i]) << shift[i];
    }
    return version;
}

int DataBaseHelper::countForTable(const char * table)
{
    int nCount = -1;
    
    std::string strsql;
    
    HLStringUtil::Format(strsql,"select count(*) from %s", table);
    
    sqlite3_stmt *statement;
    
    if (sqlite3_prepare_v2(m_database, strsql.c_str(), -1, &statement, NULL)==SQLITE_OK)
    {
        if (sqlite3_step(statement)==SQLITE_ROW)
        {
            nCount = sqlite3_column_int(statement, 0);
        }
    }
    
    sqlite3_finalize(statement);
    
    return nCount;
}

sqlite3_stmt * DataBaseHelper::queryTable(const char * table, const char *fields, const char *condition, int offset, int count)
{
    std::string sql = std::string("select ");
    if (fields) {
        sql.append(fields);
    } else {
        sql.append("*");
    }
    sql.append(" from ");
    sql.append(table);
    if (condition) {
        sql.append(" where ");
        sql.append(condition);
    }
    if (count) {
        sql.append(" limit ");
        char tmp[20];
        sprintf(tmp, "%d,%d", offset, count);
        sql.append(tmp);
    }
    sql.append(";");
    sqlite3_stmt *statement;
    if (sqlite3_prepare_v2(m_database, sql.c_str(), -1, &statement, NULL)==SQLITE_OK) {
        return statement;
    }
    return NULL;
}



