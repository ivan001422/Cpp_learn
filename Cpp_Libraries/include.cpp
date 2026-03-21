#include <iostream>

using namespace std;


int main() {
	char x[20];
	cin.getline(x, 20); // Чтение строки (удаляет \n)
	for (char * i = x; *i; ++i) cout << *i;
}


