cmake_minimum_required(VERSION 3.16.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Version5 VERSION 1.0)

add_subdirectory(CustomLibrary)

add_executable(Demo5 Demo5.cpp)

target_link_libraries(Demo5 PUBLIC CustomLibrary)