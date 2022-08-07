#include <iostream>
using namespace std;

int main() {
    // do while runs the code once before checking to see if 
    // the argument is true. For example

    int j = 9;
    do {
        cout << "This should not print but it will" << "\n";
    } while (j>10);

    // find the sum of the first 10 natural numbers
    int sum = 0, i = 1;
    do {
        sum += i;
        i++;
    } while (i<11);
    
    cout << "The sum of the first 10 Natural Numbers is " << sum << "\n";
    return 0;
}