package = "bt"
version = "1.0.0-1"
source = {
  url = 'git://github.com/lubyk/bt',
  tag = 'REL-1.0.0',
  dir = 'bt',
}
description = {
  summary = "",
  detailed = [[
  ]],
  homepage = "http://doc.lubyk.org/bt.html",
  license = "zlib"
}

dependencies = {
  "lua >= 5.1, < 5.3",
  "lub >= 1.0.3, < 2.0",
}
build = {
  type = 'cmake',
  variables = {
    LUA_INSTALL_DIR = '/usr/local/share/lua/5.1',
  },
}

