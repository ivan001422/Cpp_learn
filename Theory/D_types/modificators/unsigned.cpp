/*
 * Модификатор: unsigned
 * Применение:   unsigned int, unsigned char и т.д.
 * Диапазон:     только неотрицательные значения,
 *               для 4-байтового unsigned int: от 0 до 4 294 967 295
 * Особенность:  старший бит участвует в представлении числа,
 *               что удваивает верхнюю границу по сравнению с signed.
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int positive = 3000000000U;   // U – литерал unsigned
    unsigned char max_char = 255;          // максимум unsigned char

    cout << "unsigned int: " << positive << " (размер " << sizeof(positive) << " байта)" << endl;
    cout << "unsigned char: " << int(max_char) << " (размер " << sizeof(max_char) << " байт)" << endl;
    return 0;
}
