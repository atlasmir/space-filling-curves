cmake_minimum_required(VERSION 3.19)
project(space_curve LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(space_curve)
target_sources(space_curve
  PUBLIC
  "curve.h"
  "curve.cc"
)

# =======
# Testing
# =======
enable_testing()
# This project is tested using GoogleTest.
add_subdirectory("third_party/googletest")

function(space_curve_test test_file)
  get_filename_component(test_target_name "${test_file}" NAME_WE)
  add_executable("${test_target_name}" "")
  target_sources("${test_target_name}"
    PRIVATE
      "${test_file}"
  )
  target_link_libraries("${test_target_name}" space_curve gtest)
  add_test(NAME "${test_target_name}" COMMAND "${test_target_name}")
endfunction(space_curve_test)

space_curve_test("curve_test.cc")