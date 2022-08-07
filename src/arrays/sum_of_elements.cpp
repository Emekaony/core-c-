#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 522};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "The sum is " << sum << "\n";
    return 0;
}