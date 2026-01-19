#include <iostream>

using namespace std;

int SUM(int* arr, int* len);


int main() {
	
	int z[] = { 1,2,3,4,5,6,7 };
	cout << SUM(z , z + sizeof(z) / sizeof(int));
}


int SUM(int* arr, int* len) {
	if (arr == len) return 0;
	else return *arr + SUM(arr + 1, len);
}

