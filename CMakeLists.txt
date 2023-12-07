CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(taskManagerTests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

ADD_SUBDIRECTORY(googletest)

set(SOURCE_FILES src/task.cpp src/time.cpp src/day.cpp )
set(TEST_FILES test/taskTest.cpp)

add_executable(main src/main.cpp ${SOURCE_FILES})

add_executable(dayTest ${TEST_FILES} ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(dayTest gtest)
TARGET_COMPILE_DEFINITIONS(dayTest PRIVATE gtest_disable_pthreads=ON)


