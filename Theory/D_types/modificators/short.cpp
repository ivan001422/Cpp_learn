/*
 * Модификатор: short
 * Применение:   short int (или просто short)
 * Размер:       обычно 2 байта (16 бит)
 * Диапазон:     от –32 768 до 32 767 (signed по умолчанию)
 * Назначение:   экономия памяти, когда значения заведомо небольшие.
 */

#include <iostream>
using namespace std;

int main() {
    short small_number = 32000;          // умещается в 16 бит
    short negative_short = -15000;

    cout << "short (макс. ~32767): " << small_number << endl;
    cout << "отрицательный short: " << negative_short << endl;
    cout << "Размер short: " << sizeof(small_number) << " байта" << endl;
    return 0;
}
