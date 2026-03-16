cmake_minimum_required(VERSION 3.20)

# Project name and version
project(HFTEngine VERSION 1.0)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include headers from include/ folder
include_directories(include)

# Add the executable
add_executable(hft-engine src/main.cpp)