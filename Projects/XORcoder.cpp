#include <iostream>

using namespace std;

unsigned char *CRandDR(unsigned char *pointer, unsigned char mask, size_t length);
void print(const unsigned char *pointer, size_t length);
size_t len(const unsigned char *pointer);

int main() {
    unsigned char message[] = "Hello world";
    unsigned char bitwise_mask = 200;
    size_t length = len(message);

    cout << "Encrypted: ";
    print(CRandDR(message, bitwise_mask, length), length);

    cout << "\nDecrypted: ";
    print(CRandDR(message, bitwise_mask, length), length);

    return 0;
}

unsigned char *CRandDR(unsigned char *pointer, unsigned char mask, size_t length) {
    for (size_t i = 0; i != length; ++i) {
        pointer[i] ^= mask;
    }
    return pointer;
}

void print(const unsigned char *pointer, size_t length) {
    for (size_t i = 0; i != length; ++i) {
        cout << pointer[i];
    }
}

size_t len(const unsigned char *pointer) {
    size_t cnt = 0;
    while (pointer[cnt]) {
        ++cnt;
    }
    return cnt;
}
