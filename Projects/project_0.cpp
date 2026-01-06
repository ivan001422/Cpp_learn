#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    bool FLAG_1 = 1, FLAG_2 = 1;

    for (short unsigned int chislo = 2; chislo <= 1000; chislo += 2) {

        for (short unsigned int SUM_1 = 1; SUM_1 < chislo; SUM_1++) { // Подбор первого слагаемого
            FLAG_1 = 1;
            for (short unsigned int DELITEL_SUM_1 = 2; DELITEL_SUM_1 * DELITEL_SUM_1 <= SUM_1+1; DELITEL_SUM_1++) { // Проверка слагаемого на простоту
                if (SUM_1 % DELITEL_SUM_1 == 0) { // Если не простое - ставим флаг в 0, останавливаем цикл
                    FLAG_1 = 0;
                    break;
                }
            }
            if (FLAG_1) { // Проверяем флаг 

                for (short unsigned int SUM_2 = SUM_1; SUM_2 < chislo; SUM_2++) { // Подбор второго слагаемого
                    FLAG_2 = 1;
                    for (short unsigned int DELITEL_SUM_2 = 2; DELITEL_SUM_2 * DELITEL_SUM_2 <= SUM_2+1; DELITEL_SUM_2++) { // Проверка слагаемого на простоту
                        if (SUM_2 % DELITEL_SUM_2 == 0) { // Если не простое - ставим флаг в 0, останавливаем цикл
                            FLAG_2 = 0;
                            break;
                        }
                    }
                    if (FLAG_2) { // Проверяем флаг 
                        if (SUM_1 + SUM_2 == chislo) cout << SUM_1 << " + " << SUM_2 << " = " << chislo << "\n";
                    }
                }
            }
        }
        cout << "\n";
    }
}

