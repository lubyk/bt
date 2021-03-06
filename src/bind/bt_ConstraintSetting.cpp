/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btConstraintSetting
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h"


/** ~btConstraintSetting()
 * 
 */
static int btConstraintSetting__btConstraintSetting(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.ConstraintSetting"));
    if (userdata->gc) {
      btConstraintSetting *self = (btConstraintSetting *)userdata->ptr;
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

/** Set attributes (key, value)
 * 
 */
static int btConstraintSetting__set_(lua_State *L) {

  btConstraintSetting *self = *((btConstraintSetting **)dub::checksdata_n(L, 1, "bt.ConstraintSetting"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub::hash(key, 7);
  switch(key_h) {
    case 6: {
      if (DUB_ASSERT_KEY(key, "m_tau")) break;
      self->m_tau = luaL_checknumber(L, 3);
      return 0;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "m_damping")) break;
      self->m_damping = luaL_checknumber(L, 3);
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "m_impulseClamp")) break;
      self->m_impulseClamp = luaL_checknumber(L, 3);
      return 0;
    }
  }
  if (lua_istable(L, 1)) {
    lua_rawset(L, 1);
  } else {
    luaL_error(L, KEY_EXCEPTION_MSG, key);
  }
  return 0;
}

/** Get attributes (key)
 * 
 */
static int btConstraintSetting__get_(lua_State *L) {

  btConstraintSetting *self = *((btConstraintSetting **)dub::checksdata_n(L, 1, "bt.ConstraintSetting", true));
  const char *key = luaL_checkstring(L, 2);
  // <self> "key" <mt>
  // rawget(mt, key)
  lua_pushvalue(L, 2);
  // <self> "key" <mt> "key"
  lua_rawget(L, -2);
  if (!lua_isnil(L, -1)) {
    // Found method.
    return 1;
  } else {
    // Not in mt = attribute access.
    lua_pop(L, 2);
  }
  int key_h = dub::hash(key, 7);
  switch(key_h) {
    case 6: {
      if (DUB_ASSERT_KEY(key, "m_tau")) break;
      lua_pushnumber(L, self->m_tau);
      return 1;
    }
    case 5: {
      if (DUB_ASSERT_KEY(key, "m_damping")) break;
      lua_pushnumber(L, self->m_damping);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "m_impulseClamp")) break;
      lua_pushnumber(L, self->m_impulseClamp);
      return 1;
    }
  }
  return 0;
}

/** btConstraintSetting::btConstraintSetting()
 * bind/btPoint2PointConstraint.h:14
 */
static int btConstraintSetting_btConstraintSetting(lua_State *L) {
  try {
    btConstraintSetting *retval__ = new btConstraintSetting();
    dub::pushudata(L, retval__, "bt.ConstraintSetting", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int btConstraintSetting___tostring(lua_State *L) {
  btConstraintSetting *self = *((btConstraintSetting **)dub::checksdata_n(L, 1, "bt.ConstraintSetting"));
  lua_pushfstring(L, "bt.ConstraintSetting: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btConstraintSetting_member_methods[] = {
  { "__gc"         , btConstraintSetting__btConstraintSetting },
  { "__newindex"   , btConstraintSetting__set_ },
  { "__index"      , btConstraintSetting__get_ },
  { "new"          , btConstraintSetting_btConstraintSetting },
  { "__tostring"   , btConstraintSetting___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_ConstraintSetting(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.ConstraintSetting");
  // <mt>

  // register member methods
  dub::fregister(L, btConstraintSetting_member_methods);
  // setup meta-table
  dub::setup(L, "bt.ConstraintSetting");
  // <mt>
  return 1;
}
