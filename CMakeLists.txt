cmake_minimum_required(VERSION 3.24)

project("Best Friends")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp src/dog.cpp src/cat.cpp src/pets.cpp)
