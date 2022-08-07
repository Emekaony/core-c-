#include <iostream>

int main() {
    int x = 0, y = 0;
    for (x = 0; x < 5; x++) {
        // did it a little differenctly from how he solved it
        for (y = 0; y < 5 - x ; y++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}