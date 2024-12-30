cmake_minimum_required(VERSION 3.10)
project(cpp_projects)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(cpp_projects
        main.cpp
        src/Alg1.cpp
        src/Alg3.cpp
        src/Alg4.cpp
        src/Calcul-data-nastere.cpp
        src/DobandaAnuala.cpp
        src/Integer-to-roman-numbers.cpp
        src/Interschimbarea-2-variabile.cpp
        src/Reuniune.cpp
        src/SumaVector.cpp
        src/Diferenta-timp.cpp
        src/alg6.cpp
        src/Alg5.cpp
        src/Nr-prim.cpp
        src/Alg7.cpp
        src/Alg8.cpp
        src/Alg9.cpp
)
