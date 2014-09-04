--
-- Update binding files for this project
--
-- input: selection of headers in src/vendor/bullet/src and pseudo
--        headers in bind
--
-- output: cpp files in src/bind
--
local lub = require 'lub'
local dub = require 'dub'

local base = lub.path '|..'
local bt_base = base .. '/src/vendor/bullet/src'

-- 5 = show all warnings
dub.warn_level = 4

local ins = dub.Inspector {
  INPUT   = {
    bt_base .. '/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h',
    bt_base .. '/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h',
    bt_base .. '/BulletCollision/BroadphaseCollision/btDispatcher.h',

    bt_base .. '/BulletCollision/CollisionDispatch/btCollisionConfiguration.h',
    bt_base .. '/BulletCollision/CollisionDispatch/btCollisionDispatcher.h',
    bt_base .. '/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h',
    bt_base .. '/BulletCollision/CollisionDispatch/btCollisionObject.h',
    bt_base .. '/BulletCollision/CollisionDispatch/btCollisionWorld.h',

    bt_base .. '/BulletCollision/CollisionShapes/btCollisionShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btConvexInternalShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btConcaveShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btConvexShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btSphereShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btPolyhedralConvexShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btBoxShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btCylinderShape.h',
    bt_base .. '/BulletCollision/CollisionShapes/btStaticPlaneShape.h',

    bt_base .. '/BulletDynamics/ConstraintSolver/btConstraintSolver.h',
    bt_base .. '/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h',

    base .. '/bind',

    bt_base .. '/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h',
    bt_base .. '/BulletDynamics/Dynamics/btDynamicsWorld.h',
    bt_base .. '/BulletDynamics/Dynamics/btRigidBody.h',



    bt_base .. '/LinearMath/btDefaultMotionState.h',
    bt_base .. '/LinearMath/btMotionState.h',
    bt_base .. '/LinearMath/btQuadWord.h',
    bt_base .. '/LinearMath/btQuaternion.h',
    bt_base .. '/LinearMath/btScalar.h',
    bt_base .. '/LinearMath/btTransform.h',
    bt_base .. '/LinearMath/btVector3.h',
    bt_base .. '/LinearMath/btMatrix3x3.h',
    bt_base .. '/LinearMath/btIDebugDraw.h',

    base    .. '/include',
  },

  PREDEFINED = '"SIMD_FORCE_INLINE=" "ATTRIBUTE_ALIGNED16(name)=name" "BT_DECLARE_ALIGNED_ALLOCATOR()="',

  ignore = {
    'btSelect',
    'btSwapEndian',
    'btSwapEndianDouble',
    'btUnswapEndianDouble',
    'btSwapEndianFloat',
    'btUnswapEndianFloat',
    'btGetInfinityMask',
    btDbvtBroadphase = {
      'm_sets',
      'm_stageRoots',
    },
    btCollisionObject = {
      'm_userObjectPointer',
      'm_userIndex',
    },
    btSequentialImpulseSolver = {
      'getActiveConstraintRowSolverGeneric',
    },
  },
  -- html = true,
}

local binder = dub.LuaBinder()

-- Renamge btXyz classes to bt.Xyz
function binder:name(elem)
  local name = elem.name
  if name then
    name = string.match(name, '^bt(.+)') or name
  end
  return name
end

function binder:constName(name)
  name = string.match(name, '^bt_(.+)') or name
  return name
end

local BIND_TO_HEADER = {
  ['btPoint2PointConstraint.h'] = 'BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h',
  ['btGeneric6DofSpringConstraint.h'] = 'BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h',
  ['btHingeConstraint.h']       = 'BulletDynamics/ConstraintSolver/btHingeConstraint.h',
  ['btTypedConstraint.h']       = 'BulletDynamics/ConstraintSolver/btTypedConstraint.h',
  ['btTransform.h']             = 'LinearMath/btTransform.h',
}
local h = binder.header
function binder:header(name)
  local n = h(self, name)
  return BIND_TO_HEADER[n] or n
end

binder:bind(ins, {
  output_directory = base .. '/src/bind',
  custom_bindings  = base .. '/bind',
  -- Remove this part in headers
  header_base = {
    bt_base,
    base .. '/include',
    base .. '/bind',
    base .. '/src/vendor/bullet/Demos/OpenGL',
  },

  -- Execute all lua_open in a single go
  -- with luaopen_bt (creates bt.cpp).
  single_lib = 'bt',
  -- Other name so that we can first load bt.lua
  luaopen = 'bt_core',
  only = {
    'LkMotionState',
    'LkDebugDrawer',

     -- BulletCollision/BroadphaseCollision:
    'btBroadphaseInterface',
    'btDbvtBroadphase',
    'btDispatcher',

    -- BulletCollision/CollisionDispatch:
    'btCollisionWorld',
    'btCollisionConfiguration',
    'btCollisionDispatcher',
    'btDefaultCollisionConfiguration',
    'btCollisionObject',

    -- BulletCollision/CollisionShapes:
    'btCollisionShape',
    'btConcaveShape',
    'btConvexInternalShape',
    'btConvexShape',
    'btSphereShape',
    'btBoxShape',
    'btPolyhedralConvexShape',
    'btCylinderShape',
    'btStaticPlaneShape',

    -- BulletDynamics/ConstraintSolver:
    'btConstraintSolver',
    'btSequentialImpulseConstraintSolver',
    'btTypedConstraint',
    'btPoint2PointConstraint',
    'btConstraintSetting',
    'btHingeConstraint',
    'btGeneric6DofSpringConstraint',

    -- BulletDynamics/Dynamics:
    'btDiscreteDynamicsWorld',
    'btDynamicsWorld',
    'btRigidBody',
    'btRigidBody::btRigidBodyConstructionInfo',
    
    -- LinearMath
    'btDefaultMotionState',
    'btMotionState',
    'btQuadWord',
    'btQuaternion',
    'btTransform',
    'btVector3',
    'btMatrix3x3',
    'btIDebugDraw',


    -- OpenGL
    -- 'GLDebugDrawer',

  }
})
