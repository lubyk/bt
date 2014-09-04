/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btConcaveShape
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionShapes/btConcaveShape.h"


/** Cast (class_name)
 * 
 */
static int btConcaveShape__cast_(lua_State *L) {

  btConcaveShape *self = *((btConcaveShape **)dub::checksdata_n(L, 1, "bt.ConcaveShape"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub::hash(key, 2);
  switch(key_h) {
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.CollisionShape")) break;
      *retval__ = static_cast<btCollisionShape *>(self);
      return 1;
    }
  }
  return 0;
}

/** virtual btConcaveShape::~btConcaveShape()
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h:46
 */
static int btConcaveShape__btConcaveShape(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.ConcaveShape"));
    if (userdata->gc) {
      btConcaveShape *self = (btConcaveShape *)userdata->ptr;
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

/** virtual void btConcaveShape::processAllTriangles(btTriangleCallback *callback, const btVector3 &aabbMin, const btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h:48
 */
static int btConcaveShape_processAllTriangles(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    btTriangleCallback *callback = *((btTriangleCallback **)dub::checksdata(L, 2, "TriangleCallback"));
    btVector3 *aabbMin = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    self->processAllTriangles(callback, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "processAllTriangles: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "processAllTriangles: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btScalar btConcaveShape::getMargin() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h:50
 */
static int btConcaveShape_getMargin(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    lua_pushnumber(L, self->getMargin());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMargin: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btConcaveShape::setMargin(btScalar collisionMargin)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h:53
 */
static int btConcaveShape_setMargin(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    btScalar collisionMargin = dub::checknumber(L, 2);
    self->setMargin(collisionMargin);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMargin: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::getAabb(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:47
 */
static int btConcaveShape_getAabb(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:49
 */
static int btConcaveShape_getBoundingSphere(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:52
 */
static int btConcaveShape_getAngularMotionDisc(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:54
 */
static int btConcaveShape_getContactBreakingThreshold(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:59
 */
static int btConcaveShape_calculateTemporalAabb(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:63
 */
static int btConcaveShape_isPolyhedral(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:68
 */
static int btConcaveShape_isConvex2d(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:73
 */
static int btConcaveShape_isConvex(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:77
 */
static int btConcaveShape_isNonMoving(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:81
 */
static int btConcaveShape_isConcave(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:85
 */
static int btConcaveShape_isCompound(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:90
 */
static int btConcaveShape_isSoftBody(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:96
 */
static int btConcaveShape_isInfinite(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:102
 */
static int btConcaveShape_setLocalScaling(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:103
 */
static int btConcaveShape_getLocalScaling(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:104
 */
static int btConcaveShape_calculateLocalInertia(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:108
 */
static int btConcaveShape_getName(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:112
 */
static int btConcaveShape_getShapeType(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:116
 */
static int btConcaveShape_getAnisotropicRollingFrictionDirection(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    dub::pushudata(L, new btVector3(self->getAnisotropicRollingFrictionDirection()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: Unknown exception");
  }
  return dub::error(L);
}

/** void btCollisionShape::setUserPointer(void *userPtr)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:125
 */
static int btConcaveShape_setUserPointer(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:130
 */
static int btConcaveShape_getUserPointer(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    self->getUserPointer();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUserPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUserPointer: Unknown exception");
  }
  return dub::error(L);
}

/** void btCollisionShape::setUserIndex(int index)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:134
 */
static int btConcaveShape_setUserIndex(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    int index = dub::checkint(L, 2);
    self->setUserIndex(index);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setUserIndex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setUserIndex: Unknown exception");
  }
  return dub::error(L);
}

/** int btCollisionShape::getUserIndex() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:139
 */
static int btConcaveShape_getUserIndex(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
    lua_pushnumber(L, self->getUserIndex());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUserIndex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUserIndex: Unknown exception");
  }
  return dub::error(L);
}

/** int btCollisionShape::calculateSerializeBufferSize() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:145
 */
static int btConcaveShape_calculateSerializeBufferSize(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:148
 */
static int btConcaveShape_serialize(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:150
 */
static int btConcaveShape_serializeSingleShape(lua_State *L) {
  try {
    btConcaveShape *self = *((btConcaveShape **)dub::checksdata(L, 1, "bt.ConcaveShape"));
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
static int btConcaveShape___tostring(lua_State *L) {
  btConcaveShape *self = *((btConcaveShape **)dub::checksdata_n(L, 1, "bt.ConcaveShape"));
  lua_pushfstring(L, "bt.ConcaveShape: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btConcaveShape_member_methods[] = {
  { "_cast_"       , btConcaveShape__cast_ },
  { "__gc"         , btConcaveShape__btConcaveShape },
  { "processAllTriangles", btConcaveShape_processAllTriangles },
  { "getMargin"    , btConcaveShape_getMargin },
  { "setMargin"    , btConcaveShape_setMargin },
  { "getAabb"      , btConcaveShape_getAabb },
  { "getBoundingSphere", btConcaveShape_getBoundingSphere },
  { "getAngularMotionDisc", btConcaveShape_getAngularMotionDisc },
  { "getContactBreakingThreshold", btConcaveShape_getContactBreakingThreshold },
  { "calculateTemporalAabb", btConcaveShape_calculateTemporalAabb },
  { "isPolyhedral" , btConcaveShape_isPolyhedral },
  { "isConvex2d"   , btConcaveShape_isConvex2d },
  { "isConvex"     , btConcaveShape_isConvex },
  { "isNonMoving"  , btConcaveShape_isNonMoving },
  { "isConcave"    , btConcaveShape_isConcave },
  { "isCompound"   , btConcaveShape_isCompound },
  { "isSoftBody"   , btConcaveShape_isSoftBody },
  { "isInfinite"   , btConcaveShape_isInfinite },
  { "setLocalScaling", btConcaveShape_setLocalScaling },
  { "getLocalScaling", btConcaveShape_getLocalScaling },
  { "calculateLocalInertia", btConcaveShape_calculateLocalInertia },
  { "getName"      , btConcaveShape_getName },
  { "getShapeType" , btConcaveShape_getShapeType },
  { "getAnisotropicRollingFrictionDirection", btConcaveShape_getAnisotropicRollingFrictionDirection },
  { "setUserPointer", btConcaveShape_setUserPointer },
  { "getUserPointer", btConcaveShape_getUserPointer },
  { "setUserIndex" , btConcaveShape_setUserIndex },
  { "getUserIndex" , btConcaveShape_getUserIndex },
  { "calculateSerializeBufferSize", btConcaveShape_calculateSerializeBufferSize },
  { "serialize"    , btConcaveShape_serialize },
  { "serializeSingleShape", btConcaveShape_serializeSingleShape },
  { "__tostring"   , btConcaveShape___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_ConcaveShape(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.ConcaveShape");
  // <mt>

  // register member methods
  dub::fregister(L, btConcaveShape_member_methods);
  // setup meta-table
  dub::setup(L, "bt.ConcaveShape");
  // <mt>
  return 1;
}
