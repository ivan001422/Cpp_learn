#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    /*
    
    Общий шаблон оператора else:

    if (условие) инструкция или блок кода

    else инструкция или блок кода
    
    */

    if (1 > 2) cout << "1 > 2"; // Условие не выполнится

    else cout << "1 < 2"; // Если ни 1 оператор перед else не сработал, то else сработает.
}

