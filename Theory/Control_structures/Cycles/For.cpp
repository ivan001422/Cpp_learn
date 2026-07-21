#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    short int a = 0, b = 10;

    for (a; a <= b; a++) { // Переменная, условие, инкремент
        cout << a << "\n";
    }

    cout << "\n";

    for (a = 0; a <= 5; a += 1) { // Инициализация переменной прямо в коде
        cout << a << "\n";
    }

    cout << "\n";

    for (int x = 0; x <= 5; x += 1) { // Инициализация и обьявление переменной прямо в коде
        cout << x << "\n";
    }

    for (; a <= b;) { // Нет инкремента и обьявления переменной
        cout << a << "\n";
        a++; // Вынесенный инкремент
    }
    for (;;) {
        // Бесконечный цикл
    }
}
