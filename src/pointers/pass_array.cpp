#include <iostream>
#include <stdlib.h>

void printArray(int* ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", *ptr++);
    }
}

int main() {
    // size of array must be constant
    const int n = 5;
    int arr[n] = {33, 54, 12, 34, 98};
    // we could have also done printArray(&arr[0], n);
    // this is because a pointer to an array just points to the
    // memory locatio of the first element in the array!!
    printArray(arr, n);

    return 0;
}