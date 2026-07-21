#### Шаблонные функции

*   **Ключевое слово:** `template <class T>` или `template <typename T>`.
*   `T` — это **заполнитель** (параметр типа), который будет заменён реальным типом при вызове.

**Классический пример (обмен значениями):**

```cpp
#include <iostream>
using namespace std;

template <class X> // X - placeholder
void mySwap(X &a, X &b) {
    X temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int i=1, j=2;
    double d1=1.1, d2=2.2;
    char c1='a', c2='b';

    mySwap(i, j);   // Компилятор создаст версию для int
    mySwap(d1, d2); // Версия для double
    mySwap(c1, c2); // Версия для char
    cout << i << " " << d1 << " " << c1;
    return 0;
}
```
* Для нас не важен тип данных здесь. Этот код будет работать и для int, и для double, и для char.
* 
#### Несколько параметров типа

Можно использовать несколько "заглушек" для разных типов.

```cpp
template <class Type1, class Type2>
void show(Type1 a, Type2 b) {
    cout << a << " и " << b << endl;
}
// Вызов: show(10, "Привет"); // Type1=int, Type2=char*
```

#### Явная специализация (Перегрузка шаблона)

Иногда общий алгоритм не подходит для конкретного типа. Вы можете написать **специальную версию функции** для этого типа. Компилятор предпочтёт её общему шаблону.

```cpp
template <class X>
void mySwap(X &a, X &b) { /* общий код */ }

// Явная специализация для int
template<> void mySwap<int>(int &a, int &b) {
    // Специальный код для целых чисел (например, с оптимизацией или логированием)
    int temp = a; a = b; b = temp;
    cout << "Специализация для int\n";
}
```

**Альтернативный синтаксис (рекомендуется в новых стандартах):**
```cpp
template<> void mySwap<int>(int &a, int &b) { ... }
```

---

