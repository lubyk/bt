/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class btVector3
 *
 * This file has been generated by dub 2.2.1.
 */
#include "dub/dub.h"
#include "LinearMath/btVector3.h"


/** ~btVector3()
 * 
 */
static int btVector3__btVector3(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "bt.Vector3"));
    if (userdata->gc) {
      btVector3 *self = (btVector3 *)userdata->ptr;
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

/** Read m_floats(size_t i)
 * 
 */
static int btVector3_m_floats(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      size_t i = dub::checkint(L, 2);
      btScalar v = dub::checknumber(L, 3);
      if (!i || i > 4) return 0;
      self->m_floats[i-1] = v;
      return 0;
    } else {
      size_t i = dub::checkint(L, 2);
      if (!i || i > 4) return 0;
      lua_pushnumber(L, self->m_floats[i-1]);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "m_floats: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "m_floats: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3::btVector3()
 * src/vendor/bullet/src/LinearMath/btVector3.h:119
 */
static int btVector3_btVector3(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 3) {
      btScalar _x = dub::checknumber(L, 1);
      btScalar _y = dub::checknumber(L, 2);
      btScalar _z = dub::checknumber(L, 3);
      btVector3 *retval__ = new btVector3(_x, _y, _z);
      dub::pushudata(L, retval__, "bt.Vector3", true);
      return 1;
    } else {
      btVector3 *retval__ = new btVector3();
      dub::pushudata(L, retval__, "bt.Vector3", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3& btVector3::operator+=(const btVector3 &v)
 * src/vendor/bullet/src/LinearMath/btVector3.h:164
 */
static int btVector3_operator_adde(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, &self->operator+=(*v), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "add: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3& btVector3::operator-=(const btVector3 &v)
 * src/vendor/bullet/src/LinearMath/btVector3.h:181
 */
static int btVector3_operator_sube(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, &self->operator-=(*v), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "sub: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "sub: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3& btVector3::operator*=(const btScalar &s)
 * src/vendor/bullet/src/LinearMath/btVector3.h:197
 */
static int btVector3_operator_mule(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      btScalar s = dub::checknumber(L, 2);
      dub::pushudata(L, &self->operator*=(s), "bt.Vector3", false);
      return 1;
    } else {
      btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
      dub::pushudata(L, &self->operator*=(*v), "bt.Vector3", false);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "mul: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "mul: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3& btVector3::operator/=(const btScalar &s)
 * src/vendor/bullet/src/LinearMath/btVector3.h:215
 */
static int btVector3_operator_dive(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btScalar s = dub::checknumber(L, 2);
    dub::pushudata(L, &self->operator/=(s), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "div: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "div: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::dot(const btVector3 &v) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:235
 */
static int btVector3_dot(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, self->dot(*v));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "dot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "dot: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::length2() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:257
 */
static int btVector3_length2(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->length2());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "length2: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "length2: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::length() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:263
 */
static int btVector3_length(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->length());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "length: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "length: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::norm() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:269
 */
static int btVector3_norm(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->norm());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "norm: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "norm: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::distance2(const btVector3 &v) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:276
 */
static int btVector3_distance2(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, self->distance2(*v));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "distance2: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "distance2: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::distance(const btVector3 &v) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:280
 */
static int btVector3_distance(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, self->distance(*v));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "distance: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "distance: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3& btVector3::safeNormalize()
 * src/vendor/bullet/src/LinearMath/btVector3.h:282
 */
static int btVector3_safeNormalize(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    dub::pushudata(L, &self->safeNormalize(), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "safeNormalize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "safeNormalize: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3& btVector3::normalize()
 * src/vendor/bullet/src/LinearMath/btVector3.h:297
 */
static int btVector3_normalize(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    dub::pushudata(L, &self->normalize(), "bt.Vector3", false);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "normalize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "normalize: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btVector3::normalized() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:343
 */
static int btVector3_normalized(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->normalized()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "normalized: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "normalized: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btVector3::rotate(const btVector3 &wAxis, const btScalar angle) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:348
 */
static int btVector3_rotate(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *wAxis = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btScalar angle = dub::checknumber(L, 3);
    dub::pushudata(L, new btVector3(self->rotate(*wAxis, angle)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "rotate: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "rotate: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::angle(const btVector3 &v) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:352
 */
static int btVector3_angle(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    lua_pushnumber(L, self->angle(*v));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "angle: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "angle: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btVector3::absolute() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:360
 */
static int btVector3_absolute(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->absolute()), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "absolute: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "absolute: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btVector3::cross(const btVector3 &v) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:377
 */
static int btVector3_cross(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->cross(*v)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "cross: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "cross: Unknown exception");
  }
  return dub::error(L);
}

/** btScalar btVector3::triple(const btVector3 &v1, const btVector3 &v2) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:416
 */
static int btVector3_triple(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v1 = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    lua_pushnumber(L, self->triple(*v1, *v2));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "triple: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "triple: Unknown exception");
  }
  return dub::error(L);
}

/** int btVector3::minAxis() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:468
 */
static int btVector3_minAxis(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->minAxis());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "minAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "minAxis: Unknown exception");
  }
  return dub::error(L);
}

/** int btVector3::maxAxis() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:475
 */
static int btVector3_maxAxis(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->maxAxis());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "maxAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "maxAxis: Unknown exception");
  }
  return dub::error(L);
}

/** int btVector3::furthestAxis() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:480
 */
static int btVector3_furthestAxis(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->furthestAxis());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "furthestAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "furthestAxis: Unknown exception");
  }
  return dub::error(L);
}

/** int btVector3::closestAxis() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:485
 */
static int btVector3_closestAxis(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->closestAxis());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "closestAxis: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "closestAxis: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::setInterpolate3(const btVector3 &v0, const btVector3 &v1, btScalar rt)
 * src/vendor/bullet/src/LinearMath/btVector3.h:491
 */
static int btVector3_setInterpolate3(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v0 = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btVector3 *v1 = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btScalar rt = dub::checknumber(L, 4);
    self->setInterpolate3(*v0, *v1, rt);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setInterpolate3: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setInterpolate3: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btVector3::lerp(const btVector3 &v, const btScalar &t) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:520
 */
static int btVector3_lerp(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btScalar t = dub::checknumber(L, 3);
    dub::pushudata(L, new btVector3(self->lerp(*v, t)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "lerp: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "lerp: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btVector3::getX() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:561
 */
static int btVector3_getX(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->getX());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getX: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getX: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btVector3::getY() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:563
 */
static int btVector3_getY(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->getY());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getY: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getY: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btVector3::getZ() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:565
 */
static int btVector3_getZ(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->getZ());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getZ: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getZ: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::setX(btScalar _x)
 * src/vendor/bullet/src/LinearMath/btVector3.h:567
 */
static int btVector3_setX(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
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

/** void btVector3::setY(btScalar _y)
 * src/vendor/bullet/src/LinearMath/btVector3.h:569
 */
static int btVector3_setY(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
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

/** void btVector3::setZ(btScalar _z)
 * src/vendor/bullet/src/LinearMath/btVector3.h:571
 */
static int btVector3_setZ(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
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

/** void btVector3::setW(btScalar _w)
 * src/vendor/bullet/src/LinearMath/btVector3.h:573
 */
static int btVector3_setW(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
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

/** const btScalar& btVector3::x() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:575
 */
static int btVector3_x(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->x());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "x: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "x: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btVector3::y() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:577
 */
static int btVector3_y(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->y());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "y: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "y: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btVector3::z() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:579
 */
static int btVector3_z(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->z());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "z: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "z: Unknown exception");
  }
  return dub::error(L);
}

/** const btScalar& btVector3::w() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:581
 */
static int btVector3_w(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushnumber(L, self->w());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "w: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "w: Unknown exception");
  }
  return dub::error(L);
}

/** bool btVector3::operator==(const btVector3 &other) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:589
 */
static int btVector3_operator_eq(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *other = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    lua_pushboolean(L, self->operator==(*other));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__eq: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__eq: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::setMax(const btVector3 &other)
 * src/vendor/bullet/src/LinearMath/btVector3.h:609
 */
static int btVector3_setMax(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *other = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    self->setMax(*other);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMax: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMax: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::setMin(const btVector3 &other)
 * src/vendor/bullet/src/LinearMath/btVector3.h:626
 */
static int btVector3_setMin(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *other = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    self->setMin(*other);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setMin: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setMin: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::setValue(const btScalar &_x, const btScalar &_y, const btScalar &_z)
 * src/vendor/bullet/src/LinearMath/btVector3.h:640
 */
static int btVector3_setValue(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btScalar _x = dub::checknumber(L, 2);
    btScalar _y = dub::checknumber(L, 3);
    btScalar _z = dub::checknumber(L, 4);
    self->setValue(_x, _y, _z);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setValue: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setValue: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::getSkewSymmetricMatrix(btVector3 *v0, btVector3 *v1, btVector3 *v2) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:648
 */
static int btVector3_getSkewSymmetricMatrix(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v0 = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btVector3 *v1 = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    self->getSkewSymmetricMatrix(v0, v1, v2);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "getSkewSymmetricMatrix: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "getSkewSymmetricMatrix: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::setZero()
 * src/vendor/bullet/src/LinearMath/btVector3.h:671
 */
static int btVector3_setZero(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    self->setZero();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "setZero: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "setZero: Unknown exception");
  }
  return dub::error(L);
}

/** bool btVector3::isZero() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:683
 */
static int btVector3_isZero(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushboolean(L, self->isZero());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "isZero: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "isZero: Unknown exception");
  }
  return dub::error(L);
}

/** bool btVector3::fuzzyZero() const
 * src/vendor/bullet/src/LinearMath/btVector3.h:688
 */
static int btVector3_fuzzyZero(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    lua_pushboolean(L, self->fuzzyZero());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "fuzzyZero: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "fuzzyZero: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::serialize(struct btVector3Data &dataOut) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:693
 */
static int btVector3_serialize(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3Data *dataOut = *((btVector3Data **)dub::checksdata(L, 2, "Vector3Data"));
    self->serialize(*dataOut);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serialize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serialize: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::deSerialize(const struct btVector3Data &dataIn)
 * src/vendor/bullet/src/LinearMath/btVector3.h:695
 */
static int btVector3_deSerialize(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3Data *dataIn = *((btVector3Data **)dub::checksdata(L, 2, "Vector3Data"));
    self->deSerialize(*dataIn);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "deSerialize: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "deSerialize: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::serializeFloat(struct btVector3FloatData &dataOut) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:697
 */
static int btVector3_serializeFloat(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3FloatData *dataOut = *((btVector3FloatData **)dub::checksdata(L, 2, "bt.Vector3FloatData"));
    self->serializeFloat(*dataOut);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serializeFloat: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serializeFloat: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::deSerializeFloat(const struct btVector3FloatData &dataIn)
 * src/vendor/bullet/src/LinearMath/btVector3.h:699
 */
static int btVector3_deSerializeFloat(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3FloatData *dataIn = *((btVector3FloatData **)dub::checksdata(L, 2, "bt.Vector3FloatData"));
    self->deSerializeFloat(*dataIn);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "deSerializeFloat: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "deSerializeFloat: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::serializeDouble(struct btVector3DoubleData &dataOut) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:701
 */
static int btVector3_serializeDouble(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3DoubleData *dataOut = *((btVector3DoubleData **)dub::checksdata(L, 2, "bt.Vector3DoubleData"));
    self->serializeDouble(*dataOut);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "serializeDouble: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "serializeDouble: Unknown exception");
  }
  return dub::error(L);
}

/** void btVector3::deSerializeDouble(const struct btVector3DoubleData &dataIn)
 * src/vendor/bullet/src/LinearMath/btVector3.h:703
 */
static int btVector3_deSerializeDouble(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3DoubleData *dataIn = *((btVector3DoubleData **)dub::checksdata(L, 2, "bt.Vector3DoubleData"));
    self->deSerializeDouble(*dataIn);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "deSerializeDouble: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "deSerializeDouble: Unknown exception");
  }
  return dub::error(L);
}

/** long btVector3::maxDot(const btVector3 *array, long array_count, btScalar &dotOut) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:709
 */
static int btVector3_maxDot(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *array = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    long *array_count = *((long **)dub::checksdata(L, 3, "long"));
    btScalar dotOut = dub::checknumber(L, 4);
    dub::pushudata(L, new long(self->maxDot(array, *array_count, dotOut)), "long", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "maxDot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "maxDot: Unknown exception");
  }
  return dub::error(L);
}

/** long btVector3::minDot(const btVector3 *array, long array_count, btScalar &dotOut) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:715
 */
static int btVector3_minDot(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *array = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    long *array_count = *((long **)dub::checksdata(L, 3, "long"));
    btScalar dotOut = dub::checknumber(L, 4);
    dub::pushudata(L, new long(self->minDot(array, *array_count, dotOut)), "long", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "minDot: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "minDot: Unknown exception");
  }
  return dub::error(L);
}

/** btVector3 btVector3::dot3(const btVector3 &v0, const btVector3 &v1, const btVector3 &v2) const
 * src/vendor/bullet/src/LinearMath/btVector3.h:718
 */
static int btVector3_dot3(lua_State *L) {
  try {
    btVector3 *self = *((btVector3 **)dub::checksdata(L, 1, "bt.Vector3"));
    btVector3 *v0 = *((btVector3 **)dub::checksdata(L, 2, "bt.Vector3"));
    btVector3 *v1 = *((btVector3 **)dub::checksdata(L, 3, "bt.Vector3"));
    btVector3 *v2 = *((btVector3 **)dub::checksdata(L, 4, "bt.Vector3"));
    dub::pushudata(L, new btVector3(self->dot3(*v0, *v1, *v2)), "bt.Vector3", true);
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "dot3: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "dot3: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int btVector3___tostring(lua_State *L) {
  btVector3 *self = *((btVector3 **)dub::checksdata_n(L, 1, "bt.Vector3"));
  lua_pushfstring(L, "bt.Vector3: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg btVector3_member_methods[] = {
  { "__gc"         , btVector3__btVector3 },
  { "m_floats"     , btVector3_m_floats   },
  { "new"          , btVector3_btVector3  },
  { "add"          , btVector3_operator_adde },
  { "sub"          , btVector3_operator_sube },
  { "mul"          , btVector3_operator_mule },
  { "div"          , btVector3_operator_dive },
  { "dot"          , btVector3_dot        },
  { "length2"      , btVector3_length2    },
  { "length"       , btVector3_length     },
  { "norm"         , btVector3_norm       },
  { "distance2"    , btVector3_distance2  },
  { "distance"     , btVector3_distance   },
  { "safeNormalize", btVector3_safeNormalize },
  { "normalize"    , btVector3_normalize  },
  { "normalized"   , btVector3_normalized },
  { "rotate"       , btVector3_rotate     },
  { "angle"        , btVector3_angle      },
  { "absolute"     , btVector3_absolute   },
  { "cross"        , btVector3_cross      },
  { "triple"       , btVector3_triple     },
  { "minAxis"      , btVector3_minAxis    },
  { "maxAxis"      , btVector3_maxAxis    },
  { "furthestAxis" , btVector3_furthestAxis },
  { "closestAxis"  , btVector3_closestAxis },
  { "setInterpolate3", btVector3_setInterpolate3 },
  { "lerp"         , btVector3_lerp       },
  { "getX"         , btVector3_getX       },
  { "getY"         , btVector3_getY       },
  { "getZ"         , btVector3_getZ       },
  { "setX"         , btVector3_setX       },
  { "setY"         , btVector3_setY       },
  { "setZ"         , btVector3_setZ       },
  { "setW"         , btVector3_setW       },
  { "x"            , btVector3_x          },
  { "y"            , btVector3_y          },
  { "z"            , btVector3_z          },
  { "w"            , btVector3_w          },
  { "__eq"         , btVector3_operator_eq },
  { "setMax"       , btVector3_setMax     },
  { "setMin"       , btVector3_setMin     },
  { "setValue"     , btVector3_setValue   },
  { "getSkewSymmetricMatrix", btVector3_getSkewSymmetricMatrix },
  { "setZero"      , btVector3_setZero    },
  { "isZero"       , btVector3_isZero     },
  { "fuzzyZero"    , btVector3_fuzzyZero  },
  { "serialize"    , btVector3_serialize  },
  { "deSerialize"  , btVector3_deSerialize },
  { "serializeFloat", btVector3_serializeFloat },
  { "deSerializeFloat", btVector3_deSerializeFloat },
  { "serializeDouble", btVector3_serializeDouble },
  { "deSerializeDouble", btVector3_deSerializeDouble },
  { "maxDot"       , btVector3_maxDot     },
  { "minDot"       , btVector3_minDot     },
  { "dot3"         , btVector3_dot3       },
  { "__tostring"   , btVector3___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


extern "C" int luaopen_bt_Vector3(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "bt.Vector3");
  // <mt>

  // register member methods
  dub::fregister(L, btVector3_member_methods);
  // setup meta-table
  dub::setup(L, "bt.Vector3");
  // <mt>
  return 1;
}
