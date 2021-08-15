cmake_minimum_required(VERSION 3.15)

project(
  shefu
  CXX
)

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# Require C++17 and allow compiler extensions for all targets
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(
  SFML
  2.3
  COMPONENTS
    graphics
    window
    system
    audio
  REQUIRED
)

add_subdirectory(source)
