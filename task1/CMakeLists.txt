cmake_minimum_required(VERSION 3.10)
project(SinusTask)

option(USE_DOUBLE "Use double" ON)

add_executable(app main.cpp)

target_compile_definitions(app PRIVATE _USE_MATH_DEFINES)

if(USE_DOUBLE)
    target_compile_definitions(app PRIVATE MY_TYPE=double)
else()
    target_compile_definitions(app PRIVATE MY_TYPE=float)
endif()
