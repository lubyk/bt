--[[------------------------------------------------------

  bullet.Foo test
  --------------


--]]------------------------------------------------------
local bullet   = require 'bullet'
local lut    = require 'lut'
local should = lut.Test 'bullet.Foo'

should.ignore.deleted = true

function should.doSomething()
  local f = bullet.Foo()
  assertEqual(1.0, f:doSomething())
end

should:test()

