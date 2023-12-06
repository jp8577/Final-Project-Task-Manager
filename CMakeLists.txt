CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(taskManagerTests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

ADD_SUBDIRECTORY(googletest)

# ADD_EXECUTABLE(dayTest
#     test/dayTest.cpp
# )

set(SOURCE_FILES src/task.cpp src/time.cpp src/day.cpp )

add_executable(main src/main.cpp ${SOURCE_FILES})

