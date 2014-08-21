--[[------------------------------------------------------

  bt.LkMotionState
  ----------------

  btMotionState with Lua callbacks.

--]]------------------------------------------------------
local core = require 'bt.core'
local four = require 'four'
local lib = core.LkMotionState

local Quat, V3 = four.Quat, four.V3
local Left     = Quat.rotAxis(V3(0, 1, 0),  math.pi/2)
local Right    = Quat.rotAxis(V3(0, 1, 0), -math.pi/2)
local Up       = Quat.rotAxis(V3(0, 0, 1),  math.pi/2)
local Down     = Quat.rotAxis(V3(0, 0, 1), -math.pi/2)

local new = lib.new
function lib.new(quat, vect)
  local self = new()
  local transform
  if vect then
    if type(vect) == 'table' then
      transform = bt.Transform(
        -- four.Quat to bt.Quaternion
        bt.Quaternion(quat[1], quat[2], quat[3], quat[4]),
        -- four.V3 to bt.Vector3
        bt.Vector3(vect[1], vect[2], vect[3])
      )
    else
      transform = bt.Transform(quat, vect)
    end
  end
  if transform then
    self.transform = transform
  end
  return self
end

--=============================================== Default callback implementations
--
-- This is called once by Bullet at the start of the simulation.
function lib:getWorldTransform(retval)
  local transform = self.transform
  if transform then
    retval:set(transform)
  end
end

-- This is called by bullet whenever the position changes.
function lib:setWorldTransform(new_transform)
  local transform = self.transform
  if transform then
    transform:set(new_transform)
  end
end
