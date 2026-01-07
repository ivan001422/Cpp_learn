#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    short int a = 1, b = 10;

    while (a <= b) { // Пока условие = true будут выполнятся инструкции
        cout << a << "\n";
        a++;
    }  
}
