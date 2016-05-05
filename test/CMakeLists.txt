cmake_minimum_required(VERSION 2.8)

FIND_PACKAGE (GTest)

include_directories(
    ${GTEST_INCLUDE_DIRS}
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(mrloggertest
    mrlogger_test.cpp)

target_link_libraries(mrloggertest
    ${GTEST_BOTH_LIBRARIES}
    mrlogger
)

enable_testing()
add_test(A mrloggertest)
