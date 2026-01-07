#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    bool FLAG_1 = 1;

    const unsigned short int len_list = 200; // Длина списка для кеша

    unsigned short int list[len_list]; // Создание списка для кеша

    unsigned short int len_list_cntr = 0, i = 1000; // Для контроля за памятью, до какого числа искать суммы(При значении > 2 ** 32 нужно убрать модиикатор short)

    if (i % 2 == 0 and i != 0) { // Проверка для i

        for (short unsigned int finder = 1; finder < i; finder++) { // Находим все простые числа до i
            FLAG_1 = 1;
            for (short unsigned int DELITEL_SUM_1 = 2; DELITEL_SUM_1 * DELITEL_SUM_1 <= finder + 1; DELITEL_SUM_1++) { // Проверка слагаемого на простоту
                if (finder % DELITEL_SUM_1 == 0) { // Если не простое - ставим флаг в 0, останавливаем цикл
                    FLAG_1 = 0;
                    break;
                }
            }
            if (FLAG_1) { // Проверка флага на простое число
                if (len_list_cntr != len_list) { // Проверка на превышение длины списка для кеша
                    list[len_list_cntr] = finder; // Добавляем в список кеша новое простое число
                    len_list_cntr++; // Увеличиваем счетчик записанных чисел в списке кеша
                }
                else {
                    cout << "Угроза переполнения списка";
                    goto exit;

                }
            }
        }

        for (unsigned short int n = 2; n <= i; n += 2) { // Начинаем подбор двух слагаемых

            for (unsigned short sum1_inx = 0; sum1_inx < len_list_cntr; sum1_inx++) { // Решаем через двойной цикл-медленный способ
                for (unsigned short sum2_inx = sum1_inx; sum2_inx < len_list_cntr; sum2_inx++) { // Т.к список кеша отсортирован, то второе число можно подбирать начиная с 1
                    if (list[sum1_inx] + list[sum2_inx] == n) cout << list[sum1_inx] << " + " << list[sum2_inx] << " = " << n << "\n"; // Нашли пару чисел
                }
            }
            cout << "\n";
        }
    }
    else cout << "i % 2 != 0";
    exit:;

}
