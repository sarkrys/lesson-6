#include <iostream>
#include <string>
#include <locale>

#ifndef MODE 
#define MODE 1
#endif

int add(int a, int b) {
    return a + b;
}

int countnum(int a, int b) {
    std::cout << "работаю в режиме тренировки " << std::endl;
    std::cout << "Введите 1 число: ";
    std::cin >> a;
    std::cout << "\nВведите 2 число: ";
    std::cin >> b;

    int result = add(a, b);
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");

    int a = 0;
    int b = 0;

    if (MODE > 1) {
        std::cout << "неизвестный режим\n";
    }
    else if (MODE < 1) {
        std::cout << "неизвестный режим\n";
    }
    else if (MODE == 1) {
        int result = countnum(a, b);
        std::cout << "\nРезультат сложения: " << result;
    }

    return 0;
}