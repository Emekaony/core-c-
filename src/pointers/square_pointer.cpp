#include <iostream>
#include <stdlib.h>

void square(int* num) {
    // set temp to the value at the num address in memory
    int temp = *num;
    // square temp
    temp = temp * temp;
    // then change the value of this number in memory
    *num = temp;
}

int main() {

    int number = 99;
    printf("Before squaring, number is %d\n", number);
    square(&number);

    printf("After squaring, number is %d\n", number);

    return 0;
}