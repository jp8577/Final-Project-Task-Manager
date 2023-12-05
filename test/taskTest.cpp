#include "gtest/gtest.h"
#include "../header/task.h"
#include "../src/main.cpp"

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
