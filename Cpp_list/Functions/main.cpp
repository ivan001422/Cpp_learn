#include <iostream>

using namespace std;

// Аргументы argc, argv позволяют передать argc аргументов, содержащихся в argv в виде указателей.
int main(int argc, char* argv[]) { // Argc-число аргументов, argv-массив указателей
    
    char name[] = { *argv[1] };
    int age = { *argv[2] };

    return 0;

}
