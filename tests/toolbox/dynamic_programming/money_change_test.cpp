#include <gtest/gtest.h>

#include "toolbox/dynamic_programming/money_change.h"

TEST(MoneyChangeTestSuite, TaskDescriptionFirstExampleTest) {
    EXPECT_EQ(money_change(2), 2);
}

TEST(MoneyChangeTestSuite, TaskDescriptionSecondExampleTest) {
    EXPECT_EQ(money_change(34), 9);
}

TEST(MoneyChangeTestSuite, TaskDescriptionThirdExampleTest) {
    EXPECT_EQ(money_change(6), 2);
}
