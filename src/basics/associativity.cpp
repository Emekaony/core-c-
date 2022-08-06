#include <iostream>



int main() {
	int v1 = 10, v2 = 34, v3 = 2;
	float total;

	// this is associativity working because * and / have the same precedence
	// so then it goes from left to right
	total = v2 / v3 * v1;

	std::cout << total << std::endl;

	return 0;
}