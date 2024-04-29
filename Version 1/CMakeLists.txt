cmake_minimum_required(VERSION 3.16.0)      # Minimum version required to build the project
set(CMAKE_CXX_STANDARD 17)                  # Sets the C++ standard to be used for compiling the project
set(CMAKE_CXX_STANDARD_REQUIRED ON)         # Specifies that incase the compiler does not support the version then produce an error

project(Version1 VERSION 1.0)               # Defines the project (name is Version1) used for packaging and versioning purposes
add_executable(Demo1 Demo1.cpp)             # Adds all the executable target to the project
                                            # Order of doing so is object file first then then .cpp file

