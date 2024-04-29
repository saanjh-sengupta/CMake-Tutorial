add_library(CustomLibrary STATIC CustomPackage.cpp)
target_include_directories(CustomLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
