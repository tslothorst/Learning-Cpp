#include "main.h"
#include<iostream>
using namespace std;
int main() 
{
	int sum{};
	for (int i = 0; i <= 15; ++i)
	{
		if (i % 2 > 0)
		{
			cout << i << endl;
			sum += i;
		}

	}
	cout << "sum is: " << sum << endl;
	return 0;
}
