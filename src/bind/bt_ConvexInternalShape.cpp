/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btConvexInternalShape
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionShapes/btConvexInternalShape.h"


/** Cast (class_name)
 * 
 */
static int btConvexInternalShape__cast_(lua_State *L) {

  btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata_n(L, 1, "bt.ConvexInternalShape"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub::hash(key, 2);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "bt.ConvexShape")) break;
      *retval__ = static_cast<btConvexShape *>(self);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.CollisionShape")) break;
      *retval__ = static_cast<btCollisionShape *>(self);
      return 1;
    }
  }
  return 0;
}

/** virtual btConvexInternalShape::~btConvexInternalShape()
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:49
 */
static int btConvexInternalShape__btConvexInternalShape(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.ConvexInternalShape"));
    if (userdata->gc) {
      btConvexInternalShape *self = (btConvexInternalShape *)userdata->ptr;
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

/** virtual btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:54
 */
static int btConvexInternalShape_localGetSupportingVertex(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btVector3 *vec = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->localGetSupportingVertex(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportingVertex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportingVertex: Unknown exception");
  }
  return dub::error(L);
}

/** const btVector3& btConvexInternalShape::getImplicitShapeDimensions() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:56
 */
static int btConvexInternalShape_getImplicitShapeDimensions(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    dub::pushudata(L, const_cast<btVector3*>(&self->getImplicitShapeDimensions()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getImplicitShapeDimensions: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getImplicitShapeDimensions: Unknown exception");
  }
  return dub::error(L);
}

/** void btConvexInternalShape::setImplicitShapeDimensions(const btVector3 &dimensions)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:65
 */
static int btConvexInternalShape_setImplicitShapeDimensions(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btVector3 *dimensions = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    self->setImplicitShapeDimensions(*dimensions);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setImplicitShapeDimensions: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setImplicitShapeDimensions: Unknown exception");
  }
  return dub::error(L);
}

/** void btConvexInternalShape::setSafeMargin(btScalar minDimension, btScalar defaultMarginMultiplier=0.1f)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:70
 */
static int btConvexInternalShape_setSafeMargin(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      int type__ = lua_type(L, 2);
      if (type__ == LUA_TNUMBER) {
        btScalar minDimension = dub::checknumber(L, 2);
        btScalar defaultMarginMultiplier = dub::checknumber(L, 3);
        self->setSafeMargin(minDimension, defaultMarginMultiplier);
        return 0;
      } else {
        btVector3 *halfExtents = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
        btScalar defaultMarginMultiplier = dub::checknumber(L, 3);
        self->setSafeMargin(*halfExtents, defaultMarginMultiplier);
        return 0;
      }
    } else {
      int type__ = lua_type(L, 2);
      if (type__ == LUA_TNUMBER) {
        btScalar minDimension = dub::checknumber(L, 2);
        self->setSafeMargin(minDimension);
        return 0;
      } else {
        btVector3 *halfExtents = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
        self->setSafeMargin(*halfExtents);
        return 0;
      }
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "setSafeMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setSafeMargin: Unknown exception");
  }
  return dub::error(L);
}

/** void btConvexInternalShape::getAabb(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:88
 */
static int btConvexInternalShape_getAabb(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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

/** virtual void btConvexInternalShape::getAabbSlow(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:95
 */
static int btConvexInternalShape_getAabbSlow(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btTransform *t = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    btVector3 *aabbMin = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    self->getAabbSlow(*t, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabbSlow: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabbSlow: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btConvexInternalShape::setLocalScaling(const btVector3 &scaling)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:98
 */
static int btConvexInternalShape_setLocalScaling(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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

/** virtual const btVector3& btConvexInternalShape::getLocalScaling() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:99
 */
static int btConvexInternalShape_getLocalScaling(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    dub::pushudata(L, const_cast<btVector3*>(&self->getLocalScaling()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getLocalScaling: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getLocalScaling: Unknown exception");
  }
  return dub::error(L);
}

/** const btVector3& btConvexInternalShape::getLocalScalingNV() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:104
 */
static int btConvexInternalShape_getLocalScalingNV(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    dub::pushudata(L, const_cast<btVector3*>(&self->getLocalScalingNV()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getLocalScalingNV: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getLocalScalingNV: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btConvexInternalShape::setMargin(btScalar margin)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:109
 */
static int btConvexInternalShape_setMargin(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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

/** virtual btScalar btConvexInternalShape::getMargin() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:113
 */
static int btConvexInternalShape_getMargin(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushnumber(L, self->getMargin());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMargin: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btConvexInternalShape::getMarginNV() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:118
 */
static int btConvexInternalShape_getMarginNV(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushnumber(L, self->getMarginNV());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMarginNV: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMarginNV: Unknown exception");
  }
  return dub::error(L);
}

/** virtual int btConvexInternalShape::getNumPreferredPenetrationDirections() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:123
 */
static int btConvexInternalShape_getNumPreferredPenetrationDirections(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushnumber(L, self->getNumPreferredPenetrationDirections());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getNumPreferredPenetrationDirections: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getNumPreferredPenetrationDirections: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 &penetrationVector) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:128
 */
static int btConvexInternalShape_getPreferredPenetrationDirection(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    int index = dub::checkint(L, 2);
    btVector3 *penetrationVector = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    self->getPreferredPenetrationDirection(index, *penetrationVector);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getPreferredPenetrationDirection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getPreferredPenetrationDirection: Unknown exception");
  }
  return dub::error(L);
}

/** int btConvexInternalShape::calculateSerializeBufferSize() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:135
 */
static int btConvexInternalShape_calculateSerializeBufferSize(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushnumber(L, self->calculateSerializeBufferSize());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateSerializeBufferSize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateSerializeBufferSize: Unknown exception");
  }
  return dub::error(L);
}

/** const char * btConvexInternalShape::serialize(void *dataBuffer, btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:138
 */
static int btConvexInternalShape_serialize(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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

/** virtual btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 &vec) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:47
 */
static int btConvexInternalShape_localGetSupportingVertexWithoutMargin(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btVector3 *vec = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->localGetSupportingVertexWithoutMargin(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportingVertexWithoutMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportingVertexWithoutMargin: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:50
 */
static int btConvexInternalShape_localGetSupportVertexWithoutMarginNonVirtual(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btVector3 *vec = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->localGetSupportVertexWithoutMarginNonVirtual(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportVertexWithoutMarginNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportVertexWithoutMarginNonVirtual: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btConvexShape::localGetSupportVertexNonVirtual(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:51
 */
static int btConvexInternalShape_localGetSupportVertexNonVirtual(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btVector3 *vec = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->localGetSupportVertexNonVirtual(*vec)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "localGetSupportVertexNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "localGetSupportVertexNonVirtual: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btConvexShape::getMarginNonVirtual() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:52
 */
static int btConvexInternalShape_getMarginNonVirtual(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushnumber(L, self->getMarginNonVirtual());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getMarginNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getMarginNonVirtual: Unknown exception");
  }
  return dub::error(L);
}

/** void btConvexShape::getAabbNonVirtual(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:53
 */
static int btConvexInternalShape_getAabbNonVirtual(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btTransform *t = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    btVector3 *aabbMin = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *aabbMax = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    self->getAabbNonVirtual(*t, *aabbMin, *aabbMax);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAabbNonVirtual: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAabbNonVirtual: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btConvexShape::project(const btTransform &trans, const btVector3 &dir, btScalar &min, btScalar &max) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:55
 */
static int btConvexInternalShape_project(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btTransform *trans = *((btTransform **)dub::checksdata(L, 2, "bt.Transform"));
    btVector3 *dir = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btScalar min = dub::checknumber(L, 4);
    btScalar max = dub::checknumber(L, 5);
    self->project(*trans, *dir, min, max);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "project: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "project: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *vectors, btVector3 *supportVerticesOut, int numVectors) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:59
 */
static int btConvexInternalShape_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    btVector3 *vectors = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btVector3 *supportVerticesOut = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    int numVectors = dub::checkint(L, 4);
    self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "batchedUnitVectorGetSupportingVertexWithoutMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "batchedUnitVectorGetSupportingVertexWithoutMargin: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::getBoundingSphere(btVector3 &center, btScalar &radius) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:49
 */
static int btConvexInternalShape_getBoundingSphere(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getAngularMotionDisc(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getContactBreakingThreshold(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_calculateTemporalAabb(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isPolyhedral(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isConvex2d(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isConvex(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isNonMoving(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isConcave(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isCompound(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isSoftBody(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_isInfinite(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushboolean(L, self->isInfinite());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isInfinite: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isInfinite: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::calculateLocalInertia(btScalar mass, btVector3 &inertia) const =0
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:104
 */
static int btConvexInternalShape_calculateLocalInertia(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getName(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getShapeType(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getAnisotropicRollingFrictionDirection(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_setUserPointer(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getUserPointer(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_setUserIndex(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape_getUserIndex(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
    lua_pushnumber(L, self->getUserIndex());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUserIndex: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUserIndex: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::serializeSingleShape(btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:150
 */
static int btConvexInternalShape_serializeSingleShape(lua_State *L) {
  try {
    btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata(L, 1, "bt.ConvexInternalShape"));
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
static int btConvexInternalShape___tostring(lua_State *L) {
  btConvexInternalShape *self = *((btConvexInternalShape **)dub::checksdata_n(L, 1, "bt.ConvexInternalShape"));
  lua_pushfstring(L, "bt.ConvexInternalShape: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btConvexInternalShape_member_methods[] = {
  { "_cast_"       , btConvexInternalShape__cast_ },
  { "__gc"         , btConvexInternalShape__btConvexInternalShape },
  { "localGetSupportingVertex", btConvexInternalShape_localGetSupportingVertex },
  { "getImplicitShapeDimensions", btConvexInternalShape_getImplicitShapeDimensions },
  { "setImplicitShapeDimensions", btConvexInternalShape_setImplicitShapeDimensions },
  { "setSafeMargin", btConvexInternalShape_setSafeMargin },
  { "getAabb"      , btConvexInternalShape_getAabb },
  { "getAabbSlow"  , btConvexInternalShape_getAabbSlow },
  { "setLocalScaling", btConvexInternalShape_setLocalScaling },
  { "getLocalScaling", btConvexInternalShape_getLocalScaling },
  { "getLocalScalingNV", btConvexInternalShape_getLocalScalingNV },
  { "setMargin"    , btConvexInternalShape_setMargin },
  { "getMargin"    , btConvexInternalShape_getMargin },
  { "getMarginNV"  , btConvexInternalShape_getMarginNV },
  { "getNumPreferredPenetrationDirections", btConvexInternalShape_getNumPreferredPenetrationDirections },
  { "getPreferredPenetrationDirection", btConvexInternalShape_getPreferredPenetrationDirection },
  { "calculateSerializeBufferSize", btConvexInternalShape_calculateSerializeBufferSize },
  { "serialize"    , btConvexInternalShape_serialize },
  { "localGetSupportingVertexWithoutMargin", btConvexInternalShape_localGetSupportingVertexWithoutMargin },
  { "localGetSupportVertexWithoutMarginNonVirtual", btConvexInternalShape_localGetSupportVertexWithoutMarginNonVirtual },
  { "localGetSupportVertexNonVirtual", btConvexInternalShape_localGetSupportVertexNonVirtual },
  { "getMarginNonVirtual", btConvexInternalShape_getMarginNonVirtual },
  { "getAabbNonVirtual", btConvexInternalShape_getAabbNonVirtual },
  { "project"      , btConvexInternalShape_project },
  { "batchedUnitVectorGetSupportingVertexWithoutMargin", btConvexInternalShape_batchedUnitVectorGetSupportingVertexWithoutMargin },
  { "getBoundingSphere", btConvexInternalShape_getBoundingSphere },
  { "getAngularMotionDisc", btConvexInternalShape_getAngularMotionDisc },
  { "getContactBreakingThreshold", btConvexInternalShape_getContactBreakingThreshold },
  { "calculateTemporalAabb", btConvexInternalShape_calculateTemporalAabb },
  { "isPolyhedral" , btConvexInternalShape_isPolyhedral },
  { "isConvex2d"   , btConvexInternalShape_isConvex2d },
  { "isConvex"     , btConvexInternalShape_isConvex },
  { "isNonMoving"  , btConvexInternalShape_isNonMoving },
  { "isConcave"    , btConvexInternalShape_isConcave },
  { "isCompound"   , btConvexInternalShape_isCompound },
  { "isSoftBody"   , btConvexInternalShape_isSoftBody },
  { "isInfinite"   , btConvexInternalShape_isInfinite },
  { "calculateLocalInertia", btConvexInternalShape_calculateLocalInertia },
  { "getName"      , btConvexInternalShape_getName },
  { "getShapeType" , btConvexInternalShape_getShapeType },
  { "getAnisotropicRollingFrictionDirection", btConvexInternalShape_getAnisotropicRollingFrictionDirection },
  { "setUserPointer", btConvexInternalShape_setUserPointer },
  { "getUserPointer", btConvexInternalShape_getUserPointer },
  { "setUserIndex" , btConvexInternalShape_setUserIndex },
  { "getUserIndex" , btConvexInternalShape_getUserIndex },
  { "serializeSingleShape", btConvexInternalShape_serializeSingleShape },
  { "__tostring"   , btConvexInternalShape___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_ConvexInternalShape(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.ConvexInternalShape");
  // <mt>

  // register member methods
  dub::fregister(L, btConvexInternalShape_member_methods);
  // setup meta-table
  dub::setup(L, "bt.ConvexInternalShape");
  // <mt>
  return 1;
}
