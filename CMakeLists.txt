cmake_minimum_required(VERSION 3.15)

project(prodlog)

set(CMAKE_CXX_STANDARD 17)

add_executable(prodlog src/main.cpp src/Product.cpp src/Machine.cpp)

target_include_directories(prodlog PRIVATE include)
