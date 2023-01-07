#include <iostream>
#include <string.h>
using std::cout;
using std::endl;
using std::string;

int *arr;

int main(int argc, char **argv) {

    const int SIZE = 100000000;
    arr = new int[SIZE];
    int i;
    string flag;

    for (i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    if (argc > 1)
        flag = argv[1];
    
    delete [] arr;

    return 0;
}