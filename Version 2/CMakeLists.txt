cmake_minimum_required(VERSION 3.16.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Version2 VERSION 1.0)
add_executable(Demo2 Demo2.cpp)

target_include_directories(Demo2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
