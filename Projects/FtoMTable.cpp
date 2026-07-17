#include <iostream>

using namespace std;

double f(double a);

int main() {
	int start, end;
	bool Flag = true;
	cout << "Enter diapason start-end: ";
	while (Flag) {
		cin >> start >> end;
		if (start >= end) {
			cout << "Enter correct numbers\n";
			continue;
		}
		Flag = false;
	}

	for (start; start <= end; ++start) {
		if ( !(start % 10)) cout << '\n';
		cout << "In " << start << " feet " << f(start) << " meters\n";
	}
}

double f(double a) {
	return a / 3.28;
}
