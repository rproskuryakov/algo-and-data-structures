#include <gtest/gtest.h>
#include "toolbox/divide_and_conquer/binary_search.h"


TEST(BinarySearchTestSuite, TaskDescriptionFirstTest) {
    std::vector<int> a = {1, 5, 8, 12, 13};
    int answer = binary_search(a, 8);
    EXPECT_EQ(answer, 2);
}

TEST(BinarySearchTestSuite, TaskDescriptionSecondTest) {
    std::vector<int> a = {5, 1, 5, 8, 12, 13};
    int answer = binary_search(a, 1);
    EXPECT_EQ(answer, 0);
}

TEST(BinarySearchTestSuite, TaskDescriptionThirdTest) {
    std::vector<int> a = {5, 1, 5, 8, 12, 13};
    int answer = binary_search(a, 23);
    EXPECT_EQ(answer, -1);
}

TEST(BinarySearchTestSuite, TaskDescriptionFourthTest) {
    std::vector<int> a = {5, 1, 5, 8, 12, 13};
    int answer = binary_search(a, 11);
    EXPECT_EQ(answer, -1);
}

TEST(BinarySearchTestSuite, NoValueInVector) {
    std::vector<int> a = {1, 2, 3, 4, 5};
    long answer = binary_search(a, 10);
    EXPECT_EQ(answer, -1);
}

