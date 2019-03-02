# CMakeList.txt : CMake project for TowerDefense, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


set(SRC 
  TowerDefense.cpp 
  TowerDefense.h
  Delay.h 
  Money.h 
  Offensive.h 
  Unit.h
)
# Add source to this project's executable.
add_executable (TowerDefense ${SRC})

install (TARGETS TowerDefense DESTINATION bin)

# TODO: Add tests and install targets if needed.
