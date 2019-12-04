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
	int TotalWordsSearched{ 0 };
	int WordCount{ 0 };
	std::cout << "Enter word to search for: ";
	std::cin >> Keyword;

	while (!SourceText.eof()) 
	{
		std::string CurrentWord{};
		SourceText >> CurrentWord;

		if (CurrentWord == Keyword) 
		{
			++WordCount;
		}



		++TotalWordsSearched;

	}

	std::cout << TotalWordsSearched << " of words searched, " << WordCount << " matches found.\n";

	return 0;
}
