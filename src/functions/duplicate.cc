#include <iostream>
using namespace std;

// we have passed by reference instead of by value
void duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c += 2;
}

string concatenate(string a, string b) {
    return a + b;
}

// to avoid the overhead of creating copies with a and b
// use references instead:

string concatenate(string& a, string& b) {
    return a + b;
}

// the above solution to creating copies is good. But on the flip side, 
// functions defined with ampersands are perceived as passing by reference.
// so to make sure that your function does not alter the values of the 
// parameters passed into it, we use the const keyword before the type_specifier as so:

string concatenate(const string& a, const string& b) {
    return a + b;
}

int main() {
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x = " << x << ", y = " << y << " and z = " << z << "\n";

    return 0;
}