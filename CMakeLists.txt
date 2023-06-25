cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp vec3.h color.h ray.h hittable.h sphere.h hittable_list.h rtconsts.h)
