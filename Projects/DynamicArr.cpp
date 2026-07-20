#include <iostream>

using namespace std;


int main() {
	unsigned int n;
	cout << "Enter arr length: ";
	cin >> n;

	if (n == 0) cout << "Value cant be 0";
	else {
		int *arr = new int[n];
		for (unsigned long int i = 0; i < n; ++i) {
			arr[i] = i * i;
			cout << arr[i] << ' ';
		}
		delete[] arr;
	}
}
