#include "gtest/gtest.h"
#include "../src/month.cpp"
// #include "../src/main.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(MonthTests, monthCheckDaysInMonth1) {
    Month *aMonth = new Month("February", 2023);
    int numDays = aMonth->checkDaysInMonth();
    EXPECT_EQ(numDays, 28);
}

TEST(MonthTests, monthCheckDaysInMonth2) {
    Month *aMonth = new Month("February", 2020);
    int numDays = aMonth->checkDaysInMonth();
    EXPECT_EQ(numDays, 29);
}

TEST(MonthTests, monthCheckDaysInMonth3) {
    Month *aMonth = new Month("December", 2023);
    int numDays = aMonth->checkDaysInMonth();
    EXPECT_EQ(numDays, 31);
}

// TEST(MonthTests, monthCheckFirstDay1) {
    
// }

// TEST(MonthTests, monthCheckFirstDay2) {
    
// }

// TEST(MonthTests, monthCheckFirstDay3) {
    
// }

// TEST(MonthTests, monthIsLeap1) {
    
// }

// TEST(MonthTests, monthIsLeap2) {
    
// }

// TEST(MonthTests, monthIsLeap3) {
    
// }