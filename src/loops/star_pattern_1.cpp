#include <iostream>

int main() {
    int x = 0, y = 0;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < x + 1; y++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}