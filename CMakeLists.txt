cmake_minimum_required(VERSION 3.15)

project(LibUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#=============================================
#include GTEST
#=============================================

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)
enable_testing()

#implement EXECUTABLE TESTING
add_executable(text_tests
        test/text_test.cpp
)

target_link_libraries(text_tests
        PRIVATE
            utils
            GTest::gtest_main
)
# REGISTRA LOS TEST
# incluimos el modulo
include(GoogleTest)
gtest_discover_tests(text_tests)

#=========================================

#unix agrega al inicio el prefijo lib entonces quedara: 'libutils.a'
add_library(utils STATIC
        src/text.cpp
)

target_include_directories(utils
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

#ejecutable de main
add_executable(exampleMain
        examples/main.cpp
)

# ahora toca llamar a la libreria libutils y al ejecutable y unirlos
#execMain es el último de la cadena.
#entonces nadie depende de él.
#No necesita propagar ninguna dependencia, lo idea seria PRIVATE
target_link_libraries(exampleMain PRIVATE utils)
