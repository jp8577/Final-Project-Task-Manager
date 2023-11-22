CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(calendarTests)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(dayTest
    test/dayTest.cpp
    src/day.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)