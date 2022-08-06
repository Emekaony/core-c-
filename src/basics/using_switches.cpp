#include <iostream>

int main() {
	// in switch, we cannot use range of values

	// write code to print the day that the user entered based
	// on the number that they put in

	int num;
	std::cout << "Enter a number from 1 to 7 ";

	// get the number from standard input
	std::cin >> num;

	switch (num) {
		case 1: 
			std::cout << "Monday" << "\n";
			break;
		case 2: 
			std::cout << "Tuesday" << "\n";
			break;
		case 3:
			std::cout << "Wednesday" << "\n";
			break;
		case 4:
			std::cout << "Thursday" << "\n";
			break;
		case 5:
			std::cout << "Friday" << "\n";
			break;
		case 6:
			std::cout << "Saturday" << "\n";
			break;
		case 7:
			std::cout << "Sunday" << "\n";
			break;
		default:
			std::cout << "Invalid input" << "\n";
			break;
	}
	return 0;
}