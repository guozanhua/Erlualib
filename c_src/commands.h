/* NOTE: This list covers all Lua 5.1 C API functions. 
		 Only some are implemented in this library.   */

/* General Lua API */

#define ERL_LUA_ALLOC              1
#define ERL_LUA_ATPANIC            2 
#define ERL_LUA_CALL               3 
#define ERL_LUA_CFUNCTION          4 
#define ERL_LUA_CHECKSTACK         5 
#define ERL_LUA_CLOSE              6 
#define ERL_LUA_CONCAT             7 
#define ERL_LUA_CPCALL             8 
#define ERL_LUA_CREATETABLE        9 
#define ERL_LUA_DUMP               10 
#define ERL_LUA_EQUAL              11
#define ERL_LUA_ERROR              12
#define ERL_LUA_GC                 13
#define ERL_LUA_GETALLOCF          14
#define ERL_LUA_GETFENV            15
#define ERL_LUA_GETFIELD           16
#define ERL_LUA_GETGLOBAL          17
#define ERL_LUA_GETMETATABLE       18
#define ERL_LUA_GETTABLE           19
#define ERL_LUA_GETTOP             20
#define ERL_LUA_INSERT             21
#define ERL_LUA_ISBOOLEAN          22
#define ERL_LUA_ISCFUNCTION        23
#define ERL_LUA_ISFUNCTION         24
#define ERL_LUA_ISLIGHTUSERDATA    25
#define ERL_LUA_ISNIL              26
#define ERL_LUA_ISNONE             27
#define ERL_LUA_ISNONEORNIL        28
#define ERL_LUA_ISNUMBER           29
#define ERL_LUA_ISSTRING           30
#define ERL_LUA_ISTABLE            31
#define ERL_LUA_ISTHREAD           32
#define ERL_LUA_ISUSERDATA         33
#define ERL_LUA_LESSTHAN           34
#define ERL_LUA_LOAD               35
#define ERL_LUA_NEWSTATE           36
#define ERL_LUA_NEWTABLE           37
#define ERL_LUA_NEWTHREAD          38
#define ERL_LUA_NEWUSERDATA        39
#define ERL_LUA_NEXT               40
#define ERL_LUA_OBJLEN             41
#define ERL_LUA_PCALL              42
#define ERL_LUA_POP                43
#define ERL_LUA_PUSHBOOLEAN        44
#define ERL_LUA_PUSHCCLOSURE       45
#define ERL_LUA_PUSHCFUNCTION      46
#define ERL_LUA_PUSHFSTRING        47
#define ERL_LUA_PUSHINTEGER        48
#define ERL_LUA_PUSHLIGHTUSERDATA  49
#define ERL_LUA_PUSHLITERAL        50
#define ERL_LUA_PUSHLSTRING        51
#define ERL_LUA_PUSHNIL            52
#define ERL_LUA_PUSHNUMBER         53
#define ERL_LUA_PUSHSTRING         54
#define ERL_LUA_PUSHTHREAD         55
#define ERL_LUA_PUSHVALUE          56
#define ERL_LUA_PUSHVFSTRING       57
#define ERL_LUA_RAWEQUAL           58
#define ERL_LUA_RAWGET             59
#define ERL_LUA_RAWGETI            60
#define ERL_LUA_RAWSET             61
#define ERL_LUA_RAWSETI            62
#define ERL_LUA_REGISTER           63
#define ERL_LUA_REMOVE             64
#define ERL_LUA_REPLACE            65
#define ERL_LUA_RESUME             66
#define ERL_LUA_SETALLOCF          67
#define ERL_LUA_SETFENV            68
#define ERL_LUA_SETFIELD           69
#define ERL_LUA_SETGLOBAL          70
#define ERL_LUA_SETMETATABLE       71
#define ERL_LUA_SETTABLE           72
#define ERL_LUA_SETTOP             73
#define ERL_LUA_STATUS             74
#define ERL_LUA_TOBOOLEAN          75
#define ERL_LUA_TOCFUNCTION        76
#define ERL_LUA_TOINTEGER          77
#define ERL_LUA_TOLSTRING          78
#define ERL_LUA_TONUMBER           79
#define ERL_LUA_TOPOINTER          80
#define ERL_LUA_TOSTRING           81
#define ERL_LUA_TOTHREAD           82
#define ERL_LUA_TOUSERDATA         83
#define ERL_LUA_TYPE               84
#define ERL_LUA_TYPENAME           85
#define ERL_LUA_XMOVE              86
#define ERL_LUA_YIELD              87

/* Lua Auxiliary Library */

#define ERL_LUAL_ADDCHAR           88
#define ERL_LUAL_ADDLSTRING        89
#define ERL_LUAL_ADDSIZE           90
#define ERL_LUAL_ADDSTRING         91
#define ERL_LUAL_ADDVALUE          92
#define ERL_LUAL_ARGCHECK          93
#define ERL_LUAL_ARGERROR          94
#define ERL_LUAL_BUFFINIT          95
#define ERL_LUAL_CALLMETA          96
#define ERL_LUAL_CHECKANY          97
#define ERL_LUAL_CHECKINT          98
#define ERL_LUAL_CHECKINTEGER      99
#define ERL_LUAL_CHECKLONG         100
#define ERL_LUAL_CHECKLSTRING      101
#define ERL_LUAL_CHECKNUMBER       102
#define ERL_LUAL_CHECKOPTION       103
#define ERL_LUAL_CHECKSTACK        104
#define ERL_LUAL_CHECKSTRING       105
#define ERL_LUAL_CHECKTYPE         106
#define ERL_LUAL_CHECKUDATA        107
#define ERL_LUAL_DOFILE            108
#define ERL_LUAL_DOSTRING          109
#define ERL_LUAL_ERROR             110
#define ERL_LUAL_GETMETAFIELD      111
#define ERL_LUAL_GETMETATABLE      112
#define ERL_LUAL_GSUB              113
#define ERL_LUAL_LOADBUFFER        114
#define ERL_LUAL_LOADFILE          115
#define ERL_LUAL_LOADSTRING        116
#define ERL_LUAL_NEWMETATABLE      117
#define ERL_LUAL_NEWSTATE          118
#define ERL_LUAL_OPENLIBS          119
#define ERL_LUAL_OPTINT            120
#define ERL_LUAL_OPTINTEGER        121
#define ERL_LUAL_OPTLONG           122
#define ERL_LUAL_OPTLSTRING        123
#define ERL_LUAL_OPTNUMBER         124
#define ERL_LUAL_OPTSTRING         125
#define ERL_LUAL_PREPBUFFER        126
#define ERL_LUAL_PUSHRESULT        127
#define ERL_LUAL_REF               128
#define ERL_LUAL_REGISTER          129
#define ERL_LUAL_TYPENAME          130
#define ERL_LUAL_TYPERROR          131
#define ERL_LUAL_UNREF             132
#define ERL_LUAL_WHERE             133

/* Lua Language Function Emulation */

#define ERL_LUAC_PRINT             200
#define ERL_LUAC_PRINT_VARIABLE    201

#define ERL_LUAC_FUNC_0_0          202
#define ERL_LUAC_FUNC_1_0          203
#define ERL_LUAC_FUNC_2_0          204
#define ERL_LUAC_FUNC_3_0          205
#define ERL_LUAC_FUNC_0_1          206
#define ERL_LUAC_FUNC_1_1          207
#define ERL_LUAC_FUNC_2_1          208
#define ERL_LUAC_FUNC_3_1          209


/* Atoms 
 * You could create them on the fly, don't to not break
   a long running server with atom overflow.
*/

#define ATOM_OK driver_mk_atom("ok")
#define ATOM_ERROR driver_mk_atom("error")
#define ATOM_NOFUNC driver_mk_atom("nofunc")
#define ATOM_NORETURN driver_mk_atom("noreturn")
