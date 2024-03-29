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

	int Iteration{ 1 };

	while(!InputFile.eof())
	{
		std::string Temp{};
		std::getline(InputFile, Temp);
		OutputFile << std::setw(8) << std::left << Iteration << std::left << Temp << std::endl;
		++Iteration;
	}

	InputFile.close();
	OutputFile.close();

	return 0;
}
