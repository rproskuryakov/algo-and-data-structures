#include <vector>
#include <gtest/gtest.h>

#include "toolbox/dynamic_programming/longest_common_subsequence.h"


TEST(LongestCommonSubsequenceTestSuite, TaskDescriptionFirstExampleTest) {
    std::vector<int> first_seq = {2, 7, 5};
    std::vector<int> second_seq = {2, 5};
    EXPECT_EQ(length_of_lcs(first_seq, second_seq), 2);
}

TEST(LongestCommonSubsequenceTestSuite, TaskDescriptionSecondExampleTest) {
    std::vector<int> first_seq = {7};
    std::vector<int> second_seq = {1, 2, 3, 4};
    EXPECT_EQ(length_of_lcs(first_seq, second_seq), 0);
}

TEST(LongestCommonSubsequenceTestSuite, TaskDescriptionThirdExampleTest) {
    std::vector<int> first_seq = {2, 7, 8, 3};
    std::vector<int> second_seq = {5, 2, 8, 7};
    EXPECT_EQ(length_of_lcs(first_seq, second_seq), 2);
}