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
#ifndef LUBYK_INCLUDE_BT_LK_MOTION_STATE_H_
#define LUBYK_INCLUDE_BT_LK_MOTION_STATE_H_

#include "dub/dub.h"
#include "LinearMath/btMotionState.h"

/** A btMotionState that calls back into Lua.
 *
 * @see btMotionState
 * @dub push: dub_pushobject
 *      ignore: getWorldTransform, setWorldTransform
 */
class LkMotionState : public btMotionState, public dub::Thread {
public:
  
  virtual void getWorldTransform(btTransform& worldTrans) const {
    if (!dub_pushcallback("getWorldTransform")) return;
    // Do not garbage collect
    dub::pushudata(dub_L, &worldTrans, "bt.Transform", false);
    // <func> <self> <worldTrans>
    dub_call(2, 0);
  }

  //Bullet only calls the update of worldtransform for active objects
  virtual void setWorldTransform(const btTransform& worldTrans) {
    if (!dub_pushcallback("setWorldTransform")) return;
    // Do not garbage collect
    dub::pushudata(dub_L, &worldTrans, "bt.Transform", false);
    // <func> <self> <worldTrans>
    dub_call(2, 0);
  }
};

#endif // LUBYK_INCLUDE_BT_LK_MOTION_STATE_H_



