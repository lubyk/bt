--[[------------------------------------------------------

  # bullet test

--]]------------------------------------------------------
local lub  = require 'lub'
local lut  = require 'lut'
local lens = require 'lens'

local bt  = require  'bt'
local should = lut.Test 'bt'

function should.haveType()
  assertEqual('bt', bt.type)
end

function should.work(t)
  lens.Scheduler():run(function()
    local broadphase = bt.DbvtBroadphase()
    local collisionConfiguration = bt.DefaultCollisionConfiguration()
    local dispatcher = bt.CollisionDispatcher(collisionConfiguration)
    local solver = bt.SequentialImpulseConstraintSolver()
    local dynamicsWorld = bt.DiscreteDynamicsWorld(dispatcher,broadphase,solver,collisionConfiguration)

    dynamicsWorld:setGravity(bt.Vector3(0,-10,0))

    local groundShape = bt.StaticPlaneShape(bt.Vector3(0,1,0),1)
    local fallShape = bt.SphereShape(0.3)
    local groundMotionState = bt.DefaultMotionState(
      bt.Transform(
        bt.Quaternion(0,0,0,1),
        bt.Vector3(0,-1,0)
      )
    )

    local groundRigidBodyCI = bt.RigidBody.RigidBodyConstructionInfo(
      0,
      groundMotionState,
      groundShape,
      bt.Vector3(0,0,0)
    )
    local groundRigidBody = bt.RigidBody(groundRigidBodyCI)
    dynamicsWorld:addRigidBody(groundRigidBody)

    local fallMotionState = bt.MotionState()
    function fallMotionState:getWorldTransform(worldTrans)
      -- Called to get initial ball position
      worldTrans:setRotation(bt.Quaternion(0,0,0,1))
      worldTrans:setOrigin(bt.Vector3(0,3,0))
    end

    function fallMotionState:setWorldTransform(worldTrans)
      -- Called when the ball position changes
      print('sphere height:', worldTrans:getOrigin():getY())
    end

    local mass = 1
    local fallInertia = bt.Vector3(0,0,0)
    fallShape:calculateLocalInertia(mass,fallInertia)
    local fallRigidBodyCI = bt.RigidBody.RigidBodyConstructionInfo(
      mass,
      fallMotionState,
      fallShape,
      fallInertia
    )

    local fallRigidBody = bt.RigidBody(fallRigidBodyCI)
    dynamicsWorld:addRigidBody(fallRigidBody)
    
    local step = 1/60
    for i = 0,300 do
      dynamicsWorld:stepSimulation(step,10)
    end

    dynamicsWorld:removeRigidBody(fallRigidBody)
    dynamicsWorld:removeRigidBody(groundRigidBody)
  end)
end

should:test()
