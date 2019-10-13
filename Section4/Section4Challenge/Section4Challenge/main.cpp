#include "main.h"
#include <iostream>

int main() {
	int favorite_number;
	std::cout << "Enter your favorite number between 1 and 100:";

	std::cin >> favorite_number;

	std::cout << "Amazing! That my favorite number too!" << std::endl;
	std::cout << "No really! "; std::cout << favorite_number; std::cout<< " is my favorite number too!" << std::endl;
	return 0;
}
