cmake_minimum_required(VERSION 3.15)

project(factory_tracker)

set(CMAKE_CXX_STANDARD 17)

add_executable(factory_tracker src/main.cpp src/Product.cpp src/Machine.cpp)

target_include_directories(factory_tracker PRIVATE include)
