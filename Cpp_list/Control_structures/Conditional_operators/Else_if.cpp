#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    
    int a = 1, b = 2;

    if (a > b) cout << "a > b"; // Условие не выполнится

    else if (a % b == 1) cout << "a % b == 0"\n"; // Если ни 1 оператор перед else if не сработал, то else if проверит условие.

    else cout << "a < b"; // Если ни 1 оператор перед else не сработал, то else сработает.
}

