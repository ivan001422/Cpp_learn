#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    // Bubble sort

    short int list[10];

    list[0] = 42;
    list[1] = 17;
    list[2] = 99;
    list[3] = 3;
    list[4] = 256;
    list[5] = -50;
    list[6] = 1000;
    list[7] = 777;
    list[8] = 0;
    list[9] = -123;

    while (1) {
        short int cnt = 0;
        for (short int list_inx = 0; list_inx < 9; list_inx++) {
            if (list[list_inx + 1] < list[list_inx]) { short int sup = list[list_inx]; list[list_inx] = list[list_inx + 1]; list[list_inx + 1] = sup; cnt++; }
        }
        if (cnt == 0) break;
    }

    for (int i = 0; i < 10; i++) cout << list[i] << "\n";

}
