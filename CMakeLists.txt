cmake_minimum_required(VERSION 3.5.0)

project(ProjectTracker VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ProjectTracker src/main.cpp
                              src/display.cpp
                              src/input.cpp)  

if(UNIX AND NOT APPLE)
elseif(WIN32)
endif()
