#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

double distance(double x, double y, double xc, double yc);

bool IsPointInCircle(double x, double y, double xc, double yc, double r);

int main() {
	cout << IsPointInCircle(0.5, 0.5, 1, 1, 0.1);
}

double distance(double x, double y, double xc, double yc) {

	double dx = pow(x - xc, 2);
	double dy = pow(y - yc, 2);

	double result = sqrt(dx + dy);

	return result;
}

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
	double point_distance = distance(x, y, xc, yc);

	return point_distance < r;
}
