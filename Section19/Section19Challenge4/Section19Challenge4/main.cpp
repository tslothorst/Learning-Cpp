#include "main.h"
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

int main()
{
	std::ifstream InputFile{ "romeoandjuliet.txt" };

	if(!InputFile)
	{
		std::cerr << "Error reading from input file\n";
		return 1;
	}

	std::ofstream OutputFile{ "romeoandjuliet_linenumbers.txt" };

	if(!OutputFile)
	{
		std::cerr << "Error creating output file\n";
		return 1;
	}

	while(!InputFile.eof())
	{
		int Iteration{ 1 };
		std::string Temp{};
		std::getline(InputFile, Temp);
		OutputFile << std::setw(8) << std::left << Iteration << std::left << Temp << std::endl;
	}

	return 0;
}
