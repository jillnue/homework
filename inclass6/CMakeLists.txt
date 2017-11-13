cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(inclass6)

add_executable(
	inclass6
	main_1_.cpp
	point.cpp
	threedimensionalpoint.cpp
	point.h
	threedimensionalpoint.h

)

