#include <iostream>

using namespace std;

void show(int x, int y = 20) {
    cout << x << " " << y << '\n';
}

int main() {

  show(5);       // 5 20 
  show(5, 99);   // 5 99

  return 0;
}
