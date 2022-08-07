#include <iostream>
#include <array>
using namespace std;

int main() {
    // initialize the array
    string name[3] = {"Emeka", "Kamsi", "Chelsea"};
    array<int, 5> myNumbers;

    // get the size
    int arrSize = sizeof(name) / sizeof(name[0]);

    // loop through the array
    for (int i = 0; i < arrSize; i++) {
        cout << name[i] << "\n";
    }

    for (string elem : name) {
        cout << elem << "\n";
    }

    return 0;
}