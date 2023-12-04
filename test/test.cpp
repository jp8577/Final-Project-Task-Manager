#include "gtest/gtest.h"
#include "../header/time.h"
#include "../header/task.h"
#include "../header/print.h"
#include "../header/month.h"
#include "../header/day.h"
#include "../header/calendar.h"
#include "../src/main.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}