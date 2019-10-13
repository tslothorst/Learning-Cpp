#include "main.h"
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void print_menu();
void add_number(vector<int> &userNumbers);
void display_list(const vector<int> &userNumbers);
double get_avgnum(const vector<int> &userNumbers);
int get_smallnum(const vector<int> &userNumbers);
int get_largenum(const vector<int> &userNumbers);

int main()
{
	vector<int> userNumbers{};
	while (true)
	{
		char choice{};
		print_menu();
		cin >> choice;

		if (tolower(choice) == 'q')
		{
			cout << "Goodbye\n";
			break;
		}
		if (towlower(choice) == 'a')
		{
			add_number(userNumbers);
		}
		if (tolower(choice) == 'p')
		{
			display_list(userNumbers);
		}
		if (tolower(choice) == 'm')
		{
			cout << "Average of the elements in the list is: " << get_avgnum(userNumbers) << endl;
		}
		if (tolower(choice) == 's')
		{
			cout << "The smallest number in the list is: " << get_smallnum(userNumbers) << endl;
		}
		if (tolower(choice) == 'l')
		{
			cout << "The largest number in the list is: " << get_largenum(userNumbers) << endl;
		}
	}
	return 0;
}

void print_menu()
{	
	cout << "\nPlease make a choice from these options" << endl;
	cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\n";
	cout << "Input: ";	
}

void add_number(vector<int> &userNumbers) 
{
	int userNum{};
	cout << "Please enter an integer: ";
	cin >> userNum;
	userNumbers.push_back(userNum);
	cout << userNum << " added to list!" << endl;
}

void display_list(const vector<int> &userNumbers) 
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

double get_avgnum(const vector<int> &userNumbers) 
{
	double buffer{};
	double avgNum{};
	for (size_t i = 0; i < userNumbers.size(); i++)
	{
		buffer += userNumbers[i];
		avgNum = buffer / userNumbers.size();
	}
	return avgNum;
}

int get_smallnum(const vector<int> &userNumbers) 
{
	auto result = min_element(userNumbers.begin(), userNumbers.end());
	int smallpos = distance(userNumbers.begin(), result);
	int smallnum = userNumbers.at(smallpos);
	return smallnum;
}

int get_largenum(const vector<int> &userNumbers) 
{
	auto result = max_element(userNumbers.begin(), userNumbers.end());
	int largepos = distance(userNumbers.begin(), result);
	int largenum = userNumbers.at(largepos);
	return largenum;
}


