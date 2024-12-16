cmake_minimum_required(VERSION 3.30)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_projects main.cpp
        cmake-build-debug/cpp-projects/Suma-vector.cpp
        "cmake-build-debug/cpp-projects/Alg 1.cpp"
        "cmake-build-debug/cpp-projects/Dobanda anuala.cpp"
        "cmake-build-debug/cpp-projects/Interschimbarea a 2 variabile.cpp"
        "cmake-build-debug/cpp-projects/Alg 2.cpp"
        "Alg 3.cpp"
        "Alg 4.cpp"
        Reuniune.cpp
        Calcul-data-nastere.cpp)
