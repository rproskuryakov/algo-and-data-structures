cmake_minimum_required(VERSION 3.17)

project(algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(Algorithms_run ${SOURCE_FILES})

include_directories(courses)
add_subdirectory(courses)

target_link_libraries(Algorithms_run Algorithms_lib)

add_subdirectory(tests)