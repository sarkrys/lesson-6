#include <iostream>
#include <string>

#define MODE 0
#ifndef MODE
#error
#endif
void countnum(int a, int b) {
    if (a != 0) {
#define MODE 1
    }
}
int add(int a, int b) {
    return a + b;
}
int main() {
 setlocale(LC_ALL, "ru");
#if MODE > 1
 std::cout << "неизвестный режим\n";
#endif
#if MODE < 0
 std::cout << "неизвестный режим\n";
#endif

#ifdef MODE == 0
    std::cout << "работаю в режиме тренировки " << std::endl;
    std::cout << " введите 1 число: ";
    int a = 0;
    std::cin >> a;
    std::cout << "\nвведите 2 число: ";
    int b = 0;
    std::cin >> b;
#endif
    countnum(a, b);
#ifdef MODE != 0
    int result = add(a, b);
    std::cout << "\nРезультат сложения: " << result;
#endif

    return 0;
}