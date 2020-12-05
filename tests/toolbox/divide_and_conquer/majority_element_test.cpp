#include <gtest/gtest.h>

#include "toolbox/divide_and_conquer/majority_element.h"

TEST(MajorityElementTestSuite, TaskDescriptionFirstExampleContainsMajorityElementTest) {
    std::vector<int> array = {2, 3, 9, 2, 2};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, TaskDescriptionSecondDoesntContainsMajorityElementTest) {
    std::vector<int> array = {1, 2, 3, 4};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, TaskDescriptionThirdDoesntContainsMajorityElementTest) {
    std::vector<int> array = {1, 2, 3, 1};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, ArrayWithOneElementTest) {
    std::vector<int> array = {1};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, TwoElementsArrayWithMajorityElementTest) {
    std::vector<int> array = {2000, 2000};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, TwoElementsArrayWithoutMajorityElementTest) {
    std::vector<int> array = {500000, 200000};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, NoMajorityElementEvenNumberOfElementsTest) {
    std::vector<int> array = {6, 1, 4, 2, 0, 10};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, NoMajorityElementOddNumberOfElementsTest) {
    std::vector<int> array = {5, 4, 2, 3, 1};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, NoMajorityElementHalfTest) {
    std::vector<int> array = {0, 10, 1, 5, 10, 10};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, MaximumValueArrayWithMajorityElementTest) {
    std::vector<int> array = {1000000000, 0, 1000000000};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, MaximumElementsArrayWithoutMajorityElementTest) {
    std::vector<int> array(100000);
    for (size_t i = 0; i < 50000; ++i) {
        array[i] = 5;
    }
    for (size_t i = 50000; i < 100000; ++i) {
        array[i] = 10;
    }
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}

TEST(MajorityElementTestSuite, MaximumElementsArrayWithMajorityElementTest) {
    std::vector<int> array(100000);
    for (size_t i = 0; i < 50001; ++i) {
        array[i] = 5;
    }
    for (size_t i = 50001; i < 100000; ++i) {
        array[i] = 10;
    }
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 1);
}

TEST(MajorityElementTestSuite, SecondTest) {
    std::vector<int> array = {512766168, 717383758, 5, 126144732, 5, 573799007, 5, 5, 5, 405079772};
    EXPECT_EQ(get_majority_element(array, 0, array.size()), 0);
}