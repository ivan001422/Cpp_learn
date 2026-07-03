/*
 * Модификатор: long
 * Применение:   long int (или просто long)
 * Размер:       зависит от платформы (обычно 4 или 8 байт)
 * Диапазон (4 байта):  от –2 147 483 648 до 2 147 483 647
 * Диапазон (8 байт):   от –9 223 372 036 854 775 808 до 9 223 372 036 854 775 807
 * Назначение:   числа, которые могут не поместиться в обычный int.
 */

#include <iostream>
using namespace std;

int main() {
    long big_value = 2147483647L;        // L – литерал long
    long negative_long = -2147483647L;

    cout << "long: " << big_value << endl;
    cout << "отрицательный long: " << negative_long << endl;
    cout << "Размер long: " << sizeof(big_value) << " байта(ов)" << endl;
    cout << "Максимальный long: " << LONG_MAX << endl;
    return 0;
}
