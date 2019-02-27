cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 14)

project(aura)

include_directories(include/)

file(GLOB_RECURSE AURA_SOURCES include/*.h src/*.cpp src/*.h / src/*.c)


add_library(aura SHARED ${AURA_SOURCES})


file(GLOB_RECURSE AURA_TEST_SOURCES tests/*.cpp tests/*.h / tests/*.c)

add_executable(aura-tests ${AURA_TEST_SOURCES})
target_link_libraries(aura-tests aura)