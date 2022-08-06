#include <iostream>

int main() {
    // the string class resides in the namespace std where
    // most c++ classes and functions reside too.
    std::string name = "Nnaemeka";
    std::cout << "My name is " << name << "\n";

    // string concatenation (adding two strings)
    std::string firstName = "Nnaemeka";
    std::string lastName = "Onyeokoro";

    std::string fullName = firstName + lastName;
    std::cout << "Your full name is: " << fullName << "\n";

    // the append method is faster than concatenation with +
    std::cout << "Full name with append function: " << firstName.append(lastName) << "\n";

    // messing with string numbers
    std::string num1 = "10";
    std::string num2 = "20";
    std::string total = num1 + num2;
    std::cout << "num1 concatenated with num2 is: " << total << "\n";

    // calculate length of a string
    // size() and length() have the same complexity!
    std::string var1 = "Saliha";
    std::cout << "String length using length() function: " << var1.length() << "\n";
    std::cout << "String length using size() function: " << var1.size() << "\n";

    // getting string from commmand line
    std::string userName;
    std::string fullname_with_spaces;
    //std::cout << "Enter your name ";
    //std::cin >> userName;

    // this cin method is not able to get strings with spaces in them
    // we will solve that issue soon
    //std::cout << "The name you entered is " << userName << "\n";

    // getting strings with spaces in them:
    std::cout << "Enter your full name with spaces: ";
    std::getline(std::cin, fullname_with_spaces);
    std::cout << "Your full name with spaces is -> " << fullname_with_spaces << "\n";

    // CAVEAT: You might run unto an error using cin back to back in your code with getline()
    // so just use one of them at a time. At least that is what I understand for now

    return 0;
}