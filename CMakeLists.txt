# CMake build script for MrLogger.

project(mrlogger)

cmake_minimum_required(VERSION 2.8)

set(SRC
    ${PROJECT_SOURCE_DIR}/src/mrlogger.cpp
)

include_directories(
    ${PROJECT_SOURCE_DIR}/src
)

add_library(mrlogger STATIC
    ${SRC}
)
