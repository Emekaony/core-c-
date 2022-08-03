#include <iostream>
#include <stdlib.h>


int main() {
    std::string name;

    // get the name from the stdin
    std::cout << "Enter your name please ";

    // will eventually check if their name is empty 
    // or contains invalid characters or that type stuff
    // how about multiple lines?
    std::cin >> name;

    std::cout << "You entered " << name << " as your name" << "\n";
    std::cout << "Congratulations!!" << "\n";

    return 0;
}