#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    for (int x = 0; x < 1000; x++) {
        if (x == 10) goto stop; // Переход на метку
        else cout << x << "\n";
    }
    stop: // Идентификатор
        cout << "\n";
        cout << "stop";

}
