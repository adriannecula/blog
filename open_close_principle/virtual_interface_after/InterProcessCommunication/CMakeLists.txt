# CMakeList.txt : CMake project for InterProcessCommunication, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


set(SRC 
  InterProcessCommunication.cpp 
  InterProcessCommunication.h
  ILogger.h
  Logger.cpp
  Logger.h
  main.cpp
)
# Add source to this project's executable.
add_executable (InterProcessCommunication ${SRC})

install (TARGETS InterProcessCommunication DESTINATION bin)

# TODO: Add tests and install targets if needed.
