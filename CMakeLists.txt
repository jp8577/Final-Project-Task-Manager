CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(taskManagerTests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

ADD_SUBDIRECTORY(googletest)

set(SOURCE_FILES src/task.cpp src/time.cpp src/month.cpp src/day.cpp src/print.cpp)

set(TEST_FILES test/taskTest.cpp)
set(TEST_FILES test/monthTest.cpp)

add_executable(main src/main.cpp ${SOURCE_FILES})

add_executable(dayTest test/dayTest.cpp ${SOURCE_FILES})
add_executable(monthTest test/monthTest.cpp ${SOURCE_FILES})
add_executable(taskTest test/taskTest.cpp ${SOURCE_FILES})
add_executable(timeTest test/timeTest.cpp ${SOURCE_FILES})


TARGET_LINK_LIBRARIES(dayTest gtest)
TARGET_COMPILE_DEFINITIONS(dayTest PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(monthTest gtest)
TARGET_COMPILE_DEFINITIONS(monthTest PRIVATE gtest_disable_pthreads=ON) 

TARGET_LINK_LIBRARIES(taskTest gtest)
TARGET_COMPILE_DEFINITIONS(taskTest PRIVATE gtest_disable_pthreads=ON) 

TARGET_LINK_LIBRARIES(timeTest gtest)
TARGET_COMPILE_DEFINITIONS(timeTest PRIVATE gtest_disable_pthreads=ON) 

