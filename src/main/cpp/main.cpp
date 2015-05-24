#include "Hello.h"
//#include <lua.h>
//#include <lauxlib.h>
//#include <lualib.h>
//#include <iostream>

int main(int argc, char** argv) {
/*
  lua_State *L = lua_open();
  luaopen_base(L);
  luaopen_io(L);
  luaopen_math(L);

  lua_pushstring(L, "Hello World from Lua!", 21);
  const char *s = lua_tostring(L, -1);
  size_t l = lua_strlen(L, -1);

  assert(s[l] == '\0');
  assert(strlen(s) <= l);

  cout << s << endl;
*/
  Hello hello("Dustin");
  hello.sayHello(5);

  //lua_close(L);
  return 0;
}
