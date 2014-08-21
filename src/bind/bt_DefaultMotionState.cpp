/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btDefaultMotionState
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "LinearMath/btDefaultMotionState.h"


/** ~btDefaultMotionState()
 * 
 */
static int btDefaultMotionState__btDefaultMotionState(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.DefaultMotionState"));
    if (userdata->gc) {
      btDefaultMotionState *self = (btDefaultMotionState *)userdata->ptr;
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
static int btDefaultMotionState__set_(lua_State *L) {

  btDefaultMotionState *self = *((btDefaultMotionState **)dub::checksdata_n(L, 1, "bt.DefaultMotionState"));
  const char *key = luaL_checkstring(L, 2);
  int key_h = dub::hash(key, 4);
  switch(key_h) {
    case 3: {
      if (DUB_ASSERT_KEY(key, "m_graphicsWorldTrans")) break;
      self->m_graphicsWorldTrans = **((btTransform **)dub::checksdata_n(L, 3, "bt.Transform"));
      return 0;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "m_centerOfMassOffset")) break;
      self->m_centerOfMassOffset = **((btTransform **)dub::checksdata_n(L, 3, "bt.Transform"));
      return 0;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "m_startWorldTrans")) break;
      self->m_startWorldTrans = **((btTransform **)dub::checksdata_n(L, 3, "bt.Transform"));
      return 0;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "m_userPointer")) break;
      dub::protect(L, 1, 3, "m_userPointer");
      self->m_userPointer = *((void **)dub::checksdata_n(L, 3, "void"));
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
static int btDefaultMotionState__get_(lua_State *L) {

  btDefaultMotionState *self = *((btDefaultMotionState **)dub::checksdata_n(L, 1, "bt.DefaultMotionState", true));
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
  int key_h = dub::hash(key, 4);
  switch(key_h) {
    case 3: {
      if (DUB_ASSERT_KEY(key, "m_graphicsWorldTrans")) break;
      dub::pushudata(L, &self->m_graphicsWorldTrans, "bt.Transform", false);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "m_centerOfMassOffset")) break;
      dub::pushudata(L, &self->m_centerOfMassOffset, "bt.Transform", false);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "m_startWorldTrans")) break;
      dub::pushudata(L, &self->m_startWorldTrans, "bt.Transform", false);
      return 1;
    }
    case 0: {
      if (DUB_ASSERT_KEY(key, "m_userPointer")) break;
      void *retval__ = self->m_userPointer;
      if (!retval__) return 0;
      dub::pushudata(L, retval__, "void", false);
      return 1;
    }
  }
  return 0;
}

/** Cast (class_name)
 * 
 */
static int btDefaultMotionState__cast_(lua_State *L) {

  btDefaultMotionState *self = *((btDefaultMotionState **)dub::checksdata_n(L, 1, "bt.DefaultMotionState"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub::hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.MotionState")) break;
      *retval__ = static_cast<btMotionState *>(self);
      return 1;
    }
  }
  return 0;
}

/** btDefaultMotionState::btDefaultMotionState(const btTransform &startTrans=btTransform::getIdentity(), const btTransform &centerOfMassOffset=btTransform::getIdentity())
 * src/vendor/bullet/src/LinearMath/btDefaultMotionState.h:16
 */
static int btDefaultMotionState_btDefaultMotionState(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 2) {
      btTransform *startTrans = *((btTransform **)dub::checksdata(L, 1, "bt.Transform"));
      btTransform *centerOfMassOffset = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
      btDefaultMotionState *retval__ = new btDefaultMotionState(*startTrans, *centerOfMassOffset);
      dub::pushudata(L, retval__, "bt.DefaultMotionState", true);
      return 1;
    } else if (top__ >= 1) {
      btTransform *startTrans = *((btTransform **)dub::checksdata(L, 1, "bt.Transform"));
      btDefaultMotionState *retval__ = new btDefaultMotionState(*startTrans);
      dub::pushudata(L, retval__, "bt.DefaultMotionState", true);
      return 1;
    } else {
      btDefaultMotionState *retval__ = new btDefaultMotionState();
      dub::pushudata(L, retval__, "bt.DefaultMotionState", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btDefaultMotionState::getWorldTransform(btTransform &centerOfMassWorldTrans) const
 * src/vendor/bullet/src/LinearMath/btDefaultMotionState.h:26
 */
static int btDefaultMotionState_getWorldTransform(lua_State *L) {
  try {
    btDefaultMotionState *self = *((btDefaultMotionState **)dub::checksdata(L, 1, "bt.DefaultMotionState"));
    btTransform *centerOfMassWorldTrans = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    self->getWorldTransform(*centerOfMassWorldTrans);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getWorldTransform: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getWorldTransform: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btDefaultMotionState::setWorldTransform(const btTransform &centerOfMassWorldTrans)
 * src/vendor/bullet/src/LinearMath/btDefaultMotionState.h:33
 */
static int btDefaultMotionState_setWorldTransform(lua_State *L) {
  try {
    btDefaultMotionState *self = *((btDefaultMotionState **)dub::checksdata(L, 1, "bt.DefaultMotionState"));
    btTransform *centerOfMassWorldTrans = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    self->setWorldTransform(*centerOfMassWorldTrans);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setWorldTransform: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setWorldTransform: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int btDefaultMotionState___tostring(lua_State *L) {
  btDefaultMotionState *self = *((btDefaultMotionState **)dub::checksdata_n(L, 1, "bt.DefaultMotionState"));
  lua_pushfstring(L, "bt.DefaultMotionState: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btDefaultMotionState_member_methods[] = {
  { "__gc"         , btDefaultMotionState__btDefaultMotionState },
  { "__newindex"   , btDefaultMotionState__set_ },
  { "__index"      , btDefaultMotionState__get_ },
  { "_cast_"       , btDefaultMotionState__cast_ },
  { "new"          , btDefaultMotionState_btDefaultMotionState },
  { "getWorldTransform", btDefaultMotionState_getWorldTransform },
  { "setWorldTransform", btDefaultMotionState_setWorldTransform },
  { "__tostring"   , btDefaultMotionState___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_DefaultMotionState(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.DefaultMotionState");
  // <mt>

  // register member methods
  dub::fregister(L, btDefaultMotionState_member_methods);
  // setup meta-table
  dub::setup(L, "bt.DefaultMotionState");
  // <mt>
  return 1;
}
