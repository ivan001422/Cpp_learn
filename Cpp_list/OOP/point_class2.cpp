#include <iostream>

using namespace std;

class Point {
    float x, y, z;  // Приватные поля – инкапсуляция

public:
    // Конструктор с параметрами по умолчанию (объявлен, но определён ниже)
    Point(float x = 0.0f, float y = 0.0f, float z = 0.0f);

    // Методы для управления координатами
    void reset();
    void move_on(float x, float y, float z);
    void move_delta(float dx, float dy, float dz);

    // Функции доступа
    float get_x() { return x; }
    float get_y() { return y; }
    float get_z() { return z; }

    // Составные операторы += и -=
    // Возвращают ссылку на *this, чтобы поддерживать цепочки операций.
    // Принимают const ссылку – избегаем копирования и защищаем от изменений.
    Point &operator+=(const Point &p) {
        x += p.x;
        y += p.y;
        z += p.z;
        return *this;
    }

    Point &operator-=(const Point &p) {
        x -= p.x;
        y -= p.y;
        z -= p.z;
        return *this;
    }

    // Бинарные операторы + и -
    // Создают новый объект, не изменяя операнды.
    Point operator+(const Point &p) {
        Point result = *this;   // копируем текущий объект
        result += p;            // используем уже перегруженный +=
        return result;
    }

    Point operator-(const Point &p) {
        Point result = *this;
        result -= p;
        return result;
    }

    // Дружественная функция для вывода в поток(создание таких функций чуть позже).
    friend ostream &operator<<(ostream &os, const Point &p) {
        os << p.x << ' ' << p.y << ' ' << p.z;
        return os;
    }
};

// Реализация конструктора – использует присваивание, а не список инициализации(про них позже).
Point::Point(float X, float Y, float Z) {
    x = X;
    y = Y;
    z = Z;
}

// Сброс координат в (0,0,0) через вызов move_on
void Point::reset() {
    move_on(0.0f, 0.0f, 0.0f);
}

// Установка координат
void Point::move_on(float X, float Y, float Z) {
    x = X;
    y = Y;
    z = Z;
}

// Изменение координат на заданные дельты
void Point::move_delta(float dx, float dy, float dz) {
    x += dx;
    y += dy;
    z += dz;
}

int main() {
    Point p1(1.0f, 2.0f, 3.0f);  // создание с инициализацией
    Point p2(3.0f, 2.0f, 1.0f);
    Point p3;                     // использует конструктор по умолчанию (0,0,0)

    p1.move_on(1.0f, 1.0f, 1.0f);
    cout << p1 << endl;           // вывод: 1 1 1

    p1.move_delta(0.0f, 1.0f, 2.0f);
    cout << p1 << endl;           // вывод: 1 2 3

    p3 = p1 + p2;                 // p3 = (1,2,3) + (3,2,1) = (4,4,4)
    cout << p3 << endl;           // вывод: 4 4 4

    p3 -= p2 += p2; // Ассоциативность по умолчанию: справа налево
    cout << p3 << endl;           // p3 = (4,4,4) - (6,4,2) = (-2,0,2)

    // Массив объектов Point – инициализируется копированием p1, p2, p3.
    Point arr[3]{ p1, p2, p3 };

    return 0;
}
