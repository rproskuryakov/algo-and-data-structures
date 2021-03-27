project(Algorithms_And_Data_Structures)

set(HEADER_FILES
        toolbox/warmup/max_pairwise_product.h
        toolbox/warmup/fibonacci.cpp
        toolbox/warmup/fib_sum_ldigit.h

        toolbox/greedy/car_fueling.h
        toolbox/greedy/change.h
        toolbox/greedy/dot_product.h

        toolbox/divide_and_conquer/binary_search.h
        toolbox/divide_and_conquer/majority_element.h
        toolbox/divide_and_conquer/inversions.h

        toolbox/dynamic_programming/money_change.h
        toolbox/dynamic_programming/edit_distance.h
        toolbox/dynamic_programming/longest_common_subsequence.h
        )

set(SOURCE_FILES
        toolbox/warmup/max_pairwise_product.cpp
        toolbox/warmup/fib_sum_ldigit.cpp
        toolbox/warmup/fibonacci.cpp
        toolbox/warmup/gcd.cpp
        toolbox/warmup/lcm.cpp

        toolbox/greedy/car_fueling.cpp
        toolbox/greedy/change.cpp
        toolbox/greedy/dot_product.cpp

        toolbox/divide_and_conquer/binary_search.cpp
        toolbox/divide_and_conquer/majority_element.cpp
        toolbox/divide_and_conquer/inversions.cpp

        toolbox/dynamic_programming/money_change.cpp
        toolbox/dynamic_programming/edit_distance.cpp
        toolbox/dynamic_programming/longest_common_subsequence.cpp
        )

add_library(Algorithms_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})