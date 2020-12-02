project(Algorithms_And_Data_Structures)

set(HEADER_FILES
        toolbox/divide_and_conquer/binary_search.h
        )

set(SOURCE_FILES
#        toolbox/warmup/max_pairwise_product.cpp
#        toolbox/warmup/fib_sum_ldigit.cpp
#        toolbox/warmup/fibonacci.cpp
#        toolbox/warmup/gcd.cpp
#        toolbox/warmup/lcm.cpp
#
#        toolbox/greedy/car_fueling.cpp
#        toolbox/greedy/change.cpp
#        toolbox/greedy/dot_product.cpp

        toolbox/divide_and_conquer/binary_search.cpp
        )

add_library(Algorithms_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})