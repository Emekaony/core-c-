#include <iostream>

int main() {
	int x = 3;
	int y = 3;
	int post;
	int pre;

	// constants start with 'const'

	// using preincrement
	pre = ++x;
	std::cout << "Using pre increment, pre is equal to " << pre << " and x is " << x << "\n";
	
	// using post increment
	post = y++;
	std::cout << "Using post increment, post is equal to " << post << " and x is " << x << "\n";


	return 0;
}