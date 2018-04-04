
cmake_minimum_required(VERSION 2.8)

project(parse)

if(WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4996")
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -Wall -pedantic")
endif()

file(GLOB_RECURSE EXEC "src/*.cpp" "src/*.hpp")
file(GLOB_RECURSE LIB "lib/*.cpp" "lib/*.hpp")

add_executable(${CMAKE_PROJECT_NAME} ${EXEC} ${LIB})
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC "lib/")

file(GLOB_RECURSE TESTS "test/*.cpp")

add_executable(${CMAKE_PROJECT_NAME}_test ${TESTS} ${LIB})
target_include_directories(${CMAKE_PROJECT_NAME}_test PUBLIC "lib/")
