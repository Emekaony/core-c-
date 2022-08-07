#include <iostream>
using namespace std;

int main() {

    int arr[5] = {0};
    int minIndex = 0;

    // ask the user for 5 elements
    for (int i = 0; i < 5; i++) {
        cout << "Enter the " << i << "th number ";
        cin >> arr[i];
    }

    // calculate the min element
    int min = arr[0];
    for (int j = 1; j < 5; j++) {
        if (arr[j] < min) {
            min = arr[j];
            minIndex = j;
        }
    }
    cout << "The min element is " << min << "\n";
    cout << "It exists in the " << minIndex << "th index of arr" << "\n";
    return 0;
}