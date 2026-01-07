#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    short int a , b = 10;

    do {
        cout << "Введите число 10: "; // Сначала выполним инструкции, потом проверим условие для следующей итерации.
        cin >> a;
    } while (a != b); // Если условие = true, то цикл сработает еще раз.
    
    do cin >> a; // Можно использовать без блока кода
    while (a != b);
}
