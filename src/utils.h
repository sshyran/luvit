#ifndef LUV_UTILS
#define LUV_UTILS

#include "lua.h"
#include "lauxlib.h"

// Basically throws an exception using printf style formatting
void error (lua_State *L, const char *fmt, ...);

typedef struct {
  lua_State* L;
  int r;
} luv_ref;

#endif