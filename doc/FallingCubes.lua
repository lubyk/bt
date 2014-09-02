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
local media = require 'media'

-- Start scheduler and setup script reload hook with `lens.FileWatch`. Starting
-- the scheduler at the top of the script and using file reloading is a nice
-- trick that ensures all the code after `lens.run` is only executed within the
-- scope of the scheduler.
lens.run(function() lens.FileWatch() end)

movie = movie or media.Decoder(arg[1] or 'plants.MOV')

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

local FALLER_SIZE  = four.V3(0.3, 0.3, 0.3)
local FALLER_COUNT = four.V3(8,8,8)

if not fallers then
  -- Create the falling cube
  fallers = {}
  local geometry = four.Geometry.Cuboid(FALLER_SIZE) --, true) -- no_dups = better normals
  geometry:computeVertexNormals()
  local effect   = four.Effect()
  fallers.effect = effect
  local function makeFaller(x, y, z, cube_id)
    local faller = { }
    -- 30cm box size
    faller.shape  = bt.BoxShape(bt.Vector3(FALLER_SIZE[1], FALLER_SIZE[2], FALLER_SIZE[3]))
    faller.motion = bt.MotionState()

    -- Called by simulator to get initial ball position
    function faller.motion:getWorldTransform(w)
      w:setRotation(bt.Quaternion(0,0,0,1))
      -- Cube starts at +3.0 in Y axis.
      w:setOrigin(bt.Vector3(x, y, z))
    end

    -- Prepare the renderable. The 'Wireframe' uses `Effect.MODEL_TO_CLIP` in the
    -- vertex shader which is a special uniform that is computed by four using the
    -- renderable's `transform` value to setup the `model_to_clip` uniform inside
    -- the shader.
    faller.renderable = {
      transform = four.Transform(),
      --geometry  = four.Geometry.Sphere(FALLER_SIZE[1]),
      geometry = geometry,
      effect   = effect,
      cube_id  = cube_id
    }

    -- Add renderable to renderables list so that it is drawn.
    table.insert(renderables, faller.renderable)
    table.insert(fallers, faller)
    

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
    faller.ci.m_restitution    = 0.3
    faller.ci.m_linearDamping  = 0.8
    faller.ci.m_angularDamping = 0.8
    

    -- Create body and add it to world
    faller.body = bt.RigidBody(faller.ci)
    --faller.body:setFriction(0.15)

    world:addRigidBody(faller.body)
    -- End of faller creation and setup
  end


  -- faller size = half extent
  local dx, dy, dz = four.V3.tuple(2 * FALLER_SIZE)
  -- Center
  local x0 = (-FALLER_COUNT[1]/2 + 0.5) * dz
  -- On the floor
  local y0 = dy/2
  -- Center front face of big cube on origin. ==> Z goes from -sz/2 => - 8sz
  local z0 = -dz/2
  for ix=0,FALLER_COUNT[1]-1 do
    local x = x0 + ix * dx
    for iy=0,FALLER_COUNT[2]-1 do
      local y = y0 + iy * dy
      for iz=0,FALLER_COUNT[3]-1 do
        local z = z0 + iz * dz
        print('faller', x, y, z)
        makeFaller(x, y, z, four.V3(ix, iy, iz))
      end
    end
  end
  
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
    rot = four.Quat.rotXYZ(four.V3(0.0, 0, 0)),
    pos = four.V3(0, FALLER_SIZE[1] * (FALLER_COUNT[1] - 0.5), 18),
  }
}


-- We create an OpenGL window with lui.View, set the size and position.
if not win then
  win = lui.View()
  win:resize(WIN_SIZE.w, WIN_SIZE.h)
  win:move(WIN_POS.x, WIN_POS.y)
  win:trackMouse(true)
end

function win:mouseDown()
  -- reset positions
  -- for i, faller in ipairs(fallers) do
  --     w:setRotation(bt.Quaternion(0,0,0,1))
  --     -- Cube starts at +3.0 in Y axis.
  --     w:setOrigin(bt.Vector3(0,0.6 * i,0))
  --   
  --   faller.motion:setWorldTransform()
  -- end
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
  model_to_world= four.Effect.MODEL_TO_WORLD,
}

groundfx.vertex = four.Effect.Shader [[
  uniform mat4 model_to_clip;
  uniform mat4 model_to_world;
  in vec4 vertex;
  out vec4 v_base;
  out vec4 v_vertex;
  out vec4 v_wo;
  void main() {
    v_base   = vertex;
    v_vertex = model_to_clip * vertex;
    gl_Position = model_to_clip * vertex;
    v_wo = model_to_world * vertex;
  }
]]

groundfx.fragment = four.Effect.Shader [[
  in vec4 v_vertex;
  in vec4 v_base;
  in vec4 v_wo;

  uniform float time;
  float t = time;

  out vec4 color;

  void main() {
    float r = 0.5 + 0.5 * (sin(4 * v_base.z) * sin(4 * v_base.x));
    float d = sqrt(v_wo.x * v_wo.x + (v_wo.z - 2) * (v_wo.z - 2)) / 6;
    r = r * d;
    if (r > 0.5) {
      r = pow(d,4);
    } else {
      r = 0;
    }
    float g = r * (0.2 + 0.2 * sin(t));
    float b = r * (0.2 + 0.2 * sin(t/1.2));
    r = r * (0.4 + 0.2 * sin(1*t - 15 * sqrt(d)));

    // depth goes black
    float depth_black = log((25-v_vertex.z)/4);
    color = depth_black * vec4(r, r, r, 1);
  }
]]

local boxfx = fallers.effect

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
  uniform vec3 cube_id;
  float t = time;

  out vec4 color;

  void main() {
    float r = 0.5 + 0.1 * cube_id.x;
    float g = 0.5 + 0.1 * cube_id.y;
    float b = 0.5 + 0.1 * cube_id.z;

    // depth goes black
    float depth_black = 1.0; //log((25-v_vertex.z)/4);
    color = vec4(depth_black * r, depth_black * g, depth_black * b, 1);
  }
]]

local Effect, V3 = four.Effect, four.V3

boxfx.default_uniforms = {
  model_to_cam = Effect.MODEL_TO_CAMERA,
  normal_to_cam = Effect.MODEL_NORMAL_TO_CAMERA,
  camera_to_clip = Effect.CAMERA_TO_CLIP,
  model_to_world = Effect.MODEL_TO_WORLD,
  light_pos = V3(10, 10, 4),
  surf_color = V3(0.75, 0.75, 075),
  warm_color = V3(0.6, 0.6, 0.0),
  cool_color = V3(0.0, 0.0, 0.6),
  diffuse_warm = 0.45,
  diffuse_cool = 0.45,
  movtex       = movie:texture(),
}

function movie:newFrame()
  boxfx.default_uniforms = {
    model_to_cam = Effect.MODEL_TO_CAMERA,
    normal_to_cam = Effect.MODEL_NORMAL_TO_CAMERA,
    camera_to_clip = Effect.CAMERA_TO_CLIP,
    model_to_world = Effect.MODEL_TO_WORLD,
    light_pos = V3(10, 10, 4),
    surf_color = V3(0.75, 0.75, 075),
    warm_color = V3(0.6, 0.6, 0.0),
    cool_color = V3(0.0, 0.0, 0.6),
    diffuse_warm = 0.45,
    diffuse_cool = 0.45,
    movtex       = movie:texture(),
  }
  -- FIXME: support
  -- boxfx.movtex = movie:texture()
end


if not tom then
  movie:nextFrame()
  tom = lens.Timer(1)
end

function tom:timeout()
  if not movie:nextFrame() then
    -- restart play head
    print('loop')
    movie:start()
    movie:nextFrame()
  end
end
tom:stop()
      
boxfx.vertex = Effect.Shader [[
  uniform mat4 model_to_cam; 
  uniform mat3 normal_to_cam;
  uniform mat4 camera_to_clip;
  uniform mat4 model_to_world;
  uniform vec3 light_pos;
  in vec3 vertex;
  in vec3 normal;
  out float n_dot_l;
  out vec3 reflect;
  out vec3 view;
  out vec2 v_tex;
  out vec4 v_vertex;

  float cube_size = 0.3;
  void main() 
  { 
    v_tex = vec2(
      0.5 + 0.5 * vertex.x/cube_size,
      0.5 + 0.5 * vertex.y/cube_size
    );
    vec3 ecPos = vec3(model_to_cam * vec4(vertex, 1.0));
    vec3 tnorm = normalize(normal_to_cam * normal);
    vec3 light = normalize(light_pos - ecPos);
    reflect = normalize(reflect(-light, tnorm));
    view = normalize(-ecPos);
    n_dot_l = 0.5 * (dot(light, tnorm) + 1.0);
    gl_Position = camera_to_clip * vec4(ecPos, 1.0);
    v_vertex = model_to_world * vec4(vertex, 1.0);
  }
]]

boxfx.fragment = Effect.Shader [[
  uniform vec3 surf_color;
  uniform vec3 warm_color;
  uniform vec3 cool_color;
  uniform float diffuse_warm; 
  uniform float diffuse_cool;
  uniform vec3 cube_id;
  uniform sampler2D movtex;
  
  in float n_dot_l; 
  in vec3 reflect;
  in vec3 view;
  in vec4 v_vertex;
  in vec2 v_tex;
  out vec4 color;
  void main(void)
  {
    // =========== Presentation drawing on cube
    vec2 pres = vec2(
      -0.025 + 1.05 * v_tex.x,
      -0.17 + 1.4 * v_tex.y
    );


    // =========== Cubes FX

    vec3 base = vec3(
      cube_id.x / 8,
      cube_id.y / 8,
      cube_id.z / 8
    );
    vec3 kcool = min(cool_color + diffuse_cool * base, 1.0);
    vec3 kwarm = min(warm_color + diffuse_warm * base, 1.0);
    vec3 kfinal = mix(kcool, kwarm, n_dot_l);
    vec3 nreflect = normalize(reflect);
    vec3 nview = normalize(view);
    float spec = max(dot(nreflect, nview), 0.0);
    spec = pow(spec, 32.0);
    float f = min(1,v_vertex.y);
    color = vec4(
      f * min (kfinal + spec, 1.0),
      1
    );
    if (cube_id.x == 3 && cube_id.y == 3 && cube_id.z == 7) {
      vec4 img = texture(movtex, pres);
      color = vec4(img.r, img.g, img.b, 1);
    }
  }
]]  

-- # Runtime
local buma = require 'buma'
msync = msync or buma.MidiSync()

local step = 1/60

-- Create a timer to run our simulation at regular intervals. On each
-- step, we simply move the simulation forward `step` time forward.
timer = timer or lens.Timer(step)

local start = lens.elapsed()
local zcam  = 18

transition = transition or buma.Morph(18, {
  fov = math.pi / 6,
  dist = 5.3,
}, {
  fov = math.pi / 4,
  dist = 15,
}, function(m, val)
  camera.tv.fov = val.fov
  camera.tv.dirty_matrix = true
  camera.transform = four.Transform {
    pos = four.V3(-0.3, 2.08, val.dist),
    rot = four.Quat.rotXYZ(four.V3(0, 0, 0)),
  }
end, 'atan')
transition:start()

if not init then
camera.transform = four.Transform {
--  rot = four.Quat.rotXYZ(four.V3(-0.1, -0.2, 0)),
  -- view slides
  pos = four.V3(-0.3, 2.08, 5.3),
  --pos = four.V3(0, 1.5, 15 + 1 * math.sin(lens.elapsed()/5)),
  rot = four.Quat.rotXYZ(four.V3(0, 0, 0)),
  --pos = four.V3(-5, 2 * FALLER_SIZE[1] * (FALLER_COUNT[1] - 0.5), zcam),
}
camera.tv = {
  projection = four.Camera.PERSPECTIVE,
  range = four.V2(1, 100),
  fov = math.pi / 6,   -- math.pi / 4,
  aspect = 1024 / 768, --16 / 9,
  dirty_matrix = true,
  projection_matrix = four.M4.id (),
}
end
init = true

local base
function timer:timeout()

  local l = (lens.elapsed() - start) / 4

  if not transition:update() then
    base = base or lens.elapsed()
    local dt = lens.elapsed() - base
    camera.transform = four.Transform {
    --  rot = four.Quat.rotXYZ(four.V3(-0.1, -0.2, 0)),
      -- view slides
      pos = four.V3(-0.3, 2.08, 15 - 0.5 * math.sin(dt/5)),
      rot = four.Quat.rotXYZ(four.V3(0, 0, 0)),
      --pos = four.V3(-5, 2 * FALLER_SIZE[1] * (FALLER_COUNT[1] - 0.5), zcam),
    }
  end

  local beat = msync:position() * 2 * math.pi
  if false then
    faller.body:setActivationState(bt.DISABLE_DEACTIVATION) 
    for i, faller in ipairs(fallers) do
      local be = math.cos(beat + i)
      local amp = math.random() * 5
      faller.body:setGravity(bt.Vector3(
      amp * (0.5 - math.random()),
      amp * (0.5 - math.random()),
      amp * (0.5 - math.random())
      ))
      -- faller.body:setGravity(bt.Vector3(0, 1 + 4 * (0.5 - math.random()), 0))
      -- faller.body:setGravity(bt.Vector3(0, be*10 - 3, 0))
      faller.body:setGravity(bt.Vector3(0, -10, 0))
    end
  end

  world:stepSimulation(step,10)
  
  win:draw()
end

-- for _, faller in ipairs(fallers) do
--   local amp = math.random() * 5
--   faller.body:setGravity(bt.Vector3(
--     amp * (0.5 - math.random()),
--     amp * (0.5 - math.random()),
--     amp * (0.5 - math.random())
--   ))
--   faller.body:setGravity(bt.Vector3(0, 1 + 4 * (0.5 - math.random()), 0))
--   faller.body:setGravity(bt.Vector3(0, -10, 0))
-- end

-- Start the timer.
if not timer:running() then
  timer:start(1)
end

--[[
  ## Download source

  [LiveFoo.lua](example/bullet/LiveFoo.lua)
--]]

