#include <gtest/gtest.h>
#include "../fear.h"



TEST(FearTest, MondayTests) {
    EXPECT_TRUE(Fear("Понедельник", 12));
    EXPECT_FALSE(Fear("Понедельник", 11));
    EXPECT_FALSE(Fear("Понедельник", 0));
}

TEST(FearTest, TuesdayTests) {
    EXPECT_TRUE(Fear("Вторник", 96));
    EXPECT_TRUE(Fear("Вторник", 100));
    EXPECT_TRUE(Fear("Вторник", 1000));
    EXPECT_FALSE(Fear("Вторник", 95));
    EXPECT_FALSE(Fear("Вторник", 50));
    EXPECT_FALSE(Fear("Вторник", 0));
}

TEST(FearTest, WednesdayTests) {
    EXPECT_TRUE(Fear("Среда", 34));
    EXPECT_FALSE(Fear("Среда", 33));
    EXPECT_FALSE(Fear("Среда", 35));
    EXPECT_FALSE(Fear("Среда", 0));
}

TEST(FearTest, ThursdayTests) {
    EXPECT_TRUE(Fear("Четверг", 0));
    EXPECT_FALSE(Fear("Четверг", 1));
    EXPECT_FALSE(Fear("Четверг", -1));
    EXPECT_FALSE(Fear("Четверг", 100));
}

TEST(FearTest, FridayTests) {
    EXPECT_TRUE(Fear("Пятница", 2));
    EXPECT_TRUE(Fear("Пятница", 0));
    EXPECT_TRUE(Fear("Пятница", 100));
    EXPECT_TRUE(Fear("Пятница", -4));
    EXPECT_FALSE(Fear("Пятница", 1));
    EXPECT_FALSE(Fear("Пятница", 3));
    EXPECT_FALSE(Fear("Пятница", -1));
}

TEST(FearTest, SaturdayTests) {
    EXPECT_TRUE(Fear("Суббота", 56));
    EXPECT_FALSE(Fear("Суббота", 55));
    EXPECT_FALSE(Fear("Суббота", 57));
    EXPECT_FALSE(Fear("Суббота", 0));
}

TEST(FearTest, SundayTests) {
    EXPECT_TRUE(Fear("Воскресенье", 666));
    EXPECT_TRUE(Fear("Воскресенье", -666));
    EXPECT_FALSE(Fear("Воскресенье", 665));
    EXPECT_FALSE(Fear("Воскресенье", 667));
    EXPECT_FALSE(Fear("Воскресенье", 0));
    EXPECT_FALSE(Fear("Воскресенье", -665));
}

TEST(FearTest, InvalidDayTests) {
    // Для неверных дней функция должна возвращать false
    EXPECT_FALSE(Fear("InvalidDay", 123));
    EXPECT_FALSE(Fear("", 123));
    EXPECT_FALSE(Fear("Monday", 12)); // Английская версия
}