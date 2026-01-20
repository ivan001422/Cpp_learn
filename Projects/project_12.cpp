#include <iostream>

using namespace std;

int farm(int x, int y);


// Divide and conquer

int main() {
	cout << farm(1680, 640);
}

int farm(int x, int y) {
	int ost = y % x; // Ширина оставшейся части
	if (ost == 0) return x;
	return farm(ost, x);

}
