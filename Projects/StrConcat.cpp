#include <iostream>

using namespace std;

char *concat(const char *s1, const char *s2);
unsigned int len(const char *p);

int main() {
	char s1[] = "Hello ";
	char s2[] = "world!";

	char *s3 = concat(s1, s2); // Новая строка
	cout << s3; // Вывод до нуль-символа

	delete[] s3;
	return 0;
}

char *concat(const char *s1, const char *s2) {
	unsigned int size1 = len(s1);
	unsigned int size2 = len(s2);

	char *new_str = new char[size1 + size2 + 1]; // Новая область памяти(+1 для нуль-символа)

	for (unsigned int i = 0; i != size1; ++i) {
		*(new_str + i) = s1[i]; // Вставляем первую строку
	}
	
	for (unsigned int i = size1, temp=0; i != size1 + size2; ++i, ++temp) {
		*(new_str + i) = s2[temp]; // Вставляем вторую строку
	}

	*(new_str + size1 + size2) = '\0'; // Добавляем нуль-символ
	return new_str;

}


unsigned int len(const char *p) {
	unsigned int length = 0;

	while (*(p + length)) length++;

	return length;
}
