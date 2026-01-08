#include <iostream>
#include <windows.h>

#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    double x = 3.14, y = 2.71;


    // Степени и корни
    pow(x, y);     // x в степени y [тип1 , тип2 > тип1] Любой числовой тип
    sqrt(x);       // квадратный корень [int, double, float -> double]
    cbrt(x);       // кубический корень [int, double, float -> double]
    exp(x);        // e^x [double -> double]
    log(x);        // натуральный логарифм [double -> double]
    log10(x);      // десятичный логарифм [double -> double]

    // Тригонометрия (в радианах!)
    sin(x); cos(x); tan(x); // [double -> double]
    asin(x); acos(x); atan(x);  // обратные [double -> double]

    // Округление
    floor(x);   // вниз (3.9 → 3.0) [double -> double]
    ceil(x);    // вверх (3.1 → 4.0) [double -> double]
    round(x);   // математическое [double -> double]
    trunc(x);   // отбрасывание дробной части [double -> double]

    // Абсолютное значение
    abs(-5.2);    // [Любой числовой -> тот же самый]

}
