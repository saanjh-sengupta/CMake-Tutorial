cmake_minimum_required(VERSION 3.16.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Version4 VERSION 1.0)

add_library(CustomLibrary STATIC CustomLibrary/CustomPackage.cpp)
target_include_directories(CustomLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/CustomLibrary/include)

add_executable(Demo4 Demo4.cpp)

target_link_libraries(Demo4 PUBLIC CustomLibrary)