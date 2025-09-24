#include <iostream>
#include "fear.h"

int main() {
    std::string day;
    int number;

    std::cout << "Введите день недели: ";
    std::cin >> day;
    std::cout << "Введите число для проверки: ";
    std::cin >> number;

    if (!correctDay(day)) {
        bool fear = Fear(day, number);

        if (!fear) {
            std::cout << "Не боится)" << std::endl;
        } else {
            std::cout << "Боится(" << std::endl;
        }
        return 0;
    } else {
        std::cout << "Ошибка: неправильный день" << std::endl;
    }
    return 0; 
}