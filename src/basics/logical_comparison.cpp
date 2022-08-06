#include <iostream>

int main() {
	int x = 10;

	if (x < 29 && x >= 8) {
		std::cout << "Logial operator works well" << "\n";
	}

	if (x > 2 || x < 9) {
		std::cout << "This OR also works" << "\n";
	}

	if (!(x > 11)) {
		std::cout << "This should also print because x is not greater than 11" << "\n";
	}

	return 0;
}