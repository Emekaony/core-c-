#include <iostream>

std::string checker(int mark) {
	if (mark >= 80) {
		return "A";
	} else if (mark >= 60 && mark < 80) {
		return "B";
	} else if (mark < 60 && mark >= 0 ) {
		return "F";
	} else { return "Invalid input";}
}

int main() {
	int mark = -22;

	std::cout << "Your grade is - " << checker(mark) << "\n";

	return 0;
}