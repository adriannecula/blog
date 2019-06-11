# CMakeList.txt : CMake project for TowerDefense, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 2.8)
project(GraphicToolkit)

file(GLOB SRC  *.cpp *.h)
  

# Add source to this project's executable.
add_executable (GraphicToolkit ${SRC})

install (TARGETS GraphicToolkit DESTINATION bin)

# TODO: Add tests and install targets if needed.
