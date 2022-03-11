set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")

project(HelloWorld)

cmake_minimum_required(VERSION 3.1.4)


set(CXX_STANDARD 17)

add_executable(HelloWorld HelloWorld.cpp)