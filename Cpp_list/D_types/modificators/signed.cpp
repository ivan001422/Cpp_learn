/*
 * Модификатор: signed
 * Применение:   signed int, signed char (int signed по умолчанию)
 * Диапазон:     отрицательные и положительные значения,
 *               для 4-байтового int: от –2 147 483 648 до 2 147 483 647
 * Особенность:  старший бит используется как знаковый
 *               (0 – положительное, 1 – отрицательное).
 */

#include <iostream>
using namespace std;

int main() {
    signed int negative = -100;          // явное указание signed
    int default_signed = 42;             // int подразумевает signed
    signed char letter = 'A';            // signed char может быть отрицательным
    signed char negative_char = -65;     // отрицательное значение в char

    cout << "signed int negative: " << negative << endl;
    cout << "int (signed по умолчанию): " << default_signed << endl;
    cout << "signed char (как символ): " << letter << endl;
    cout << "signed char (как число): " << int(negative_char) << endl;
    return 0;
}
