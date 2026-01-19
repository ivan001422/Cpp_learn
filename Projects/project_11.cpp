#include <iostream>

using namespace std;

int SUM(int x);


int main() {
	
	cout << SUM(14560);
	
}


int SUM(int x) {
	if (x - 10 < 0) return x;
	else return SUM(x % 10) + SUM(x / 10);
}


