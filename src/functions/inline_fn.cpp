#include <iostream>
using namespace std;

// you should use inline functions to make your code faster
inline void sayHello() {
    cout << "This is an inline function. Pretty simple.";
}

int main() {
    sayHello();
    return 0;
}