project(tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(tests_run
        toolbox/divide_and_conquer/binary_search_test.cpp
        toolbox/divide_and_conquer/majority_element_test.cpp
        toolbox/divide_and_conquer/inversions_test.cpp
        toolbox/dynamic_programming/money_change_test.cpp
        )

target_link_libraries(tests_run Algorithms_lib)
target_link_libraries(tests_run gtest gtest_main)