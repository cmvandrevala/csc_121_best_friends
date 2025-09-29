cmake_minimum_required(VERSION 3.24)

project("Best Friends")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(main main.cpp src/dog.cpp src/cat.cpp src/pets.cpp)
add_executable(cat_test src/cat.cpp tests/cat_test.cpp)
add_executable(dog_test src/cat.cpp src/dog.cpp tests/dog_test.cpp)

target_link_libraries(cat_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(dog_test PRIVATE Catch2::Catch2WithMain)
