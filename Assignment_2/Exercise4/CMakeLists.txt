project(Exercise4)

cmake_minimum_required(VERSION 3.1.4)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)
set(CXX_EXTENSIONS ON)

add_subdirectory(str_opera)

add_executable(Ex4 Ex4.cpp)

target_include_directories(Ex4 PUBLIC str_opera)

target_link_directories(Ex4 PUBLIC str_opera)

target_link_libraries(Ex4 my_lib)