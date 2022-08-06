#include <iostream>

// define function to check if they are equal
bool equal(std::string s1, std::string s2) {
    if (s1.size() == s2.size()) {
        return true;
    }
    
    return false;
}

int main()
{
    std::string v1;
    std::string v2;
    
    std::cout << "Enter the first string ";
    std::getline(std::cin, v1);
    
    std::cout << "Enter the second string ";
    std::getline(std::cin, v2);

    // make use of function defined in code
    std::cout << (equal(v1, v2) ? "EQUAL" : "NOT EQUAL") << "\n";
    
    return 0;
}