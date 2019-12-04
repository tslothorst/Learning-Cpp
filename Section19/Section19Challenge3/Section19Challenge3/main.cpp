#include "main.h"
#include<iostream>
#include<fstream>
#include<string>

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
	int PartialMatch{ 0 };
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

		if (CurrentWord != Keyword) 
		{
			std::string temp{};

			for (size_t i = 0; i < CurrentWord.length(); i++)
			{
				temp = CurrentWord.substr(i, Keyword.length());

				if (temp == Keyword) 
				{
					++PartialMatch;
				}

			}
		}

		++TotalWordsSearched;

	}

	std::cout << TotalWordsSearched << " of words searched, " << WordCount+PartialMatch << " matches found.\n";
	std::cout << WordCount << " full matches " << PartialMatch << " partial (substring) matches found.\n";

	return 0;
}
