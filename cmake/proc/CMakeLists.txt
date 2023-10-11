cmake_minimum_required(VERSION 3.17)

project(header)

add_executable(main src/proc src/fun.c)
target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/include)

