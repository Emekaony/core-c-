#include <iostream>
#include <string.h>

int main() {
    std::string name = "Nnaemeka";
    int age = 21;

    // go thru to my age and print out all the even numbers
    // fun stuff

    for ( int i = 0; i < age; i++) {
        if (i % 2 == 0) {
            std::cout << i << " " << std::endl;
        }
    }

    return 0;
}