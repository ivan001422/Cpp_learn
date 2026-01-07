#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    for (int a = 0; a <= 20; a++) {
        if (a % 2 == 0) { cout << a << "\n"; continue; } // Continue моментально переходит к следующей итерации цикла.
        cout << "Нечетное\n";
    }

    // continue работает со всеми циклами
}
