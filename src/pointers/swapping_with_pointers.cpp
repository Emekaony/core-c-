#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

/*
    A pointer is basically a variable that can hold the address of another variable in memory

    the ampersand operator, &, is used to get the address of variables in memory. We need a special
    type of way to hold these addressed. These special things are called pointers

    you initialize a pointer using the asterics, *
    int* ptr = &variable;

    some people like to do it like this
    int *ptr = &variable;

    both work the same way but I think the second way is more popular
*/

void notWorkingSwap(int a, int b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

// let the type be a pointer because we are expecting addresses as inputs
// pointers are used to access memory addresses!!
void swap(int* a, int* b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // int* ptr;
    // int number = 10;
    
    int* tt = nullptr;
    
    // // now this ptr holds the address of number in memory
    // ptr = &number;
    
    // printf("The memory location of number is %p\n", ptr);
    // printf("And the thing that is loated at that memory location is %d", *ptr);
    
    int a = 1, b = 2;
    int c = 9, d = 10;
    printf("Before swapping: a == %d and b == %d\n", a, b);
    // make sure to pass in the memory address using the ampersand operator!
    swap(&a, &b);
    printf("After swapping: a == %d and b == %d\n\n", a, b);
    
    printf("Before using not wokring swap: c == %d and d == %d\n", c, d);
    // this will not work because we have not changed what's in the memory location!
    notWorkingSwap(c, d);
    printf("After using not working swap: c == %d and d == %d\n", c, d);
    
    return 0;
    
}