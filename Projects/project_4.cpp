#include <iostream>
#include <windows.h>

using namespace std;

int MIN(int a, int b);

int main() {
	int x = MIN(1, 2);
	cout << x;
}

int MIN(int a, int b) {
	if (a <= b) return a;
	return b;
}
