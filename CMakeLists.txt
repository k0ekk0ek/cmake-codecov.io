cmake_minimum_required(VERSION 3.7)
project(cmake-codecov.io LANGUAGES C)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/Modules")

find_package(codecov)
include(Codecov.io)
include(CTest)

add_executable(foobar foo.c)
add_test(NAME run-foobar COMMAND ./foobar)
add_coverage(foobar)
