#include "gtest/gtest.h"
#include "../src/task.cpp"
#include "../src/time.cpp"
// #include "../header/print.h"
// #include "../header/month.h"
// #include "../header/day.h"
// #include "../header/calendar.h"
// #include "../src/main.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(TaskTests, taskConstructor1) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    ASSERT_EQ(newTask->getStartTime().getHours(),4);
}

TEST(TaskTests, taskConstructor2) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    EXPECT_EQ(newTask->getEndTime().getHours(),5);
}

TEST(TaskTests, taskConstructor3) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    EXPECT_EQ(newTask->getCategory(), "math");
}
TEST(TaskTests, taskConstructor4) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    EXPECT_EQ(newTask->getLocation(), "school");
}
TEST(TaskTests, taskConstructor5) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    EXPECT_EQ(newTask->getDescription(), "class");
}

TEST(TaskTests, taskConstructor6) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    EXPECT_EQ(newTask->getPriority(), 1);
}

TEST(TaskTests, failedTaskConstructor) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task(startTime, endTime, "math", "school", "class", 1);
    EXPECT_EQ(newTask->getPriority(), 4);
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