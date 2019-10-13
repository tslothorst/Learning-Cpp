#include "main.h"
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void print_menu();
void exit_program();
void add_number(vector<int> &userNumbers);
void display_list(vector<int>& userNumbers);
string display_avarage(vector<int> &userNumbers);

int main()
{
	vector<int> userNumbers{};
	while (true)
	{
		char choice{};
		cout << "\nPlease make a choice from these options" << endl;
		cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n";
		cout << "Input: ";
		cin >> choice;

		if (tolower(choice) == 'q')
		{
			cout << "Goodbye\n";
			break;
		}
		if (towlower(choice) == 'a')
		{
			int userNum{};
			cout << "Please enter an integer: ";
			cin >> userNum;
			userNumbers.push_back(userNum);
			cout << userNum << " added to list!" << endl;
		}
		if (tolower(choice) == 'p')
		{
			if (userNumbers.size() == 0)
			{
				cout << "[] - the list is empty" << endl;
			}
			for (size_t i = 0; i < userNumbers.size(); i++)
			{
				cout << userNumbers.at(i) << endl;
			}
		}
		if (tolower(choice) == 'm')
		{
			double buffer{};
			double avgNum{};
			for (size_t i = 0; i < userNumbers.size(); i++)
			{
				buffer += userNumbers[i];
				avgNum = buffer / userNumbers.size();
			}
			cout << "Average of the elements in the list is: " << avgNum << endl;
		}
		if (tolower(choice) == 's')
		{
			auto result = min_element(userNumbers.begin(), userNumbers.end());
			int smallpos = distance(userNumbers.begin(), result);
			cout << "The smallest number in the list is: " << userNumbers.at(smallpos) << endl;
		}
		if (tolower(choice) == 'l')
		{
			auto result = max_element(userNumbers.begin(), userNumbers.end());
			int largepos = distance(userNumbers.begin(), result);
			cout << "The smallest number in the list is: " << userNumbers.at(largepos) << endl;
		}
	}
	return 0;
}

void print_menu()
{
	char choice{};
	cout << "\nPlease make a choice from these options" << endl;
	cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n";
	cout << "Input: ";
	cin >> choice;
}

void exit_program() 
{
	cout << "Goodbye\n";	
}

void add_number(vector<int> &userNumbers) 
{
	int userNum{};
	cout << "Please enter an integer: ";
	cin >> userNum;
	userNumbers.push_back(userNum);
	cout << userNum << " added to list!" << endl;
}

void display_list(vector<int> &userNumbers) 
{
	if (userNumbers.size() == 0)
	{
		cout << "[] - the list is empty" << endl;
	}
	for (size_t i = 0; i < userNumbers.size(); i++)
	{
		cout << userNumbers.at(i) << endl;
	}
}

string display_avarage(vector<int> &userNumbers) 
{
	double buffer{};
	double avgNum{};
	for (size_t i = 0; i < userNumbers.size(); i++)
	{
		buffer += userNumbers[i];
		avgNum = buffer / userNumbers.size();
	}
	return string "Average of the elements in the list is: " << avgNum << endl;
}


