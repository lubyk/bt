--[[--------------------
  # bullet physics <a href="https://travis-ci.org/lubyk/bt"><img src="https://travis-ci.org/lubyk/bt.png" alt="Build Status"></a> 

  Summary

  <html><a href="https://github.com/lubyk/bt"><img style="position: absolute; top: 0; right: 0; border: 0;" src="https://s3.amazonaws.com/github/ribbons/forkme_right_green_007200.png" alt="Fork me on GitHub"></a></html>
  
  *zlib license* &copy 2003-2006 Erwin Coumans, Gaspard Bucher.

  ## Installation
  
  With [luarocks](http://luarocks.org):

    $ luarocks install bt

  Description

  ## Usage example

    local bt = require 'bt'

--]]--------------------
local lub  = require 'lub'
local core = require 'bt.core'
local lib  = lub.Autoload('bt', core)

-- Current version respecting [semantic versioning](http://semver.org).
lib.VERSION = '1.0.0'

lib.DEPENDS = { -- doc
  -- Compatible with Lua 5.1, 5.2 and LuaJIT
  'lua >= 5.1, < 5.3',
  -- Uses [Lubyk base library](http://doc.lubyk.org/lub.html)
  'lub >= 1.0.3, < 2.0',
}

-- nodoc
lib.DESCRIPTION = {
  summary = "",
  detailed = [[
  ]],
  homepage = "http://doc.lubyk.org/bt.html",
  author   = "Copyright (c) 2003-2006 Erwin Coumans, Gaspard Bucher",
  license  = "zlib",
}

-- nodoc
lib.BUILD = {
  type      = 'cmake',
  github    = 'lubyk',
  sources   = {'src/*.cpp', 'src/bind/*.cpp', 'src/bind/dub/*.cpp'},
  includes  = {
    '/usr/local/include', -- lua.h
    'include',
    'src/bind',
    'src/vendor/bullet/src',
  },
  libraries = {'stdc++'},
  cmake_extra = [[
add_subdirectory(src/vendor)
target_link_libraries(${core} BulletSoftBody BulletDynamics BulletCollision LinearMath)
  ]],
}

-- We use MotionState as alias for LkMotionState.
lib.BaseMotionState = lib.MotionState
lib.MotionState = lib.LkMotionState

-- We use DebugDrawer as alias for LkDebugDrawer
lib.DebugDrawer = lib.LkDebugDrawer

-- FIXME: When an operator is defined in global namespace with Vector3 as
-- first argument, it should be inserted inside the class definition during
-- binding generation.
lib.Transform.__eq  = lib.__eq
lib.Vector3.__add = lib.__add
lib.Vector3.__sub = lib.__sub
lib.Vector3.__mul = lib.__mul
lib.Vector3.__div = lib.__div

function lib.Vector3:__tostring()
  return string.format('[%f, %f, %f]', self:x(),self:y(), self:z())
end

-- Some constants
lib.ACTIVE_TAG = 1
lib.ISLAND_SLEEPING=2
lib.WANTS_DEACTIVATION=3
lib.DISABLE_DEACTIVATION=4
lib.DISABLE_SIMULATION=5

return lib
