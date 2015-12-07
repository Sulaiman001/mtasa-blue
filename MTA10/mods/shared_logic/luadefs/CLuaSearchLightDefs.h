/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/shared_logic/CLuaSearchLightDefs.h
*  PURPOSE:     Lua searchlight class functions
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#pragma once
//#include "CLuaDefs.h"

class CLuaSearchLightDefs : public CLuaDefs
{
public:
    static void     LoadFunctions ( void );
    static void     AddClass ( lua_State* luaVM );

    LUA_DECLARE ( CreateSearchLight );
};