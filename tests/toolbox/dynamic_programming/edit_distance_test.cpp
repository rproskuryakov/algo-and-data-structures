#include <string>
#include <gtest/gtest.h>

#include "toolbox/dynamic_programming/edit_distance.h"


TEST(EditDistanceTestSuite, TaskDescriptionFirstExampleTest) {
    std::string first_string = "ab";
    std::string second_string = "ab";
    EXPECT_EQ(edit_distance(first_string, second_string), 0);
}

TEST(EditDistanceTestSuite, TaskDescriptionSecondExampleTest) {
    std::string first_string = "short";
    std::string second_string = "ports";
    EXPECT_EQ(edit_distance(first_string, second_string), 3);
}

TEST(EditDistanceTestSuite, TaskDescriptionThirdExampleTest) {
    std::string first_string = "editing";
    std::string second_string = "distance";
    EXPECT_EQ(edit_distance(first_string, second_string), 5);
}