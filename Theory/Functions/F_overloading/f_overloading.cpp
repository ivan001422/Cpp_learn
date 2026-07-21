#include <iostream>

using namespace std;

int del(int, int);      // Целочисленная версия
double del(double, double); // Версия с плавающей точкой

int main() {
    cout << del(10, 5) << '\n';   // Вызовет int-версию: 10 / 5 = 2
    cout << del(0.5, 0.1);        // Вызовет double-версию: 0.5 / 0.1 = 5
}

int del(int x, int y) {
    return x / y;
}

double del(double x, double y) {
    return x / y;
}
