#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    int a = 0;

    for (int x = 0; x <= 10; x++) {
        if (x == 5) { break; } // Моментально завершает все итерации цикла
        cout << x << "\n";
    }

    cout << "\n";

    while (a != 10) { // Работает со всеми циклами
        if (a == 5) { break; }
        cout << a << "\n";
        a++;
    }

    cout << "\n";

    do {
        if (a == 10) { break; }
        cout << a << "\n";
        a++;
    } while (a != 20);
}
