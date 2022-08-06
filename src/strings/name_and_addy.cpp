#include <iostream>

// try to avoid the henious act of 'using namespace std;'
// only use std namespace when solving algorithms where time is important

int main() {

    std::string fullname;
    std::string address;

    std::cout << "What is your full name? ";
    std::getline(std::cin, fullname);

    std::cout << "What is your address? ";
    std::getline(std::cin, address);

    std::cout << "\n";

    std::cout << "Your full name is " << fullname << "\n";
    std::cout << "And your address is " << address << "\n";

    return 0;
}