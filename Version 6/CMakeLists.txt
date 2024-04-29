cmake_minimum_required(VERSION 3.16.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Version6 VERSION 1.0)

find_package(SFML 2.5.1 REQUIRED network audio graphics window system)

add_subdirectory(CustomLibrary)

add_executable(Demo6 Demo6.cpp)

target_include_directories(Demo6 PUBLIC ${SFML_INCLUDE_DIR})
target_link_libraries(Demo6 PUBLIC CustomLibrary ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})