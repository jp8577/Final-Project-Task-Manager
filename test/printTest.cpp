#include "gtest/gtest.h"
#include "../header/print.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(DayTests, dayConstructor1) {
    Day *newDay = new Day();
    ASSERT_EQ(newDay->getName(), "");
}



