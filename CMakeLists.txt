cmake_minimum_required(VERSION 3.10.0)

add_executable(main main.cpp types.h CPU/cpu.h BUS/bus.h BUS/bus.cpp RAM/ram.h RAM/ram.cpp)

include_directories(./)
include_directories(CPU)