cmake_minimum_required(VERSION 3.17)
project(lab04-dataflow-AlphaK03)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(lib/googletest)
add_subdirectory(tst)
