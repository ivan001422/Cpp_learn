#include <iostream>
#include <windows.h>

#include <cstring>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    char str1[20] = "Hello";
    char str2[20] = "World";

    cout << strlen(str1) << "\n";               // длина строки (5)
    strcpy_s(str2, str1);         // копирование
    strcat_s(str1, " World");     // конкатенация
    cout << str1 << " " << str2 << "\n";
    cout << strcmp(str2, str1) << "\n";         // сравнение (0 если равны) (-1 если 1 строка длиннее) (1 если 2 строка длиннее)
    cout << strchr(str1, 'e') << "\n";          // поиск символа
    cout << strstr(str1, "llo") << "\n";        // поиск подстроки
}
