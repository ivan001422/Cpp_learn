#include <iostream>
#include <windows.h>

#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    // Инициализация
    srand(time(NULL));  // один раз в начале программы

    // Генерация случайных чисел
    int x = rand() % 100;        // от 0 до 99
    int y = rand() % 100 + 1;    // от 1 до 100

    // Преобразования строк
    int w = atoi("123");     // string to int
    double z = atof("3.14");    // string to double
    long int q = atol("123456");  // string to long

    // Другие функции
    int c = abs(-5);         // модуль целого числа
    system("pause"); // выполнить команду ОС
    exit(0);         // завершить программу
}
