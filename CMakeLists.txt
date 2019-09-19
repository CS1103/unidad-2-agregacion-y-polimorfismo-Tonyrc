cmake_minimum_required(VERSION 3.13)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 14)

add_executable(Biblioteca main.cpp Volumen.cpp Volumen.h Libro.cpp Libro.h Revista.cpp Revista.h Biblioteca.cpp Biblioteca.h)