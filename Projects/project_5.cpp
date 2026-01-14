#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

const int n = 5;

int MIN(int *ip);

int main() {
	int arr[n] = { 7,2,3,4,5 };
	int x = MIN(arr);
	cout << x;
}

int MIN(int *ip) {
	int* last = ip + n;
	int min = pow(2 , 31) - 1;
	for (ip; ip != last; ip++) {
		if (*ip < min) min = *ip;
	}
	return min;
}
