--[[------------------------------------------------------

  # Falling cube example

  In this tutorial, we show how to use `bt` to simulate a falling
  cube and view the result with [four](http://doc.lubyk.org/four.html).
  
  We use lens.FileWatch to enable live coding for this script.

  ## Download source

  [FallingCube.lua](example/bt/FallingCube.lua)

--]]------------------------------------------------------
-- doc:lit

-- # Preamble
--
-- Require lens (scheduling), lui (window), four (OpenGL) and bt.
local lens = require 'lens'
local lui  = require 'lui'
local four = require 'four'
local bt   = require 'bt'

-- Start scheduler and setup script reload hook with `lens.FileWatch`. Starting
-- the scheduler at the top of the script and using file reloading is a nice
-- trick that ensures all the code after `lens.run` is only executed within the
-- scope of the scheduler.
lens.run(function() lens.FileWatch() end)

-- # Create simulation

-- Create world with default settings
if not world then
  world = bt.World()
end

renderables = renderables or {}

-- ## Ground
if not ground then
  -- Create the floor
  -- Add default ground plane centered at (0,0,0).
  ground = world:addGround()

  ground.renderable = {
    transform = four.Transform { --},
      rot = four.Quat.rotXYZ(four.V3(0, 0, 0)),
      pos = four.V3(0, 0, 0),
    },
    geometry = four.Geometry.Plane(four.V2(20, 20), four.V2(8, 8)),
    effect = four.Effect {}
  }
  -- Copy transform from physics.
  --ground.renderable.transform.matrix = ground.motion.m_graphicsWorldTrans:toM4()

  -- Add renderable to renderables list so that it is drawn.
  table.insert(renderables, ground.renderable)
end

-- ## Falling shape
-- FIXME: create "lug.V3" as vector library it should replace bt.Vector3 and
-- bt.Quaternion in bt code if possible (automatic transform from lug.V3 to any
-- other type in libraries).

if not faller then
  -- Create the falling cube
  faller = {}
  -- 30cm box size
  local FALLER_SIZE = four.V3(0.3, 0.3, 0.3)
  faller.shape  = bt.BoxShape(bt.Vector3(FALLER_SIZE[1], FALLER_SIZE[2], FALLER_SIZE[3]))
  faller.motion = bt.MotionState()

  -- Called by simulator to get initial ball position
  function faller.motion:getWorldTransform(w)
    w:setRotation(bt.Quaternion(0,0,0,1))
    -- Cube starts at +3.0 in Y axis.
    w:setOrigin(bt.Vector3(0,3,0))
  end

  -- Prepare the renderable. The 'Wireframe' uses `Effect.MODEL_TO_CLIP` in the
  -- vertex shader which is a special uniform that is computed by four using the
  -- renderable's `transform` value to setup the `model_to_clip` uniform inside
  -- the shader.
  faller.renderable = {
    transform = four.Transform(),
    --geometry  = four.Geometry.Sphere(FALLER_SIZE[1]),
    geometry  = four.Geometry.Cuboid(FALLER_SIZE),
    effect = four.Effect(),
  }

  -- Add renderable to renderables list so that it is drawn.
  table.insert(renderables, faller.renderable)
  

  local transform = faller.renderable.transform
  -- This is called by the simulation every time the position of
  -- our falling object changes. We store this information inside
  -- our four.Renderable so that it is drawn in the new position.
  function faller.motion:setWorldTransform(w)
    -- Transform the world transform's OpenGLMatrix to four.M4 table.
    transform.matrix = w:toM4()
  end

  -- Setup dynamics for our falling ball
  faller.mass = 1 -- kg
  faller.inertia = bt.Vector3(0,0,0)
  faller.shape:calculateLocalInertia(faller.mass, faller.inertia)
  faller.ci = bt.RigidBody.RigidBodyConstructionInfo(
    faller.mass,
    faller.motion,
    faller.shape,
    faller.inertia
  )
  faller.ci.m_restitution    = 0.6
  faller.ci.m_linearDamping  = 0.8
  faller.ci.m_angularDamping = 0.8
  

  -- Create body and add it to world
  faller.body = bt.RigidBody(faller.ci)
  faller.body:setFriction(0.15)

  --faller.body:setFriction(1)

  world:addRigidBody(faller.body)
  -- End of faller creation and setup
end

-- # Window and rendering
local WIN_SIZE   = {w = 400, h = 400}
local WIN_POS    = {x = 10 , y = 10 }

-- Create the renderer with four.Renderer.
renderer = renderer or four.Renderer {
  size = four.V2(WIN_SIZE.w, WIN_SIZE.h),
}

-- Use four.Camera to create a simple camera.
camera = camera or four.Camera {
  transform = four.Transform { 
    rot = four.Quat.rotXYZ(four.V3(-0.1, 0, 0)),
    pos = four.V3(0, 1.5, 12),
  }
}


-- We create an OpenGL window with lui.View, set the size and position.
if not win then
  win = lui.View()
  win:resize(WIN_SIZE.w, WIN_SIZE.h)
  win:move(WIN_POS.x, WIN_POS.y)
  win:trackMouse(true)
end

-- Swap fullscreen on mouse down.
function win:doubleClick()
  win:swapFullscreen()
end

-- Using mouse down to rotate camera view
function win:mouse(x, y)
  local pos = renderer:normalizeScreenPos(four.V2(x, y))
  -- local pos = camera:screenToDevice()
end


-- In case we resize the window, we want our content to scale so we need to
-- update the renderer's `size` attribute.
function win:resized(w, h)
  renderer.size = four.V2(w, h)
end

-- The window's draw function calls four.Renderer.render with our camera
-- and object and then swaps OpenGL buffers.
function win:draw()
  renderer:render(camera, renderables)
  self:swapBuffers()
end

-- Show the window once all the the callbacks are in place.
win:show()

-- # Effects

local groundfx = ground.renderable.effect

groundfx.default_uniforms = {
  time = four.Effect.RENDER_FRAME_START_TIME,
  model_to_clip = four.Effect.MODEL_TO_CLIP,
}

groundfx.vertex = four.Effect.Shader [[
  uniform mat4 model_to_clip;
  in vec4 vertex;
  out vec4 v_base;
  out vec4 v_vertex;
  void main() {
    v_base   = vertex;
    v_vertex = model_to_clip * vertex;
    gl_Position = model_to_clip * vertex;
  }
]]

groundfx.fragment = four.Effect.Shader [[
  in vec4 v_vertex;
  in vec4 v_base;

  uniform float time;
  float t = time;

  out vec4 color;

  void main() {
    float r = 0.5 + 0.5 * (sin(4 * v_base.z) * sin(4 * v_base.x));
    if (r > 0.5) {
      float range = 10 + 10 * sin(t/5);
      r = log(range *(r-0.5));
    } else {
      r = log(2.5 *(0.5-r));
    }
    float g = r - (0.2 + 0.2 * sin(t));
    float b = r + (0.2 + 0.2 * sin(t/1.2));

    // depth goes black
    float depth_black = log((25-v_vertex.z)/4);
    color = depth_black * vec4(r, g, b, 1);
  }
]]

local boxfx = faller.renderable.effect

boxfx.default_uniforms = {
  time = four.Effect.RENDER_FRAME_START_TIME,
  model_to_clip = four.Effect.MODEL_TO_CLIP,
}

boxfx.vertex = four.Effect.Shader [[
  uniform mat4 model_to_clip;
  in vec4 vertex;
  out vec4 v_base;
  out vec4 v_vertex;
  void main() {
    v_base   = vertex;
    v_vertex = model_to_clip * vertex;
    gl_Position = model_to_clip * vertex;
  }
]]

boxfx.fragment = four.Effect.Shader [[
  in vec4 v_vertex;
  in vec4 v_base;

  uniform float time;
  float t = time;

  out vec4 color;

  void main() {
    float r = sin(10 * v_base.z);
    float g = sin(15 * v_base.x);
    float b = sin(20 * v_base.y);

    // depth goes black
    float depth_black = log((25-v_vertex.z)/4);
    color = vec4(depth_black * r, depth_black * g, depth_black * b, 1);
  }
]]

-- # Runtime

local step = 1/60

-- Create a timer to run our simulation at regular intervals. On each
-- step, we simply move the simulation forward `step` time forward.
timer = timer or lens.Timer(step)


function timer:timeout()
  camera.transform = four.Transform {
    rot = four.Quat.rotXYZ(four.V3(-0.1, 0, 0)),
    --pos = four.V3(0, 1.5, 15 + 10 * math.sin(lens.elapsed()/5)),
    --rot = four.Quat.rotXYZ(four.V3(0, 0, 0)),
    pos = four.V3(-2, 1.5, 15 + 5 * math.sin(lens.elapsed()/5)),
  }
  
  world:stepSimulation(step,10)
  win:draw()
end

-- Start the timer.
if not timer:running() then
  timer:start(1)
end

--[[
  ## Download source

  [LiveFoo.lua](example/bullet/LiveFoo.lua)
--]]

