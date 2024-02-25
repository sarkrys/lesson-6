#include <iostream>
#include <string>
#include <locale>

#ifndef MODE 
#define MODE 1
#else
std::cout << "опредедите MODE" << endl;
#endif
int add(int a, int b) {
    return a + b;
}

int countnum(int a, int b) {
    std::cout << "работаю в боевом режиме " << std::endl;
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
#if (MODE > 1) {
        std::cout << "неизвестный режим\n";
#elif (MODE < 1) {
        std::cout << "неизвестный режим\n";
#elif (MODE == 1) {
        int result = countnum(a, b);
        std::cout << "\nРезультат сложения: " << result;
#endif

    return 0;
}