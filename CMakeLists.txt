cmake_minimum_required(VERSION 3.19)
project(space_curve LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_library(space_curve)
target_sources(space_curve
	PUBLIC
	"curve.h"
	"curve.cc"
)