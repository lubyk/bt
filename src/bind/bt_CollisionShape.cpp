/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btCollisionShape
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionShapes/btCollisionShape.h"


/** virtual btCollisionShape::~btCollisionShape()
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:41
 */
static int btCollisionShape__btCollisionShape(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.CollisionShape"));
    if (userdata->gc) {
      btCollisionShape *self = (btCollisionShape *)userdata->ptr;
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

/** virtual void btCollisionShape::getAabb(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:46
 */
static int btCollisionShape_getAabb(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btTransform *t = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    btVector3 *aabbMin = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    self->getAabb(*t, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabb: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::getBoundingSphere(btVector3 &center, btScalar &radius) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:48
 */
static int btCollisionShape_getBoundingSphere(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btVector3 *center = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btScalar radius = dub::checknumber(L, 3);
    self->getBoundingSphere(*center, radius);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getBoundingSphere: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getBoundingSphere: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btScalar btCollisionShape::getAngularMotionDisc() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:51
 */
static int btCollisionShape_getAngularMotionDisc(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushnumber(L, self->getAngularMotionDisc());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAngularMotionDisc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAngularMotionDisc: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btScalar btCollisionShape::getContactBreakingThreshold(btScalar defaultContactThresholdFactor) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:53
 */
static int btCollisionShape_getContactBreakingThreshold(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btScalar defaultContactThresholdFactor = dub::checknumber(L, 2);
    lua_pushnumber(L, self->getContactBreakingThreshold(defaultContactThresholdFactor));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getContactBreakingThreshold: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getContactBreakingThreshold: Unknown exception");
  }
  return dub::error(L);
}

/** void btCollisionShape::calculateTemporalAabb(const btTransform &curTrans, const btVector3 &linvel, const btVector3 &angvel, btScalar timeStep, btVector3 &temporalAabbMin, btVector3 &temporalAabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:58
 */
static int btCollisionShape_calculateTemporalAabb(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btTransform *curTrans = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    btVector3 *linvel = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *angvel = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    btScalar timeStep = dub::checknumber(L, 5);
    btVector3 *temporalAabbMin = *((btVector3 **)dub::checksdata(L, 6, "bt.Vector3"));
    btVector3 *temporalAabbMax = *((btVector3 **)dub::checksdata(L, 7, "bt.Vector3"));
    self->calculateTemporalAabb(*curTrans, *linvel, *angvel, timeStep, *temporalAabbMin, *temporalAabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateTemporalAabb: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateTemporalAabb: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isPolyhedral() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:62
 */
static int btCollisionShape_isPolyhedral(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isPolyhedral());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isPolyhedral: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isPolyhedral: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isConvex2d() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:67
 */
static int btCollisionShape_isConvex2d(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isConvex2d());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isConvex2d: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isConvex2d: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isConvex() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:72
 */
static int btCollisionShape_isConvex(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isConvex());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isConvex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isConvex: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isNonMoving() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:76
 */
static int btCollisionShape_isNonMoving(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isNonMoving());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isNonMoving: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isNonMoving: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isConcave() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:80
 */
static int btCollisionShape_isConcave(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isConcave());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isConcave: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isConcave: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isCompound() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:84
 */
static int btCollisionShape_isCompound(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isCompound());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isCompound: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isCompound: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isSoftBody() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:89
 */
static int btCollisionShape_isSoftBody(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isSoftBody());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isSoftBody: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isSoftBody: Unknown exception");
  }
  return dub::error(L);
}

/** bool btCollisionShape::isInfinite() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:95
 */
static int btCollisionShape_isInfinite(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushboolean(L, self->isInfinite());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isInfinite: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isInfinite: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::setLocalScaling(const btVector3 &scaling)=0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:101
 */
static int btCollisionShape_setLocalScaling(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btVector3 *scaling = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    self->setLocalScaling(*scaling);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setLocalScaling: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setLocalScaling: Unknown exception");
  }
  return dub::error(L);
}

/** virtual const btVector3& btCollisionShape::getLocalScaling() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:102
 */
static int btCollisionShape_getLocalScaling(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    dub::pushudata(L, const_cast<btVector3*>(&self->getLocalScaling()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getLocalScaling: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getLocalScaling: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::calculateLocalInertia(btScalar mass, btVector3 &inertia) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:103
 */
static int btCollisionShape_calculateLocalInertia(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btScalar mass = dub::checknumber(L, 2);
    btVector3 *inertia = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    self->calculateLocalInertia(mass, *inertia);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateLocalInertia: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateLocalInertia: Unknown exception");
  }
  return dub::error(L);
}

/** virtual const char* btCollisionShape::getName() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:107
 */
static int btCollisionShape_getName(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushstring(L, self->getName());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getName: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getName: Unknown exception");
  }
  return dub::error(L);
}

/** int btCollisionShape::getShapeType() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:111
 */
static int btCollisionShape_getShapeType(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushnumber(L, self->getShapeType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getShapeType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getShapeType: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:115
 */
static int btCollisionShape_getAnisotropicRollingFrictionDirection(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    dub::pushudata(L, new btVector3(self->getAnisotropicRollingFrictionDirection()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::setMargin(btScalar margin)=0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:119
 */
static int btCollisionShape_setMargin(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btScalar margin = dub::checknumber(L, 2);
    self->setMargin(margin);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMargin: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btScalar btCollisionShape::getMargin() const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:120
 */
static int btCollisionShape_getMargin(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushnumber(L, self->getMargin());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMargin: Unknown exception");
  }
  return dub::error(L);
}

/** void btCollisionShape::setUserPointer(void *userPtr)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:124
 */
static int btCollisionShape_setUserPointer(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    void *userPtr = *((void **)dub::checksdata(L, 2, "void"));
    self->setUserPointer(userPtr);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setUserPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setUserPointer: Unknown exception");
  }
  return dub::error(L);
}

/** void* btCollisionShape::getUserPointer() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:129
 */
static int btCollisionShape_getUserPointer(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    self->getUserPointer();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUserPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUserPointer: Unknown exception");
  }
  return dub::error(L);
}

/** int btCollisionShape::calculateSerializeBufferSize() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:134
 */
static int btCollisionShape_calculateSerializeBufferSize(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    lua_pushnumber(L, self->calculateSerializeBufferSize());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateSerializeBufferSize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateSerializeBufferSize: Unknown exception");
  }
  return dub::error(L);
}

/** virtual const char* btCollisionShape::serialize(void *dataBuffer, btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:137
 */
static int btCollisionShape_serialize(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    void *dataBuffer = *((void **)dub::checksdata(L, 2, "void"));
    btSerializer *serializer = *((btSerializer **)dub::checksdata(L, 3, "Serializer"));
    lua_pushstring(L, self->serialize(dataBuffer, serializer));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serialize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serialize: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::serializeSingleShape(btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:139
 */
static int btCollisionShape_serializeSingleShape(lua_State *L) {
  try {
    btCollisionShape *self = *((btCollisionShape **)dub::checksdata(L, 1, "bt.CollisionShape"));
    btSerializer *serializer = *((btSerializer **)dub::checksdata(L, 2, "Serializer"));
    self->serializeSingleShape(serializer);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serializeSingleShape: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serializeSingleShape: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int btCollisionShape___tostring(lua_State *L) {
  btCollisionShape *self = *((btCollisionShape **)dub::checksdata_n(L, 1, "bt.CollisionShape"));
  lua_pushfstring(L, "bt.CollisionShape: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btCollisionShape_member_methods[] = {
  { "__gc"         , btCollisionShape__btCollisionShape },
  { "getAabb"      , btCollisionShape_getAabb },
  { "getBoundingSphere", btCollisionShape_getBoundingSphere },
  { "getAngularMotionDisc", btCollisionShape_getAngularMotionDisc },
  { "getContactBreakingThreshold", btCollisionShape_getContactBreakingThreshold },
  { "calculateTemporalAabb", btCollisionShape_calculateTemporalAabb },
  { "isPolyhedral" , btCollisionShape_isPolyhedral },
  { "isConvex2d"   , btCollisionShape_isConvex2d },
  { "isConvex"     , btCollisionShape_isConvex },
  { "isNonMoving"  , btCollisionShape_isNonMoving },
  { "isConcave"    , btCollisionShape_isConcave },
  { "isCompound"   , btCollisionShape_isCompound },
  { "isSoftBody"   , btCollisionShape_isSoftBody },
  { "isInfinite"   , btCollisionShape_isInfinite },
  { "setLocalScaling", btCollisionShape_setLocalScaling },
  { "getLocalScaling", btCollisionShape_getLocalScaling },
  { "calculateLocalInertia", btCollisionShape_calculateLocalInertia },
  { "getName"      , btCollisionShape_getName },
  { "getShapeType" , btCollisionShape_getShapeType },
  { "getAnisotropicRollingFrictionDirection", btCollisionShape_getAnisotropicRollingFrictionDirection },
  { "setMargin"    , btCollisionShape_setMargin },
  { "getMargin"    , btCollisionShape_getMargin },
  { "setUserPointer", btCollisionShape_setUserPointer },
  { "getUserPointer", btCollisionShape_getUserPointer },
  { "calculateSerializeBufferSize", btCollisionShape_calculateSerializeBufferSize },
  { "serialize"    , btCollisionShape_serialize },
  { "serializeSingleShape", btCollisionShape_serializeSingleShape },
  { "__tostring"   , btCollisionShape___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_CollisionShape(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.CollisionShape");
  // <mt>

  // register member methods
  dub::fregister(L, btCollisionShape_member_methods);
  // setup meta-table
  dub::setup(L, "bt.CollisionShape");
  // <mt>
  return 1;
}
