#include <iostream>

using namespace std;

int len(const char *p);
int main() {
	char name[] = "Ivan";
	cout << len(name);
}

int len(const char *p) {
	int length = 0;
	while (*(p+length)) {
		length++;
	}
	return length;
}
