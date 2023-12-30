cmake_minimum_required(VERSION 3.26)
project(odev3)

set(CMAKE_CXX_STANDARD 17)

add_executable(odev3
        nokta.h
        dogruParcasi.h
        daire.h
        ucgen.h
        nokta.cpp
        dogruParcasi.cpp
        daire.cpp
        ucgen.cpp
        TestCode.cpp)
