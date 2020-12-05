#include <gtest/gtest.h>

#include "toolbox/divide_and_conquer/binary_search.h"


TEST(BinarySearchTestSuite, TaskDescriptionFirstTest) {
    std::vector<int> a = {1, 5, 8, 12, 13};
    int answer = binary_search(a, 8);
    EXPECT_EQ(answer, 2);
}

TEST(BinarySearchTestSuite, TaskDescriptionSecondTest) {
    std::vector<int> a = {1, 5, 8, 12, 13};
    int answer = binary_search(a, 1);
    EXPECT_EQ(answer, 0);
}

TEST(BinarySearchTestSuite, TaskDescriptionThirdTest) {
    std::vector<int> a = {1, 5, 8, 12, 13};
    int answer = binary_search(a, 23);
    EXPECT_EQ(answer, -1);
}

TEST(BinarySearchTestSuite, TaskDescriptionFourthTest) {
    std::vector<int> a = {1, 5, 8, 12, 13};
    int answer = binary_search(a, 11);
    EXPECT_EQ(answer, -1);
}

TEST(BinarySearchTestSuite, NoValueInVector) {
    std::vector<int> a = {1, 2, 3, 4, 5};
    int answer = binary_search(a, 10);
    EXPECT_EQ(answer, -1);
}

TEST(BinarySearchTestSuite, MaximumElementsArrayTest) {
    std::vector<int> array(30000);
    for (size_t i = 0; i < 30000; ++i) {
        array[i] = i * i;
    }
    EXPECT_EQ(binary_search(array, 500 * 500), 500);
    EXPECT_EQ(binary_search(array, 29999 * 29999), 29999);
    EXPECT_EQ(binary_search(array, 50000000), -1);
    EXPECT_EQ(binary_search(array, 1000000000), -1);
    EXPECT_EQ(binary_search(array, 999999999), -1);
}

TEST(BinarySearchTestSuite, OneElementArray) {
    std::vector<int> array = {1, 2, 3};
    EXPECT_EQ(binary_search(array, 3), 2);
    EXPECT_EQ(binary_search(array, 4), -1);
}



