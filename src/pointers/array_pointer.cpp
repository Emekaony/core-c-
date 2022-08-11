#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    
    // access an array normally
    int a[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", a[i]);
    // }
    
    // doing it with pointers
    /*
        When we set a pointer to an array, we are setting it to the location 
        of the first element in the array. Since it is contiguous in memory,
        to access the rest of the elements, all we do is increment by i, the index.
        
        When we define an array, what we get is actually a pointer to the first 
        element in that array. When we do arr[i], under the hood c/c++ takes care
        of memory stuff for us I believe.
    */
    int* ptr = a;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr +i));
    }
    
    return 0;
}