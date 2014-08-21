cmake_minimum_required(VERSION 2.8)

set(BUILD_EXTRAS off CACHE BOOL "Build Bullet extras")
set(BUILD_DEMOS  off CACHE BOOL "Build Bullet demos")
set(INSTALL_LIBS off CACHE BOOL "Install Bullet libs")
# This does not work to set off GLUT usage...
set(USE_GLUT off CACHE BOOL "Use Glut")

# Enable frameworks, shared/dynamic libraries, and ability to install: -DINSTALL_LIBS=on
# Build shared libraries: -DINSTALL_LIBS=on -DBUILD_SHARED_LIBS=on
# Build as an OS X Framework: -DINSTALL_LIBS=on -DBUILD_SHARED_LIBS=on -DFRAMEWORK=on
# Produce OS X universal binary: -DCMAKE_OSX_ARCHITECTURES='ppc;i386;x86_64'
# Change the optimization level and debugging symbols: -DCMAKE_BUILD_TYPE=RelWithDebInfo
# (can also choose one of Debug, Release, or MinSizeRel, see cmake --help-variable CMAKE_BUILD_TYPE)
# Run cmake --help-variable-list to see (many) more options, or use the CMake GUI to interactively inve

set(BULLET_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/bullet)
add_subdirectory(bullet)

