#include <iostream>

int main() {
	// create the variable
	int age;
	std::string name;

	// ask them for their age
	std::cout << "Enter age ";
	std::cin >> age;

	// get their name too 
	std::cout << "Enter your name ";
	// cin does not work well with spaces, need to find a better alternative
	std::cin >> name;

	std::cout << "Your name is " << name << " and you are " << age << " years old" << "\n";

	return 0;
}