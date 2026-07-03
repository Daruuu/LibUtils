cmake_minimum_required(VERSION 3.8)

project(LibUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#unix agrega al inicio el prefijo lib entonces quedara: 'libutils.a'
add_library(utils STATIC
        src/text.cpp
)

target_include_directories(utils
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

#ejecutable de main
add_executable(execMain
        examples/main.cpp
)

# ahora toca llamar a la libreria libutils y al ejecutable y unirlos
#execMain es el último de la cadena.
#entonces nadie depende de él.
#No necesita propagar ninguna dependencia, lo idea seria PRIVATE
target_link_libraries(execMain PRIVATE utils)
