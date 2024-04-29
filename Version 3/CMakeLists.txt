cmake_minimum_required(VERSION 3.16.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Version3 VERSION 1.0)

file(GLOB_RECURSE SRC_FILES source/*.cpp CMAKE_CONFIGURE_DEPENDS)
add_executable(Demo3 Demo3.cpp ${SRC_FILES})

target_include_directories(Demo3 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)