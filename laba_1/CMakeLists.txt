cmake_minimum_required(VERSION 3.10)

project(laba_1)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
  TLS_VERIFY false
)

FetchContent_MakeAvailable(googletest)

add_library(${CMAKE_PROJECT_NAME}_lib fear.cpp)
add_executable(${CMAKE_PROJECT_NAME}_src main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}_src PRIVATE ${CMAKE_PROJECT_NAME}_lib)

enable_testing()

add_executable(tests tests/test01.cpp)
target_link_libraries(tests ${CMAKE_PROJECT_NAME}_lib gtest_main)

add_test(NAME MyProjectTests COMMAND tests)