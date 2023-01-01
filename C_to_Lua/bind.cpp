// Instalar versão de dev
// sudo apt install liblua5.3-dev

// Compilar
// gcc -shared -o bind.so bind.cpp

#include <lua5.3/lua.h>
#include <lua5.3/lauxlib.h>
#include <lua5.3/lualib.h>

// Entradas

// função que recebe um número inteiro e retorna o dobro
int double_int(lua_State *L)
{
   int x = luaL_checkinteger(L, 1);
   lua_pushinteger(L, x * 2);
   return 1;
}

// função que recebe um número de ponto flutuante e retorna o triplo
int triple_float(lua_State *L)
{
   double x = luaL_checknumber(L, 1);
   lua_pushnumber(L, x * 3);
   return 1;
}

// função que recebe uma string e retorna a string
int toString(lua_State *L)
{
   const char *s = luaL_checkstring(L, 1);
   lua_pushstring(L, s);
   return 1;
}

// função que recebe um valor booleano e retorna o valor negado
int negate_bool(lua_State *L)
{
   int x = lua_toboolean(L, 1);
   lua_pushboolean(L, !x);
   return 1;
}

// função que recebe uma tabela e retorna o tamanho da tabela
int get_table_size(lua_State *L)
{
   luaL_checktype(L, 1, LUA_TTABLE);
   int size = lua_rawlen(L, 1);
   lua_pushinteger(L, size);
   return 1;
}

//------Saídas---

// função que retorna um número inteiro
int get_int(lua_State *L)
{
   lua_pushinteger(L, 42);
   return 1;
}

// função que retorna um número de ponto flutuante
int get_float(lua_State *L)
{
   lua_pushnumber(L, 3.14);
   return 1;
}

// função que retorna uma string
int get_string(lua_State *L)
{
   lua_pushstring(L, "Olá, mundo!");
   return 1;
}

// função que retorna um valor booleano
int get_bool(lua_State *L)
{
   lua_pushboolean(L, 1);
   return 1;
}

// função que retorna um valor nil
int get_nil(lua_State *L)
{
   lua_pushnil(L);
   return 1;
}

// função que retorna uma tabela
int get_table(lua_State *L)
{
   lua_newtable(L);
   lua_pushstring(L, "chave");
   lua_pushstring(L, "valor");
   lua_settable(L, -3);
   return 1;
}

static const struct luaL_Reg bind_funcs[] = {
    {"double_int", double_int},
    {"triple_float", triple_float},
    {"reverse_string", toString},
    {"negate_bool", negate_bool},
    {"get_table_size", get_table_size},
    {"get_int", get_int},
    {"get_float", get_float},
    {"get_string", get_string},
    {"get_bool", get_bool},
    {"get_nil", get_nil},
    {"get_table", get_table},
    {NULL, NULL}};

extern "C"
{
   int luaopen_bind(lua_State *L)
   {
      luaL_newlib(L, bind_funcs);
      return 1;
   }
}
