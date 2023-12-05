#include "gtest/gtest.h"
#include "../header/time.h"
#include "../src/main.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(TimeTests, addMin) {
    Time *newTime = new Time(4, 30, true);
    newTime->addMin();
    EXPECT_EQ(newTime->getMins(), 31);
}

TEST(TimeTests, addMinsto59) {
    Time *newTime = new Time(4, 59, true);
    newTime->addMin();
    EXPECT_EQ(newTime->getHours(), 5);
    EXPECT_EQ(newTime->getMins(), 0);
}

TEST(TimeTests, addMinsToFlipToPM) {
    Time *newTime = new Time(11, 59, false);
    newTime->addMin();
    EXPECT_EQ(newTime->getHours(), 12);
    EXPECT_EQ(newTime->getMins(), 0);
    EXPECT_TRUE(newTime->getPm());
}