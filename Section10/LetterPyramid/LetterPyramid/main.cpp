#include "main.h"
#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string userInput;
	cout << "Welcome to the word pyramid!" << endl;
	cout << "Enter some characters: ";
	getline(cin,userInput);

	for (size_t i = 0; i <= userInput.size(); i++)
	{
		string output{};

		// Generate the first substring which starts at position 0 and moves with every increment of i.
		output = userInput.substr(0, i);

		if (i > 1)
		{
			// Create new string from a substring from the output substring minus one char
			string inputReverse = output.substr(0,i-1);
			// Reverse this string
			reverse(inputReverse.begin(), inputReverse.end());
			// Append reversed string to the original output substring
			output += inputReverse;
		}
		// Create the filler space to draw the pyramid. Insert starting at position 0 a number of spaces which is equal to input length minus the value of i
		// This way the number of spaces will keep decreasing.		
		output.insert(output.begin(), userInput.length() - i, ' ');
		cout << output << endl;
	}
	return 0;
}
