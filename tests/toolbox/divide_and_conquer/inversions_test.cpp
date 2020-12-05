#include <gtest/gtest.h>

#include "toolbox/divide_and_conquer/inversions.h"

TEST(InversionsTestSuite, TaskDescriptionTest) {
    std::vector<int> main_array = {2, 3, 9, 2, 9};
    std::vector<int> additional_array(main_array.size());
    long long result = get_number_of_inversions(main_array, additional_array, 0, main_array.size());
    EXPECT_EQ(result, 2);
}

TEST(InversionsTestSuite, NoInversionsArrayTest) {
    std::vector<int> main_array = {1, 2, 3, 4, 5};
    std::vector<int> additional_array(main_array.size());
    long long result = get_number_of_inversions(main_array, additional_array, 0, main_array.size());
    EXPECT_EQ(result, 0);
}

TEST(InversionsTestSuite, EmptyArrayTest) {
    std::vector<int> main_array = {};
    std::vector<int> additional_array = {};
    long long result = get_number_of_inversions(main_array, additional_array, 0, main_array.size());
    EXPECT_EQ(result, 0);
}

TEST(InversionsTestSuite, AllInversionsArrayTest) {
    std::vector<int> main_array = {5, 4, 3, 2, 1};
    std::vector<int> additional_array(main_array.size());
    long long result = get_number_of_inversions(main_array, additional_array, 0, main_array.size());
    EXPECT_EQ(result, (int)(5 * 4 / 2));
}

TEST(InversionsTestSuite, OverflowArrayTest) {
    std::vector<int> main_array = {1000000000, 5000, 30000};
    std::vector<int> additional_array(main_array.size());
    long long result = get_number_of_inversions(main_array, additional_array, 0, main_array.size());
    EXPECT_EQ(result, 2);
}

TEST(InversionsTestSuite, MaximumElementsInArrayTest) {
    std::vector<int> main_array(100000);
    std::vector<int> additional_array(100000);
    for (int i = 0; i < 50000; ++i) {
        main_array.push_back(10);
    }
    for (int i = 0; i < 50000; ++i) {
        main_array.push_back(5);
    }
    long long result = get_number_of_inversions(main_array, additional_array, 0, main_array.size());
    EXPECT_EQ(result, 50000 * 50000);
}

