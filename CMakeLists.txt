cmake_minimum_required(VERSION 3.30)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_projects
        main.cpp
        src/Suma-vector.cpp
        "src/Alg 1.cpp"
        "src/Dobanda anuala.cpp"
        "src/Interschimbarea a 2 variabile.cpp"
        "src/Alg 2.cpp"
        "src/Alg 3.cpp"
        "src/Alg 4.cpp"
        src/Reuniune.cpp
        src/Calcul-data-nastere.cpp
        "src/Integer to roman numbers.cpp")
