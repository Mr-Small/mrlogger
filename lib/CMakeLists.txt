# CMake build script for MrLogger.

project(mrlogger)

cmake_minimum_required(VERSION 2.8)

set(SRC
    printer/console_printer.cpp
    printer/file_printer.cpp
)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

add_library(mrlogger STATIC
    ${SRC}
)
