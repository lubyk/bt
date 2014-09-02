--[[------------------------------------------------------

h1. bt.World

Create a world with default settings.

--]]------------------------------------------------------
local bt  = require 'bt'
local lib = bt.DiscreteDynamicsWorld

local new = lib.new
function lib.new(gravity)
  -- We must store all these settings with the world to avoid garbage collection.
  local self = {}
  self.broadphase = bt.DbvtBroadphase()
  self.collisionConfiguration = bt.DefaultCollisionConfiguration()
  self.dispatcher = bt.CollisionDispatcher(self.collisionConfiguration)
  self.solver = bt.SequentialImpulseConstraintSolver()
  self.super = new(
    self.dispatcher,
    self.broadphase,
    self.solver,
    self.collisionConfiguration
  ) 
  setmetatable(self, getmetatable(self.super))
  self:setGravity(bt.Vector3(0,gravity or -10,0))
  return self
end

function lib:addGround(restitution)
  local ground = {}

  ground.shape  = bt.StaticPlaneShape(bt.Vector3(0,1,0),0)
  ground.motion = bt.DefaultMotionState(
    bt.Transform(
      bt.Quaternion(0,0,0,1),
      bt.Vector3(0,0,0)
    )
  )

  ground.ci = bt.RigidBody.RigidBodyConstructionInfo(
    0,
    ground.motion,
    ground.shape,
    bt.Vector3(0,0,0)
  )
  ground.ci.m_restitution = restitution or 1
  --ground.ci.m_linearDamping  = 1
  --ground.ci.m_angularDamping = 1
  --ground.ci.m_angularDamping = 0.8

  ground.super = bt.RigidBody(ground.ci)

  self:addRigidBody(ground)

  self.ground = ground
  return ground
end

function lib:addPlane(direction, transform, opts)
  local opts = opts or {}
  local restitution = opts.restitution or 1.0
  local ht = opts.thickness or 0.1
  local plane = {}

  plane.shape  = bt.StaticPlaneShape(direction, ht)
  plane.motion = bt.DefaultMotionState(transform)

  plane.ci = bt.RigidBody.RigidBodyConstructionInfo(
    0,
    plane.motion,
    plane.shape,
    bt.Vector3(0,0,0)
  )
  plane.ci.m_restitution = restitution
  plane.super = bt.RigidBody(plane.ci)

  self:addRigidBody(plane)
  return plane
end

function lib:debugDrawer(gl_type)
  local drawer
  if gl_type == 'LEGACY' then
    drawer = bt.GLDebugDrawer()
  else
    assert(false, "New OpenGL drawer not supported yet.")
  end

  drawer:setDebugMode(
		bt.IDebugDraw.DBG_DrawWireframe +
		--bt.IDebugDraw.DBG_DrawAabb +
		--bt.IDebugDraw.DBG_DrawFeaturesText +
		--bt.IDebugDraw.DBG_DrawContactPoints +
		--bt.IDebugDraw.DBG_NoDeactivation +
		--bt.IDebugDraw.DBG_NoHelpText +
		--bt.IDebugDraw.DBG_DrawText +
		--bt.IDebugDraw.DBG_ProfileTimings +
		--bt.IDebugDraw.DBG_EnableSatComparison +
		--bt.IDebugDraw.DBG_DisableBulletLCP +
		--bt.IDebugDraw.DBG_EnableCCD +
		bt.IDebugDraw.DBG_DrawConstraints +
		bt.IDebugDraw.DBG_DrawConstraintLimits +
    0
  )
  self.drawer = drawer
  self:setDebugDrawer(drawer)
  return drawer
end

return lib
