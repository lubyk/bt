--[[------------------------------------------------------

h1. bt.Ground

Create a simple solid shape representing the ground.

--]]------------------------------------------------------

function bt.Ground(restitution)
  local groundShape = bt.StaticPlaneShape(bt.Vector3(0,1,0),1)
  local groundMotionState = bt.DefaultMotionState(
    bt.Transform(
      bt.Quaternion(0,0,0,1),
      bt.Vector3(0,0,0)
    )
  )

  local groundRigidBodyCI = bt.RigidBody.RigidBodyConstructionInfo(
    0,
    groundMotionState,
    groundShape,
    bt.Vector3(0,0,0)
  )
  groundRigidBodyCI.m_restitution = restitution or 1.0

  return bt.RigidBody(groundRigidBodyCI)
end
  


