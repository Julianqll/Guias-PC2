cmake_minimum_required(VERSION 3.19)
project(Guias_PC2)

set(CMAKE_CXX_STANDARD 14)

include_directories(guide6/p5)

add_executable(Guias_PC2
        guide6/p5/main.cpp
        guide6/p5/obrero.h guide6/p6/video.h guide6/p7/empleado.h guide6/p8/persona.h guide6/p9/trabajador.h)
