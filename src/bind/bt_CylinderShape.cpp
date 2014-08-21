/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btCylinderShape
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "BulletCollision/CollisionShapes/btCylinderShape.h"


/** ~btCylinderShape()
 * 
 */
static int btCylinderShape__btCylinderShape(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.CylinderShape"));
    if (userdata->gc) {
      btCylinderShape *self = (btCylinderShape *)userdata->ptr;
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
static int btCylinderShape__cast_(lua_State *L) {

  btCylinderShape *self = *((btCylinderShape **)dub::checksdata_n(L, 1, "bt.CylinderShape"));
  const char *key = luaL_checkstring(L, 2);
  void **retval__ = (void**)lua_newuserdata(L, sizeof(void*));
  int key_h = dub::hash(key, 3);
  switch(key_h) {
    case 0: {
      if (DUB_ASSERT_KEY(key, "bt.ConvexInternalShape")) break;
      *retval__ = static_cast<btConvexInternalShape *>(self);
      return 1;
    }
    case 1: {
      if (DUB_ASSERT_KEY(key, "bt.ConvexShape")) break;
      *retval__ = static_cast<btConvexShape *>(self);
      return 1;
    }
    case 2: {
      if (DUB_ASSERT_KEY(key, "bt.CollisionShape")) break;
      *retval__ = static_cast<btCollisionShape *>(self);
      return 1;
    }
  }
  return 0;
}

/** btVector3 btCylinderShape::getHalfExtentsWithMargin() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:36
 */
static int btCylinderShape_getHalfExtentsWithMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    dub::pushudata(L, new btVector3(self->getHalfExtentsWithMargin()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHalfExtentsWithMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHalfExtentsWithMargin: Unknown exception");
  }
  return dub::error(L);
}

/** const btVector3& btCylinderShape::getHalfExtentsWithoutMargin() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:44
 */
static int btCylinderShape_getHalfExtentsWithoutMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    dub::pushudata(L, const_cast<btVector3*>(&self->getHalfExtentsWithoutMargin()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getHalfExtentsWithoutMargin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getHalfExtentsWithoutMargin: Unknown exception");
  }
  return dub::error(L);
}

/** btCylinderShape::btCylinderShape(const btVector3 &halfExtents)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:49
 */
static int btCylinderShape_btCylinderShape(lua_State *L) {
  try {
    btVector3 *halfExtents = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btCylinderShape *retval__ = new btCylinderShape(*halfExtents);
    dub::pushudata(L, retval__, "bt.CylinderShape", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** void btCylinderShape::getAabb(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:51
 */
static int btCylinderShape_getAabb(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual void btCylinderShape::calculateLocalInertia(btScalar mass, btVector3 &inertia) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:53
 */
static int btCylinderShape_calculateLocalInertia(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual btVector3 btCylinderShape::localGetSupportingVertexWithoutMargin(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:55
 */
static int btCylinderShape_localGetSupportingVertexWithoutMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual void btCylinderShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *vectors, btVector3 *supportVerticesOut, int numVectors) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:57
 */
static int btCylinderShape_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual void btCylinderShape::setMargin(btScalar collisionMargin)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:59
 */
static int btCylinderShape_setMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual btVector3 btCylinderShape::localGetSupportingVertex(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:71
 */
static int btCylinderShape_localGetSupportingVertex(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** int btCylinderShape::getUpAxis() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:95
 */
static int btCylinderShape_getUpAxis(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    lua_pushnumber(L, self->getUpAxis());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUpAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUpAxis: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btVector3 btCylinderShape::getAnisotropicRollingFrictionDirection() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:100
 */
static int btCylinderShape_getAnisotropicRollingFrictionDirection(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    dub::pushudata(L, new btVector3(self->getAnisotropicRollingFrictionDirection()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getAnisotropicRollingFrictionDirection: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btScalar btCylinderShape::getRadius() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:107
 */
static int btCylinderShape_getRadius(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    lua_pushnumber(L, self->getRadius());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getRadius: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getRadius: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCylinderShape::setLocalScaling(const btVector3 &scaling)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:112
 */
static int btCylinderShape_setLocalScaling(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual const char* btCylinderShape::getName() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:125
 */
static int btCylinderShape_getName(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    lua_pushstring(L, self->getName());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getName: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getName: Unknown exception");
  }
  return dub::error(L);
}

/** int btCylinderShape::calculateSerializeBufferSize() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:130
 */
static int btCylinderShape_calculateSerializeBufferSize(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    lua_pushnumber(L, self->calculateSerializeBufferSize());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "calculateSerializeBufferSize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "calculateSerializeBufferSize: Unknown exception");
  }
  return dub::error(L);
}

/** const char * btCylinderShape::serialize(void *dataBuffer, btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h:133
 */
static int btCylinderShape_serialize(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** const btVector3& btConvexInternalShape::getImplicitShapeDimensions() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:56
 */
static int btCylinderShape_getImplicitShapeDimensions(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_setImplicitShapeDimensions(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_setSafeMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual void btConvexInternalShape::getAabbSlow(const btTransform &t, btVector3 &aabbMin, btVector3 &aabbMax) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:95
 */
static int btCylinderShape_getAabbSlow(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual const btVector3& btConvexInternalShape::getLocalScaling() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:99
 */
static int btCylinderShape_getLocalScaling(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getLocalScalingNV(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    dub::pushudata(L, const_cast<btVector3*>(&self->getLocalScalingNV()), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getLocalScalingNV: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getLocalScalingNV: Unknown exception");
  }
  return dub::error(L);
}

/** virtual btScalar btConvexInternalShape::getMargin() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h:113
 */
static int btCylinderShape_getMargin(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getMarginNV(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getNumPreferredPenetrationDirections(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getPreferredPenetrationDirection(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** btVector3 btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(const btVector3 &vec) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btConvexShape.h:50
 */
static int btCylinderShape_localGetSupportVertexWithoutMarginNonVirtual(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_localGetSupportVertexNonVirtual(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getMarginNonVirtual(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getAabbNonVirtual(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_project(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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

/** virtual void btCollisionShape::getBoundingSphere(btVector3 &center, btScalar &radius) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:48
 */
static int btCylinderShape_getBoundingSphere(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getAngularMotionDisc(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getContactBreakingThreshold(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_calculateTemporalAabb(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isPolyhedral(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isConvex2d(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isConvex(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isNonMoving(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isConcave(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isCompound(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isSoftBody(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_isInfinite(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    lua_pushboolean(L, self->isInfinite());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isInfinite: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isInfinite: Unknown exception");
  }
  return dub::error(L);
}

/** int btCollisionShape::getShapeType() const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:111
 */
static int btCylinderShape_getShapeType(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    lua_pushnumber(L, self->getShapeType());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getShapeType: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getShapeType: Unknown exception");
  }
  return dub::error(L);
}

/** void btCollisionShape::setUserPointer(void *userPtr)
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:124
 */
static int btCylinderShape_setUserPointer(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape_getUserPointer(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
    self->getUserPointer();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getUserPointer: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getUserPointer: Unknown exception");
  }
  return dub::error(L);
}

/** virtual void btCollisionShape::serializeSingleShape(btSerializer *serializer) const
 * src/vendor/bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h:139
 */
static int btCylinderShape_serializeSingleShape(lua_State *L) {
  try {
    btCylinderShape *self = *((btCylinderShape **)dub::checksdata(L, 1, "bt.CylinderShape"));
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
static int btCylinderShape___tostring(lua_State *L) {
  btCylinderShape *self = *((btCylinderShape **)dub::checksdata_n(L, 1, "bt.CylinderShape"));
  lua_pushfstring(L, "bt.CylinderShape: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btCylinderShape_member_methods[] = {
  { "__gc"         , btCylinderShape__btCylinderShape },
  { "_cast_"       , btCylinderShape__cast_ },
  { "getHalfExtentsWithMargin", btCylinderShape_getHalfExtentsWithMargin },
  { "getHalfExtentsWithoutMargin", btCylinderShape_getHalfExtentsWithoutMargin },
  { "new"          , btCylinderShape_btCylinderShape },
  { "getAabb"      , btCylinderShape_getAabb },
  { "calculateLocalInertia", btCylinderShape_calculateLocalInertia },
  { "localGetSupportingVertexWithoutMargin", btCylinderShape_localGetSupportingVertexWithoutMargin },
  { "batchedUnitVectorGetSupportingVertexWithoutMargin", btCylinderShape_batchedUnitVectorGetSupportingVertexWithoutMargin },
  { "setMargin"    , btCylinderShape_setMargin },
  { "localGetSupportingVertex", btCylinderShape_localGetSupportingVertex },
  { "getUpAxis"    , btCylinderShape_getUpAxis },
  { "getAnisotropicRollingFrictionDirection", btCylinderShape_getAnisotropicRollingFrictionDirection },
  { "getRadius"    , btCylinderShape_getRadius },
  { "setLocalScaling", btCylinderShape_setLocalScaling },
  { "getName"      , btCylinderShape_getName },
  { "calculateSerializeBufferSize", btCylinderShape_calculateSerializeBufferSize },
  { "serialize"    , btCylinderShape_serialize },
  { "getImplicitShapeDimensions", btCylinderShape_getImplicitShapeDimensions },
  { "setImplicitShapeDimensions", btCylinderShape_setImplicitShapeDimensions },
  { "setSafeMargin", btCylinderShape_setSafeMargin },
  { "getAabbSlow"  , btCylinderShape_getAabbSlow },
  { "getLocalScaling", btCylinderShape_getLocalScaling },
  { "getLocalScalingNV", btCylinderShape_getLocalScalingNV },
  { "getMargin"    , btCylinderShape_getMargin },
  { "getMarginNV"  , btCylinderShape_getMarginNV },
  { "getNumPreferredPenetrationDirections", btCylinderShape_getNumPreferredPenetrationDirections },
  { "getPreferredPenetrationDirection", btCylinderShape_getPreferredPenetrationDirection },
  { "localGetSupportVertexWithoutMarginNonVirtual", btCylinderShape_localGetSupportVertexWithoutMarginNonVirtual },
  { "localGetSupportVertexNonVirtual", btCylinderShape_localGetSupportVertexNonVirtual },
  { "getMarginNonVirtual", btCylinderShape_getMarginNonVirtual },
  { "getAabbNonVirtual", btCylinderShape_getAabbNonVirtual },
  { "project"      , btCylinderShape_project },
  { "getBoundingSphere", btCylinderShape_getBoundingSphere },
  { "getAngularMotionDisc", btCylinderShape_getAngularMotionDisc },
  { "getContactBreakingThreshold", btCylinderShape_getContactBreakingThreshold },
  { "calculateTemporalAabb", btCylinderShape_calculateTemporalAabb },
  { "isPolyhedral" , btCylinderShape_isPolyhedral },
  { "isConvex2d"   , btCylinderShape_isConvex2d },
  { "isConvex"     , btCylinderShape_isConvex },
  { "isNonMoving"  , btCylinderShape_isNonMoving },
  { "isConcave"    , btCylinderShape_isConcave },
  { "isCompound"   , btCylinderShape_isCompound },
  { "isSoftBody"   , btCylinderShape_isSoftBody },
  { "isInfinite"   , btCylinderShape_isInfinite },
  { "getShapeType" , btCylinderShape_getShapeType },
  { "setUserPointer", btCylinderShape_setUserPointer },
  { "getUserPointer", btCylinderShape_getUserPointer },
  { "serializeSingleShape", btCylinderShape_serializeSingleShape },
  { "__tostring"   , btCylinderShape___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_CylinderShape(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.CylinderShape");
  // <mt>

  // register member methods
  dub::fregister(L, btCylinderShape_member_methods);
  // setup meta-table
  dub::setup(L, "bt.CylinderShape");
  // <mt>
  return 1;
}