/*
 * Модификатор: long long
 * Применение:   long long int (или просто long long)
 * Размер:       не менее 8 байт (64 бита)
 * Диапазон:     от –9 223 372 036 854 775 808 до 9 223 372 036 854 775 807
 *               (для unsigned long long: от 0 до 18 446 744 073 709 551 615)
 * Назначение:   очень большие целые числа (больше, чем long).
 */

#include <iostream>
using namespace std;

int main() {
    long long huge = 9223372036854775807LL;   // максимальное signed long long
    long long negative_huge = -9223372036854775807LL;

    cout << "long long (макс.): " << huge << endl;
    cout << "отрицательный long long: " << negative_huge << endl;
    cout << "Размер long long: " << sizeof(huge) << " байт" << endl;
    return 0;
}
