--[[------------------------------------------------------

  bt
  --

  Bullet Physics Lua bindings.

--]]------------------------------------------------------
bt = Autoload('bt')
require 'bt.core'

-- We use bt.MotionState as alias for bt.LkMotionState.
bt.BaseMotionState = bt.MotionState
bt.MotionState = bt.LkMotionState

-- We use bt.DebugDrawer as alias for bt.LkDebugDrawer
bt.DebugDrawer = bt.LkDebugDrawer

-- FIXME: When an operator is defined in global namespace with Vector3 as
-- first argument, it should be inserted inside the class definition during
-- binding generation.
bt.Transform.__eq  = bt.__eq
bt.Vector3.__add = bt.__add
bt.Vector3.__sub = bt.__sub
bt.Vector3.__mul = bt.__mul
bt.Vector3.__div = bt.__div

function bt.Vector3:__tostring()
  return string.format('[%f, %f, %f]', self:x(),self:y(), self:z())
end

-- Some constants
bt.ACTIVE_TAG = 1
bt.ISLAND_SLEEPING=2
bt.WANTS_DEACTIVATION=3
bt.DISABLE_DEACTIVATION=4
bt.DISABLE_SIMULATION=5
