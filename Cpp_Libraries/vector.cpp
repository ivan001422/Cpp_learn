#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1;           // Объявление вектора с типом int
    vec1 = { 0, 1, 2, 3 };        // Инициализация вектора

    vector<int> vec2 = { 1, 2, 3, 4 }; // Объявление с инициализацией

    // Создает вектор из 5 элементов, каждый равен 0
    {
        vector<int> vec3(5, 0); // Вектор, длины 5, заполненный нулями
    }

    // Блок 2: двумерный вектор (матрица 3x3)
    // Вектор векторов — каждый внутренний вектор — строка матрицы
    {
        vector<vector<int>> matrix = {
            {1,2,3},  // 1-я строка
            {4,5,6},  // 2-я строка
            {7,8,9}   // 3-я строка
        };
    }

    vec1 = vec2;                // Глубокое копирование

    /*
    Основные операции над векторами:

    1) Добавление элементов в конец vec.push_back(число)
    2) Добавление в произвольную позицию vec.insert()
    3) Удаление последнего элемента vec.pop_back()
    4) Удаление по итератору или диапазону vec.erase()
    5) Полная очистка vec.clear()
    */

    vec1.push_back(10);         // vec1 = {1, 2, 3, 4, 10}
    vec1.pop_back();            // vec1 = {1, 2, 3, 4}
    vec2.clear();               // vec2 очищен, но vec1 не изменился

    /*
    Доступ к элементам

    1) operator[] — доступ по индексу (без проверки границ)
    2) vec.data() - получает указатель на первый элемент
    3) vec.front() - возвращает ПЕРВЫЙ элемент
    4) vec.back() - возвращает ПОСЛЕДНИЙ элемент
    */

    // Сначала выведем текущее состояние vec1
    cout << "Total vec1: ";
    for (int x : vec1) {
        cout << x << " ";
    }
    cout << endl << endl;

    // Демонстрация доступа к элементам
    cout << "=== Access to the elements ===" << endl;
    cout << "vec1[0] = " << vec1[0] << endl;              // 1
    cout << "*vec1.data() = " << *vec1.data() << endl;    // 1
    cout << "vec1.front() = " << vec1.front() << endl;    // 1 (первый!)
    cout << "vec1.back() = " << vec1.back() << endl;      // 4 (последний!)
    cout << endl;

    // Заполнение вектора новыми значениями
    cout << "Filling vector: ";
    for (int i = 0; i < 11; ++i) {
        vec1.push_back(i);
        cout << vec1[vec1.size() - 1] << " ";  // выводим только что добавленный
    }
    cout << endl << endl;

    // Финальное состояние вектора
    cout << "Final vec1 (" << vec1.size() << " elements): ";
    for (int x : vec1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
