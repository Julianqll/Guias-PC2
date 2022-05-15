cmake_minimum_required(VERSION 3.19)
project(Guias_PC2)

set(CMAKE_CXX_STANDARD 14)

include_directories(p5)

add_executable(Guias_PC2
        p5/main.cpp
        p5/obrero.h p6/video.h p7/empleado.h p8/persona.h p9/trabajador.h)
