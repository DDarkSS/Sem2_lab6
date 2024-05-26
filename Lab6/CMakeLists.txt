cmake_minimum_required(VERSION 3.17.5)

set(project "Lab6")
project(${project})

set(CMAKE_CXX_STANDARD 17)


set(${project}_SOURCES
        main.cpp)

add_subdirectory(Polinoms)

set(${project}_SOURCE_LIST
        ${${project}_SOURCES}
        ${${project}_HEADERS})

add_executable(${project}
        ${${project}_SOURCE_LIST}
        Polinoms/Terms.cpp
        Polinoms/Terms.h
        Polinoms/Polynomial.cpp
        Polinoms/Polynomial.h
        Polinoms/MyVector/MyVector.cpp
        Polinoms/MyVector/MyVector.h)

target_link_libraries(${project} Polinoms)
