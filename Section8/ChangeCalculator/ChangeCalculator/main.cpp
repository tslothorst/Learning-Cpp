#include "main.h"
#include<iostream>

using namespace std;

int main() 
{
	int amount{};
	const int two_euro{ 200 };
	const int one_euro{ 100 };
	const int fiftycent_euro{50};
	const int twentycent_euro{ 20 };
	const int tencent_euro{ 10 };
	const int fivecent_euro{ 5 };
	const int onecent_euro{ 1 };

	cout << "Welcome to the change calculator" << endl;
	cout << "Enter an amount in cents: ";
	cin >> amount;

	int remainder{};

	if (amount<0)
	{
		cout << "Bruh" << endl;
	}

	if (amount >= 0)
	{
		cout << "Your change is: " << endl;
		cout << "2 euro coins: " << amount / two_euro << endl;
		remainder = amount % two_euro;
		cout << "1 euro coins: " << remainder / one_euro << endl;
		remainder %= one_euro;
		cout << "50 cent coins: " << remainder / fiftycent_euro << endl;
		remainder %= fiftycent_euro;
		cout << "20 cent coins: " << remainder / twentycent_euro << endl;
		remainder %= twentycent_euro;
		cout << "10 cent coins: " << remainder / tencent_euro << endl;
		remainder %= tencent_euro;
		cout << "5 cent coins: " << remainder / fivecent_euro << endl;
		remainder %= fivecent_euro;
		cout << "1 cent coints: " << remainder / onecent_euro << endl;
	}
	return 0;
}
