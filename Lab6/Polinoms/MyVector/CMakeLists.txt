cmake_minimum_required(VERSION 3.17.5)

set(project "MyVector")
project(${project})

set(CMAKE_CXX_STANDARD 17)

set(${project}_SOURCES
        MyVector.cpp)

set(${project}_HEADERS
        MyVector.h)

set(${project}_SOURCE_LIST
        ${${project}_SOURCES}
        ${${project}_HEADERS})

add_library(${project}
        STATIC
        ${${project}_SOURCE_LIST})