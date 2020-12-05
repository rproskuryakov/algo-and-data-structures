#include <gtest/gtest.h>

#include "toolbox/divide_and_conquer/majority_element.h"

TEST(MajorityElementTestSuite, TaskDescriptionTestsFirst) {
    std::vector<int> array = {2, 3, 9, 2, 2};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, TaskDescriptionTestsSecond) {
    std::vector<int> array = {1, 2, 3, 4};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, TaskDescriptionTestsThird) {
    std::vector<int> array = {1, 2, 3, 1};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, EmptyArray) {
    std::vector<int> array = {};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, ArrayWithOneElement) {
    std::vector<int> array = {1};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, TwoElementsArrayWithMajorityElement) {
    std::vector<int> array = {2000, 2000};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, TwoElementsArrayWithoutMajorityElement) {
    std::vector<int> array = {500000, 200000};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, NoMajorityElementEvenNumberOfElements) {
    std::vector<int> array = {6, 1, 4, 2, 0, 10};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, NoMajorityElementOddNumberOfElements) {
    std::vector<int> array = {5, 4, 2, 3, 1};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, NoMajorityElementHalf) {
    std::vector<int> array = {0, 10, 1, 5, 10, 10};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, MaximumValueArrayWithMajorityElement) {
    std::vector<int> array = {1000000000, 0, 1000000000};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, MaximumElementsArrayWithoutMajorityElement) {
    std::vector<int> array(100000);
    for (size_t i = 0; i < 50000; ++i) {
        array.push_back(5);
    }
    for (size_t i = 0; i < 50000; ++i) {
        array.push_back(10);
    }
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, MaximumElementsArrayWithMajorityElement) {
    std::vector<int> array(100000);
    for (size_t i = 0; i <= 50001; ++i) {
        array.push_back(5);
    }
    for (size_t i = 0; i <= 49999; ++i) {
        array.push_back(10);
    }
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

