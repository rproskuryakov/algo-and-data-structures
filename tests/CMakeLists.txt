project(tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(tests_run
        toolbox/warmup/fib_sum_ldigit_test.cpp
        toolbox/warmup/fibonacci_test.cpp
        toolbox/warmup/max_pairwise_product_test.cpp

        toolbox/greedy/car_fueling_test.cpp
        toolbox/greedy/change_test.cpp
        toolbox/greedy/dot_product_test.cpp

        toolbox/divide_and_conquer/binary_search_test.cpp
        toolbox/divide_and_conquer/majority_element_test.cpp
        toolbox/divide_and_conquer/inversions_test.cpp
        )

target_link_libraries(tests_run Algorithms_lib)
target_link_libraries(tests_run gtest gtest_main)