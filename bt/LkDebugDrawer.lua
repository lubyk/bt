--[[------------------------------------------------------

  bt.LkDebugDrawer
  ----------------

  btDebugDrawer with Lua callbacks.

--]]------------------------------------------------------
local core = require 'bt.core'
local lib = core.LkDebugDrawer

function lib:drawLine(from, to, fromColor, toColor)
  error("'drawLine' callback not implemented in Debug Drawer.")
end

function lib:reportErrorWarning(msg)
  print(msg)
end

return lib
