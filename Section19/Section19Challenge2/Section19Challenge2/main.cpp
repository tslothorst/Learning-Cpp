#include "main.h"
#include<iostream>
#include<iomanip>
#include<fstream>

int main() 
{
	std::ifstream respons_file{ "responses.txt" };
	if (!respons_file) 
	{
		std::cerr << "Error reading from file \n";
		return 1;
	}

	std::cout << std::setw(15) << std::left << "Student Name" << std::setw(5) << std::right << "Score" << std::endl;

	std::string AnswerKey{};
	respons_file >> AnswerKey;
	while (!respons_file.eof()) 
	{
		std::string StudentName{};
		std::string StudentAnswers{};
		int score{ 0 };
		respons_file >> StudentName;
		respons_file >> StudentAnswers;

		for (size_t i = 0; i < StudentAnswers.length(); i++)
		{
			if (StudentAnswers[i] == AnswerKey[i]) 
			{
				++score;
			}
		}

		std::cout << std::setw(15) << std::left << StudentName << std::setw(5) << std::right <<score << std::endl;

	}
	return 0;
}