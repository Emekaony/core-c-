#include <iostream>
using namespace std;

// define the first add function which takes in integers
void add(int a, int b) {
    cout << a + b << "\n";
}

// define the second add functino which takes floats
void add(float a, float b) {
    cout << a + b << "\n";
}

void add(string a, string b) {
    cout << a << " " << b << "\n";
}

int main() {
    // use the one with integers
    add(9, 3);
    
    // use the one with floats
    add(3.2f, 9.32f);

    // use the one with strings
    add("Nnaemeka", "Onyeokoro");
    
    return 0;
}

/* 
    when using function overloads, make sure to specify the type when calling the funciton
    This will result in an error when the compiler does not know which overload to use

    I defined add with integers, and another with floats. But if I call it with 3.2 it will
    give me an error because 3.2 can be converted to an int but kinda is a float too
    so be specific with your types. I love c++ because it is making me better at coding.

    You can also overload a function with multiple number of arguments
*/