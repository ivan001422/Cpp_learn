#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

double distance(double *ip);

double list[4]; // Массив точек(всего 4 точки)

int main() {
	SetConsoleOutputCP(1251);

	double* last = list + 4;

	cout << "Введите x1, x2, y1, y2" << "\n";

	for (double* ip = list;ip != last ;ip++ ) {
		cin >> *ip;
	}

	double result = distance(list);
	
	cout << "Расстояние между точками: " << result;

	return 0;
}

double distance(double *ip) {

	double dx = pow(*ip - *(ip + 1), 2);
	double dy = pow(*(ip + 2) - *(ip + 3), 2);

	double result = sqrt(dx + dy);

	return result;
}
