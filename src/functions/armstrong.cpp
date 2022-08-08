#include <iostream>
#include <math.h>

using namespace std;

// find if armstrong
bool armstrong(int n) {
    int theNumber = n;
    // get the number of digits in the number
    int numOfDigits = trunc(log10(theNumber)) + 1;
    // used to store the running sum of the individual
    int runningSum = 0;
    
    for (int i = 0; i < numOfDigits; i++) {
        runningSum = runningSum + pow(theNumber % 10, 3);
        theNumber = theNumber / 10;
    }
    return (runningSum == n ? true : false);
}

int main()
{   
    int userNumber = 0;
    cout << "Enter a number! ";
    cin >> userNumber;
    if (armstrong(userNumber)) {
        cout << "TRUE" << "\n";
    } else {
        cout << "FALSE" << "\n";
    }
    return 0;
}