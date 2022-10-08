#include <iostream>
using namespace std;

// used inline for compiler optomization
// learned about optional parameters
inline int divide(int a, int b = 2) {
    int r = a / b;
     return r;
}

int main() {
    cout << divide(12, 4) << "\n";
    cout << divide(24) << "\n";

    return 0;
}