#include <iostream>
using namespace std;

int global = 42;

int* getGlobalPtr() {
    return &global;        // безопасно: возвращаем адрес глобальной переменной
}

int main() {
    int* p = getGlobalPtr();
    cout << *p << endl;    // 42
  
    return 0;
}
