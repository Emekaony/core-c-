#include <iostream>
#include <string>

using namespace std;

int main() {

    // assign integer value
    int var1 = 99;

    // declare float variable
    float var2 = 10.5f;

    cout << "Var1 before casting to float " << var1 << "\n";

    // cast var1 to float
    var1 = static_cast<float>(var1);
    cout << "var1 after casting to float " << var1 << "\n";

    return 0;
}