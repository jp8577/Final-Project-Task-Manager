#include "gtest/gtest.h"
#include "../src/time.cpp"
// #include "../header/task.h"
// #include "../header/print.h"
// #include "../header/month.h"
// #include "../header/day.h"
// #include "../header/calendar.h"
// #include "../src/main.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(TimeTests, timeConstructor) {
    Time *newTime = new Time(4,39,true);
    ASSERT_EQ(newTime->getMins(), 39);
}

TEST(TimeTests, setHours) {
    Time *newTime = new Time(4,39,true);
    newTime->setHours(6);
    ASSERT_EQ(newTime->getHours(), 6);
}

TEST(TimeTests, getPM) {
    Time *newTime = new Time(4,39,true);
    EXPECT_TRUE(newTime->getPm());
}

TEST(TimeTests, setPM) {
    Time *newTime = new Time(4,39,false);
    newTime->setPm(true);
    EXPECT_TRUE(newTime->getPm());
}