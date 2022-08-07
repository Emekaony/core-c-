#include <iostream>

using namespace std;

int main() {
    // while loops are pretty self-explanatory
    // you want the code to run while somehting is true

    int sum = 0, i = 1;
    while (i < 11) {
        sum += i;
        i++;
    }
    cout << "The sum of the first 10 natural numbers is " << sum << "\n";

    return 0;
}