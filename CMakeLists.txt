cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES prediction/main.c prediction/csv.h prediction/csv.c util.c util.h prediction/extra.h prediction/extra.c prediction/prediction.h prediction/prediction.c defines.h)
add_executable(prediction ${SOURCE_FILES})

add_executable(training training/main.c training/csv.c training/training.c defines.h util.c)