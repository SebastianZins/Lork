cmake_minimum_required(VERSION 3.0)

project(ipi-uebung7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)


# Set default compile flags for GCC
if(CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "GCC detected, adding compile flags")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98 -pedantic -Wall -Wextra")
endif(CMAKE_COMPILER_IS_GNUCXX)

# Bibliothek 
add_library(library room.cc moving.cc)

# Ausführbares Programm für Bibliothek
add_executable(main main.cc)

# Programme linken
target_link_libraries(main library)
