/*
  ==============================================================================

   This file is part of the LUBYK project (http://lubyk.org)
   Copyright (c) 2007-2011 by Gaspard Bucher (http://teti.ch).

  ------------------------------------------------------------------------------

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.

  ==============================================================================
*/
#ifndef LUBYK_INCLUDE_BT_LK_DEBUG_DRAWER_H_
#define LUBYK_INCLUDE_BT_LK_DEBUG_DRAWER_H_

#include "dub/dub.h"
#include "LinearMath/btIDebugDraw.h"

/** A DebugDrawer that calls back into Lua.
 *
 * @see btIDebugDraw
 * @dub push: dub_pushobject
 *      ignore: drawLine, drawSphere, drawTriangle, drawContactPoint, reportErrorWarning, draw3dText
 */
class LkDebugDrawer : public btIDebugDraw, public dub::Thread {
  int debug_mode_;
public:

  LkDebugDrawer(int debug_mode = btIDebugDraw::DBG_MAX_DEBUG_DRAW_MODE) :
    debug_mode_(debug_mode) {}

  void drawLine(const btVector3& from,const btVector3& to,const btVector3& color) {
    if (!dub_pushcallback("drawLine")) return;
    // <func> <self>
    dub::pushudata(dub_L, &from, "bt.Vector3", false);
    // <func> <self> <from>
    dub::pushudata(dub_L, &to, "bt.Vector3", false);
    // <func> <self> <from> <to>
    dub::pushudata(dub_L, &color, "bt.Vector3", false);
    // <func> <self> <from> <to> <color>
    dub_call(4, 0);
  }

  virtual void drawLine(const btVector3& from,const btVector3& to, const btVector3& fromColor, const btVector3& toColor) {
    if (!dub_pushcallback("drawLine")) return;
    // <func> <self>
    dub::pushudata(dub_L, &from, "bt.Vector3", false);
    // <func> <self> <from>
    dub::pushudata(dub_L, &to, "bt.Vector3", false);
    // <func> <self> <from> <to>
    dub::pushudata(dub_L, &fromColor, "bt.Vector3", false);
    // <func> <self> <from> <to> <fromColor>
    dub::pushudata(dub_L, &toColor, "bt.Vector3", false);
    // <func> <self> <from> <to> <fromColor> <toColor>
    dub_call(5, 0);
  }

  virtual void drawSphere(btScalar radius, const btTransform& transform, const btVector3& color) {
    if (!dub_pushcallback("drawSphere")) {
      this->btIDebugDraw::drawSphere(radius, transform, color);
      return;
    }
    // <func> <self>
    lua_pushnumber(dub_L, radius);
    // <func> <self> <radius>
    dub::pushudata(dub_L, &transform, "bt.Transform", false);
    // <func> <self> <radius> <transform>
    dub::pushudata(dub_L, &color, "bt.Vector3", false);
    // <func> <self> <radius> <transform> <color>
    dub_call(4, 0);
  }

  virtual void drawTriangle(const btVector3& v0,const btVector3& v1,const btVector3& v2,const btVector3& color, btScalar alpha) {
    if (!dub_pushcallback("drawTriangle")) {
      this->btIDebugDraw::drawTriangle(v0, v1, v2, color, alpha);
      return;
    }
    // <func> <self>
    dub::pushudata(dub_L, &v0, "bt.Vector3", false);
    // <func> <self> <v0>
    dub::pushudata(dub_L, &v1, "bt.Vector3", false);
    // <func> <self> <v0> <v1>
    dub::pushudata(dub_L, &v2, "bt.Vector3", false);
    // <func> <self> <v0> <v1> <v2>
    dub::pushudata(dub_L, &color, "bt.Vector3", false);
    // <func> <self> <v0> <v1> <v2> <color>
    lua_pushnumber(dub_L, alpha);
    // <func> <self> <v0> <v1> <v2> <color> <alpha>
    dub_call(6, 0);
  }


	virtual void	drawContactPoint(const btVector3& pointOnB,const btVector3& normalOnB,btScalar distance,int lifeTime,const btVector3& color) {
    if (!dub_pushcallback("drawContactPoint")) return;
    // <func> <self>
    dub::pushudata(dub_L, &pointOnB, "bt.Vector3", false);
    // <func> <self> <pointOnB>
    dub::pushudata(dub_L, &normalOnB, "bt.Vector3", false);
    // <func> <self> <pointOnB> <normalOnB>
    lua_pushnumber(dub_L, distance);
    // <func> <self> <pointOnB> <normalOnB> <distance>
    lua_pushnumber(dub_L, lifeTime);
    // <func> <self> <pointOnB> <normalOnB> <distance> <lifeTime>
    dub::pushudata(dub_L, &color, "bt.Vector3", false);
    // <func> <self> <pointOnB> <normalOnB> <distance> <lifeTime> <color>
    dub_call(6, 0);
  }

	virtual void reportErrorWarning(const char* warningString) {
    if (!dub_pushcallback("reportErrorWarning")) return;
    // <func> <self>
    lua_pushstring(dub_L, warningString);
    // <func> <self> <msg>
    dub_call(2, 0);
  }

	virtual void draw3dText(const btVector3& location,const char* textString) {
    if (!dub_pushcallback("draw3dText")) return;
    // <func> <self>
    dub::pushudata(dub_L, &location, "bt.Vector3", false);
    // <func> <self> <location>
    lua_pushstring(dub_L, textString);
    // <func> <self> <location> <textString>
    dub_call(3, 0);
  }
	
	virtual void setDebugMode(int debugMode) {
    debug_mode_ = debugMode;
  }
	
	virtual int getDebugMode() const {
    return debug_mode_;
  }
  
};

#endif // LUBYK_INCLUDE_BT_LK_DEBUG_DRAWER_H_




