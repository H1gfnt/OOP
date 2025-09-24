#include <iostream>

bool Fear(std::string day, int number) {
    if (day == "Понедельник") {
        return number == 12;
    } else if (day == "Вторник") {
        return number > 95;
    } else if (day == "Среда") {
        return number == 34;
    } else if (day == "Четверг") {
        return number == 0;
    } else if (day == "Пятница") {
        return number % 2 == 0;
    } else if (day == "Суббота") {
        return number == 56;
    } else if (day == "Воскресенье") {
        return number == 666 || number == -666;
    }
    return false;
}

bool correctDay (std::string day) {
    if (day == "Понедельник" || "Вторник" || "Среда" || "Четверг"
        || "Пятница" || "Суббота" || "Воскресенье") {
        return true;
    } else {
        return false;
    }
}