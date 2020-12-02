#include <gtest/gtest.h>
#include "toolbox/divide_and_conquer/binary_search.h"


TEST(BinarySearchTestSuite, SimpleVector) {
    std::vector<int> a = {1, 2, 3, 4, 5};
    long answer = binary_search(a, 3);
    EXPECT_EQ(answer, 2);
}

TEST(BinarySearchTestSuite, NoValueInVector) {
    std::vector<int> a = {1, 2, 3, 4, 5};
    long answer = binary_search(a, 10);
    EXPECT_EQ(answer, -1);
}

