#include "main.h"
#include<iostream>
#include<fstream>

int main() 
{
	std::ifstream SourceText{ "romeoandjuliet.txt" };
	if (!SourceText) 
	{
		std::cerr << "Error reading from file \n";
	}

	std::string Keyword{};
	std::cout << "Enter word to search for: ";
	std::cin >> Keyword;

	return 0;
}
