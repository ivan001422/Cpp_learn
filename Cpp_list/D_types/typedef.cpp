#include <iostream>
using namespace std;

/*
 * Ключевое слово typedef
 *
 * typedef позволяет создавать псевдонимы (синонимы) для существующих типов.
 * Это делает код более читаемым и упрощает работу со сложными типами.
 *
 * Синтаксис:
 *   typedef существующий_тип новое_имя;
 *
 * В отличие от using (C++11), typedef появился в C и используется
 * в классическом коде. Оба способа часто взаимозаменяемы.
 *
 * Важно: typedef НЕ создаёт новый тип, а лишь добавляет
 * дополнительное имя для уже существующего типа. Оригинальное
 * имя остаётся доступным. Например, после `typedef int Integer;`
 * оба названия (int и Integer) обозначают один и тот же тип.
 */

 // ---------- 1. Простые псевдонимы ----------
typedef unsigned long ulong;    // ulong теперь означает unsigned long
typedef int Integer;           // Integer — синоним int

// ---------- 2. Указатели ----------
typedef int *IntPtr;           // IntPtr = указатель на int
typedef const char *CString;   // CString = указатель на константную строку

// ---------- 3. Массивы ----------
typedef int TenInts[10];       // TenInts — тип "массив из 10 int"
typedef char Buffer[256];      // Buffer — массив из 256 символов

int main() {
    // Простые псевдонимы
    ulong big = 4000000000U;    // unsigned long
    Integer x = 10;             // int
    cout << "big = " << big << ", x = " << x << endl;

    // Указатели
    int val = 42;
    IntPtr p = &val;            // p — указатель на int
    CString msg = "Hello!";     // msg — указатель на константную строку
    cout << "*p = " << *p << ", msg = " << msg << endl;

    // Массивы через typedef
    TenInts arr = { 1, 2, 3 };    // остальные элементы = 0
    cout << "arr[0] = " << arr[0] << ", arr[1] = " << arr[1] << endl;

    Buffer buf = "C++";         // инициализация строкой
    cout << "buf = " << buf << endl;

    // Демонстрация: int и Integer — один и тот же тип
    int normal = 5;
    Integer alias = 10;
    normal = alias;             // можно присваивать в обе стороны
    cout << "normal теперь = " << normal << endl;

    return 0;
}
