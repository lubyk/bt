/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btQuadWord
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "LinearMath/btQuadWord.h"


/** ~btQuadWord()
 * 
 */
static int btQuadWord__btQuadWord(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.QuadWord"));
    if (userdata->gc) {
      btQuadWord *self = (btQuadWord *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__gc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__gc: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::getX() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:102
 */
static int btQuadWord_getX(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->getX());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getX: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getX: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::getY() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:104
 */
static int btQuadWord_getY(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->getY());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getY: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getY: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::getZ() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:106
 */
static int btQuadWord_getZ(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->getZ());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getZ: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getZ: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setX(btScalar _x)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:108
 */
static int btQuadWord_setX(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btScalar _x = dub::checknumber(L, 2);
    self->setX(_x);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setX: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setX: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setY(btScalar _y)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:110
 */
static int btQuadWord_setY(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btScalar _y = dub::checknumber(L, 2);
    self->setY(_y);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setY: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setY: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setZ(btScalar _z)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:112
 */
static int btQuadWord_setZ(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btScalar _z = dub::checknumber(L, 2);
    self->setZ(_z);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setZ: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setZ: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setW(btScalar _w)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:114
 */
static int btQuadWord_setW(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btScalar _w = dub::checknumber(L, 2);
    self->setW(_w);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setW: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setW: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::x() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:116
 */
static int btQuadWord_x(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->x());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "x: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "x: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::y() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:118
 */
static int btQuadWord_y(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->y());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "y: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "y: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::z() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:120
 */
static int btQuadWord_z(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->z());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "z: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "z: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btQuadWord::w() const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:122
 */
static int btQuadWord_w(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    lua_pushnumber(L, self->w());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "w: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "w: Unknown exception");
  }
  return dub::error(L);
}

/** bool btQuadWord::operator==(const btQuadWord &other) const
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:130
 */
static int btQuadWord_operator_eq(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btQuadWord *other = *((btQuadWord **)dub::checksdata(L, 2, "bt.QuadWord"));
    lua_pushboolean(L, self->operator==(*other));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__eq: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__eq: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setValue(const btScalar &_x, const btScalar &_y, const btScalar &_z)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:152
 */
static int btQuadWord_setValue(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    int top__ = lua_gettop(L);
    if (top__ >= 5) {
      btScalar _x = dub::checknumber(L, 2);
      btScalar _y = dub::checknumber(L, 3);
      btScalar _z = dub::checknumber(L, 4);
      btScalar _w = dub::checknumber(L, 5);
      self->setValue(_x, _y, _z, _w);
      return 0;
    } else {
      btScalar _x = dub::checknumber(L, 2);
      btScalar _y = dub::checknumber(L, 3);
      btScalar _z = dub::checknumber(L, 4);
      self->setValue(_x, _y, _z);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "setValue: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setValue: Unknown exception");
  }
  return dub::error(L);
}

/** btQuadWord::btQuadWord()
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:181
 */
static int btQuadWord_btQuadWord(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 4) {
      btScalar _x = dub::checknumber(L, 1);
      btScalar _y = dub::checknumber(L, 2);
      btScalar _z = dub::checknumber(L, 3);
      btScalar _w = dub::checknumber(L, 4);
      btQuadWord *retval__ = new btQuadWord(_x, _y, _z, _w);
      dub::pushudata(L, retval__, "bt.QuadWord", true);
      return 1;
    } else if (top__ >= 3) {
      btScalar _x = dub::checknumber(L, 1);
      btScalar _y = dub::checknumber(L, 2);
      btScalar _z = dub::checknumber(L, 3);
      btQuadWord *retval__ = new btQuadWord(_x, _y, _z);
      dub::pushudata(L, retval__, "bt.QuadWord", true);
      return 1;
    } else {
      btQuadWord *retval__ = new btQuadWord();
      dub::pushudata(L, retval__, "bt.QuadWord", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setMax(const btQuadWord &other)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:210
 */
static int btQuadWord_setMax(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btQuadWord *other = *((btQuadWord **)dub::checksdata(L, 2, "bt.QuadWord"));
    self->setMax(*other);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMax: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMax: Unknown exception");
  }
  return dub::error(L);
}

/** void btQuadWord::setMin(const btQuadWord &other)
 * src/vendor/bullet/src/LinearMath/btQuadWord.h:226
 */
static int btQuadWord_setMin(lua_State *L) {
  try {
    btQuadWord *self = *((btQuadWord **)dub::checksdata(L, 1, "bt.QuadWord"));
    btQuadWord *other = *((btQuadWord **)dub::checksdata(L, 2, "bt.QuadWord"));
    self->setMin(*other);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMin: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int btQuadWord___tostring(lua_State *L) {
  btQuadWord *self = *((btQuadWord **)dub::checksdata_n(L, 1, "bt.QuadWord"));
  lua_pushfstring(L, "bt.QuadWord: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btQuadWord_member_methods[] = {
  { "__gc"         , btQuadWord__btQuadWord },
  { "getX"         , btQuadWord_getX      },
  { "getY"         , btQuadWord_getY      },
  { "getZ"         , btQuadWord_getZ      },
  { "setX"         , btQuadWord_setX      },
  { "setY"         , btQuadWord_setY      },
  { "setZ"         , btQuadWord_setZ      },
  { "setW"         , btQuadWord_setW      },
  { "x"            , btQuadWord_x         },
  { "y"            , btQuadWord_y         },
  { "z"            , btQuadWord_z         },
  { "w"            , btQuadWord_w         },
  { "__eq"         , btQuadWord_operator_eq },
  { "setValue"     , btQuadWord_setValue  },
  { "new"          , btQuadWord_btQuadWord },
  { "setMax"       , btQuadWord_setMax    },
  { "setMin"       , btQuadWord_setMin    },
  { "__tostring"   , btQuadWord___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_QuadWord(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.QuadWord");
  // <mt>

  // register member methods
  dub::fregister(L, btQuadWord_member_methods);
  // setup meta-table
  dub::setup(L, "bt.QuadWord");
  // <mt>
  return 1;
}
