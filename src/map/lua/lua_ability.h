/*
===========================================================================

  Copyright (c) 2010-2015 Darkstar Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

  This file is part of DarkStar-server source code.

===========================================================================
*/

#ifndef _LUAABILITY_H
#define _LUAABILITY_H

#include "../../common/cbasetypes.h"
#include "../../common/lua/lunar.h"

class CAbility;

class CLuaAbility
{
    CAbility* m_PLuaAbility;

public:

    static const char className[];
    static Lunar<CLuaAbility>::Register_t methods[];

    CLuaAbility(lua_State*);
    CLuaAbility(CAbility*);

    CAbility* GetAbility() const
    {
        return m_PLuaAbility;
    }

    std::int32_t getID(lua_State*);
    std::int32_t getMsg(lua_State*);
    std::int32_t getRecast(lua_State*);
    std::int32_t getRange(lua_State*);
    std::int32_t getName(lua_State*);
    std::int32_t getAnimation(lua_State*);
    std::int32_t setMsg(lua_State*);
    std::int32_t setAnimation(lua_State*);
    std::int32_t setRecast(lua_State*);
    std::int32_t setCE(lua_State*);
    std::int32_t setVE(lua_State*);
    std::int32_t setRange(lua_State*);
};

#endif