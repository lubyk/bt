/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btHingeConstraint
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "BulletDynamics/ConstraintSolver/btHingeConstraint.h"


/** ~btHingeConstraint()
 * 
 */
static int btHingeConstraint__btHingeConstraint(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.HingeConstraint"));
    if (userdata->gc) {
      btHingeConstraint *self = (btHingeConstraint *)userdata->ptr;
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

/** Cast (class_name)
 * 
 */
static int btHingeConstraint__cast_(lua_State *L) {

  btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata_n(L, 1, "bt.HingeConstraint"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub::hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.TypedConstraint")) break;
      *retval__ = static_cast<btTypedConstraint *>(self);
      return 1;
    }
  }
  return 0;
}

/** btHingeConstraint::btHingeConstraint(btRigidBody &rbA, const btTransform &rbAFrame, bool useReferenceFrameA=false)
 * bind/btHingeConstraint.h:5
 */
static int btHingeConstraint_btHingeConstraint(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 7) {
      btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
      btRigidBody *rbB = *((btRigidBody **)dub::checksdata(L, 2, "bt.RigidBody"));
      btVector3 *pivotInA = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
      btVector3 *pivotInB = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
      btVector3 *axisInA = *((btVector3 **)dub::checksdata(L, 5, "bt.Vector3"));
      btVector3 *axisInB = *((btVector3 **)dub::checksdata(L, 6, "bt.Vector3"));
      bool useReferenceFrameA = dub::checkboolean(L, 7);
      btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *rbB, *pivotInA, *pivotInB, *axisInA, *axisInB, useReferenceFrameA);
      dub::pushudata(L, retval__, "bt.HingeConstraint", true);
      return 1;
    } else if (top__ >= 6) {
      btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
      btRigidBody *rbB = *((btRigidBody **)dub::checksdata(L, 2, "bt.RigidBody"));
      btVector3 *pivotInA = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
      btVector3 *pivotInB = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
      btVector3 *axisInA = *((btVector3 **)dub::checksdata(L, 5, "bt.Vector3"));
      btVector3 *axisInB = *((btVector3 **)dub::checksdata(L, 6, "bt.Vector3"));
      btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *rbB, *pivotInA, *pivotInB, *axisInA, *axisInB);
      dub::pushudata(L, retval__, "bt.HingeConstraint", true);
      return 1;
    } else if (top__ >= 5) {
      btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
      btRigidBody *rbB = *((btRigidBody **)dub::checksdata(L, 2, "bt.RigidBody"));
      btTransform *rbAFrame = *((btTransform **)dub::checksdata(L, 3, "bt.Transform"));
      btTransform *rbBFrame = *((btTransform **)dub::checksdata(L, 4, "bt.Transform"));
      bool useReferenceFrameA = dub::checkboolean(L, 5);
      btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *rbB, *rbAFrame, *rbBFrame, useReferenceFrameA);
      dub::pushudata(L, retval__, "bt.HingeConstraint", true);
      return 1;
    } else if (top__ >= 4) {
      int type__ = lua_type(L, 4);
      if (type__ == LUA_TBOOLEAN) {
        btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
        btVector3 *pivotInA = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
        btVector3 *axisInA = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
        bool useReferenceFrameA = dub::checkboolean(L, 4);
        btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *pivotInA, *axisInA, useReferenceFrameA);
        dub::pushudata(L, retval__, "bt.HingeConstraint", true);
        return 1;
      } else {
        btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
        btRigidBody *rbB = *((btRigidBody **)dub::checksdata(L, 2, "bt.RigidBody"));
        btTransform *rbAFrame = *((btTransform **)dub::checksdata(L, 3, "bt.Transform"));
        btTransform *rbBFrame = *((btTransform **)dub::checksdata(L, 4, "bt.Transform"));
        btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *rbB, *rbAFrame, *rbBFrame);
        dub::pushudata(L, retval__, "bt.HingeConstraint", true);
        return 1;
      }
    } else if (top__ >= 3) {
      int type__ = lua_type(L, 3);
      if (type__ == LUA_TBOOLEAN) {
        btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
        btTransform *rbAFrame = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
        bool useReferenceFrameA = dub::checkboolean(L, 3);
        btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *rbAFrame, useReferenceFrameA);
        dub::pushudata(L, retval__, "bt.HingeConstraint", true);
        return 1;
      } else {
        btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
        btVector3 *pivotInA = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
        btVector3 *axisInA = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
        btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *pivotInA, *axisInA);
        dub::pushudata(L, retval__, "bt.HingeConstraint", true);
        return 1;
      }
    } else {
      btRigidBody *rbA = *((btRigidBody **)dub::checksdata(L, 1, "bt.RigidBody"));
      btTransform *rbAFrame = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
      btHingeConstraint *retval__ = new btHingeConstraint(*rbA, *rbAFrame);
      dub::pushudata(L, retval__, "bt.HingeConstraint", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** void btHingeConstraint::setLimit(btScalar low, btScalar high, btScalar _softness=0.9f, btScalar _biasFactor=0.3f, btScalar _relaxationFactor=1.0f)
 * bind/btHingeConstraint.h:28
 */
static int btHingeConstraint_setLimit(lua_State *L) {
  try {
    btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata(L, 1, "bt.HingeConstraint"));
    int top__ = lua_gettop(L);
    if (top__ >= 6) {
      btScalar low = dub::checknumber(L, 2);
      btScalar high = dub::checknumber(L, 3);
      btScalar _softness = dub::checknumber(L, 4);
      btScalar _biasFactor = dub::checknumber(L, 5);
      btScalar _relaxationFactor = dub::checknumber(L, 6);
      self->setLimit(low, high, _softness, _biasFactor, _relaxationFactor);
      return 0;
    } else if (top__ >= 5) {
      btScalar low = dub::checknumber(L, 2);
      btScalar high = dub::checknumber(L, 3);
      btScalar _softness = dub::checknumber(L, 4);
      btScalar _biasFactor = dub::checknumber(L, 5);
      self->setLimit(low, high, _softness, _biasFactor);
      return 0;
    } else if (top__ >= 4) {
      btScalar low = dub::checknumber(L, 2);
      btScalar high = dub::checknumber(L, 3);
      btScalar _softness = dub::checknumber(L, 4);
      self->setLimit(low, high, _softness);
      return 0;
    } else {
      btScalar low = dub::checknumber(L, 2);
      btScalar high = dub::checknumber(L, 3);
      self->setLimit(low, high);
      return 0;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "setLimit: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setLimit: Unknown exception");
  }
  return dub::error(L);
}

/** void btHingeConstraint::enableAngularMotor(bool enableMotor, btScalar targetVelocity, btScalar maxMotorImpulse)
 * bind/btHingeConstraint.h:34
 */
static int btHingeConstraint_enableAngularMotor(lua_State *L) {
  try {
    btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata(L, 1, "bt.HingeConstraint"));
    bool enableMotor = dub::checkboolean(L, 2);
    btScalar targetVelocity = dub::checknumber(L, 3);
    btScalar maxMotorImpulse = dub::checknumber(L, 4);
    self->enableAngularMotor(enableMotor, targetVelocity, maxMotorImpulse);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "enableAngularMotor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "enableAngularMotor: Unknown exception");
  }
  return dub::error(L);
}

/** void btHingeConstraint::setMotorTarget(btScalar targetAngle, btScalar dt)
 * bind/btHingeConstraint.h:36
 */
static int btHingeConstraint_setMotorTarget(lua_State *L) {
  try {
    btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata(L, 1, "bt.HingeConstraint"));
    btScalar targetAngle = dub::checknumber(L, 2);
    btScalar dt = dub::checknumber(L, 3);
    self->setMotorTarget(targetAngle, dt);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMotorTarget: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMotorTarget: Unknown exception");
  }
  return dub::error(L);
}

/** void btHingeConstraint::enableMotor(bool isEnableMotor)
 * bind/btHingeConstraint.h:38
 */
static int btHingeConstraint_enableMotor(lua_State *L) {
  try {
    btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata(L, 1, "bt.HingeConstraint"));
    bool isEnableMotor = dub::checkboolean(L, 2);
    self->enableMotor(isEnableMotor);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "enableMotor: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "enableMotor: Unknown exception");
  }
  return dub::error(L);
}

/** void btHingeConstraint::setMaxMotorImpulse(btScalar maxMotorImpulse)
 * bind/btHingeConstraint.h:39
 */
static int btHingeConstraint_setMaxMotorImpulse(lua_State *L) {
  try {
    btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata(L, 1, "bt.HingeConstraint"));
    btScalar maxMotorImpulse = dub::checknumber(L, 2);
    self->setMaxMotorImpulse(maxMotorImpulse);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMaxMotorImpulse: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMaxMotorImpulse: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int btHingeConstraint___tostring(lua_State *L) {
  btHingeConstraint *self = *((btHingeConstraint **)dub::checksdata_n(L, 1, "bt.HingeConstraint"));
  lua_pushfstring(L, "bt.HingeConstraint: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btHingeConstraint_member_methods[] = {
  { "__gc"         , btHingeConstraint__btHingeConstraint },
  { "_cast_"       , btHingeConstraint__cast_ },
  { "new"          , btHingeConstraint_btHingeConstraint },
  { "setLimit"     , btHingeConstraint_setLimit },
  { "enableAngularMotor", btHingeConstraint_enableAngularMotor },
  { "setMotorTarget", btHingeConstraint_setMotorTarget },
  { "enableMotor"  , btHingeConstraint_enableMotor },
  { "setMaxMotorImpulse", btHingeConstraint_setMaxMotorImpulse },
  { "__tostring"   , btHingeConstraint___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_HingeConstraint(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.HingeConstraint");
  // <mt>

  // register member methods
  dub::fregister(L, btHingeConstraint_member_methods);
  // setup meta-table
  dub::setup(L, "bt.HingeConstraint");
  // <mt>
  return 1;
}
