//
//  JSDataBaseHelper.cpp
//  DivineComedy
//
//  Created by zhao shuan on 13-4-24.
//  Copyright (c) 2013年 Hoolai. All rights reserved.
//

#include "JSDataBaseHelper.h"
#include "DataBaseHelper.h"
#include "JSConversions.h"

void registDataBaseHelper(JSContext *cx, JSObject* global)
{
    JSObject* object = JS_NewObject(cx, NULL, NULL, NULL);
    JS_DefineFunction(cx, object, "queryTable", jsDataBaseQueryTable, 5, JSPROP_READONLY | JSPROP_PERMANENT);
    jsval val = OBJECT_TO_JSVAL(object);
    JS::RootedValue rootval(cx,val);
    JS_SetProperty(cx, global, "DataBaseHelper", rootval);
}

JSBool jsDataBaseQueryTable(JSContext *cx, uint32_t argc, jsval *vp)
{
    char *table, *condition;
    char *fields = NULL;
    int offset = 0;
    int count = 0;
    if (argc < 2)
    {
        return JS_FALSE;
    }
    if (argc == 2) // table, condition
    {
        table = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[0]));
        condition = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[1]));
    }
    else if (argc == 3) // table, fields, condition
    {
        table = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[0]));
        fields = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[1]));
        condition = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[2]));
    }
    else if (argc == 4) // table, fields, condition, count
    {
        table = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[0]));
        fields = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[1]));
        condition = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[2]));
        count = JSVAL_TO_INT(JS_ARGV(cx, vp)[3]);
    }
    else // table, fields, condition, offset, count
    {
        table = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[0]));
        fields = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[1]));
        condition = JS_EncodeStringToUTF8(cx, JSVAL_TO_STRING(JS_ARGV(cx, vp)[2]));
        offset = JSVAL_TO_INT(JS_ARGV(cx, vp)[3]);
        count = JSVAL_TO_INT(JS_ARGV(cx, vp)[3]);
    }
    sqlite3_stmt * stmt = DataBaseHelper::sharedDataBaseHelper()->queryTable(table, fields, condition, offset, count);
    //HLLOG("%s", table);
    //HLLOG("%s", condition);
    //HLLOG("%s", fields);
    JS_free(cx, table);
    JS_free(cx, condition);
    JS_free(cx, fields);
    
    std::vector<jsval>arr;
    while ((sqlite3_step(stmt)==SQLITE_ROW))
    {
        JSObject* obj = JS_NewObject(cx, NULL, NULL, NULL);
        int colms = sqlite3_column_count(stmt);
        for (int i = 0; i < colms; ++i)
        {
            int type = sqlite3_column_type(stmt, i);
            jsval val = JSVAL_VOID;
            const char* colname = sqlite3_column_name(stmt, i);
            if (type == SQLITE_INTEGER)
            {
                val = INT_TO_JSVAL(sqlite3_column_int(stmt, i));
            }
            else if (type == SQLITE_FLOAT)
            {
                val = DOUBLE_TO_JSVAL(sqlite3_column_double(stmt, i));
            }
            else if (type == SQLITE_NULL)
            {
                val = JSVAL_NULL;
            }
            else if (type == SQLITE_TEXT)
            {
                const char* value = (const char*)sqlite3_column_text(stmt, i);
                val = hoolai::value_to_jsval(value);
            }
            
            if (!JSVAL_IS_VOID(val))
            {
                JS::RootedValue rootval(cx,val);
                JS_SetProperty(cx, obj, colname, rootval);
            }
        }
        arr.push_back(OBJECT_TO_JSVAL(obj));
    }
    sqlite3_finalize(stmt);
    if (arr.size() == 0)
    {
        
//        exit(0);
        JS_SET_RVAL(cx, vp, JSVAL_VOID);
        return JS_TRUE;
    }
    JSObject* ret = JS_NewArrayObject(cx, (int)arr.size(), &arr[0]);
    JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(ret));
    return JS_TRUE;
}