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
	}
	


	return 0;
}