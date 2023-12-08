#include "gtest/gtest.h"
#include "../header/day.h"
#include "../header/time.h"
#include "../header/task.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
TEST(DayTests, dayConstructor1) {
    Day *newDay = new Day();
    ASSERT_EQ(newDay->getName(), "");
}
TEST(DayTests, dayConstructor2) {
    Day *newDay = new Day("Tuesday");
    ASSERT_EQ(newDay->getName(), "Tuesday");
}

TEST(DayTests, vectSize1) {
    Day *newDay = new Day("Monday"); 
    ASSERT_EQ(newDay->getTasksAmount(), 0);
}

TEST(DayTests, vectSize2) {
    Day *newDay = new Day("Tuesday");
   
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1", startTime, endTime, "math", "class", 1);
    bool task = newDay->addTask(newTask); 
    ASSERT_EQ(newDay->getTasksAmount(), 1); 
}

TEST(DayTests, addTask) {
    Day *newDay = new Day("Tuesday");
   
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1", startTime, endTime, "math", "class", 1);
    ASSERT_EQ(newDay->addTask(newTask), true);
}

TEST(DayTests, addTask2) {
    Day *newDay = new Day("Tuesday");
   
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1", startTime, endTime, "math", "class", 1);
    newDay->addTask(newTask);
    
    Time *startTime2 = new Time(5, 0, true);
    Time *endTime2 = new Time(6, 30, true);
    Task *newTask2 = new Task("Test2", startTime2, endTime2, "english", "class", 1);
    ASSERT_EQ(newDay->addTask(newTask2), false);
}
TEST(DayTests, addTask3) {
    Day *newDay = new Day("Tuesday");
   
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1", startTime, endTime, "math", "class", 1);
    newDay->addTask(newTask);
    
    Time *startTime2 = new Time(5, 0, true);
    Time *endTime2 = new Time(6, 30, true);
    Task *newTask2 = new Task("Test2", startTime2, endTime2, "english", "class", 1);
    ASSERT_EQ(newDay->addTask(newTask2), false);
}
