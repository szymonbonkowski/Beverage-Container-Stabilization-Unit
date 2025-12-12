cmake_minimum_required(VERSION 3.10)
project(Beverage-Container-Stabilization-Unit)

set(CMAKE_CXX_STANDARD 17)

add_executable(Beverage-Container-Stabilization-Unit WIN32 main.cpp)

target_link_libraries(Beverage-Container-Stabilization-Unit winmm)