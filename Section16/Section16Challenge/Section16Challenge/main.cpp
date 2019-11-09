#include "main.h"
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

//using namespace std;

int main() 
{
	std::cout.precision(2);
	std::cout << std::fixed;
	Account_Util *utility = new Account_Util();

	Savings_Account Kirk;
	std::cout << Kirk << "\n";

	Trust_Account Spock{ "Spock", 5000, 3 };
	std::cout << Spock << "\n";

	Checking_Account McCoy{ "McCoy", 2500 };
	std::cout << McCoy << "\n";

	// Savings 

	Account* a1 = new Savings_Account{};
	Account* a2 = new Savings_Account{ "Superman" };
	Account* a3 = new Savings_Account{ "Batman", 2000 };
	Account* a4 = new Savings_Account{ "Wonderwoman", 5000, 5.0 };

	std::vector<Account*> sav_accounts;
	sav_accounts.push_back(a1);
	sav_accounts.push_back(a2);
	sav_accounts.push_back(a3);
	sav_accounts.push_back(a4);

	(*utility).display(sav_accounts);
	(*utility).deposit(sav_accounts, 1000);
	(*utility).withdraw(sav_accounts, 2000);

	// Checking accounts

	Account* a5 = new Checking_Account{};
	Account* a6 = new Checking_Account{ "Tony" };
	Account* a7 = new Checking_Account{ "Steve", 2000 };
	Account* a8 = new Checking_Account{ "Carol", 5000 };

	std::vector<Account*> check_accounts;
	check_accounts.push_back(a5);
	check_accounts.push_back(a6);
	check_accounts.push_back(a7);
	check_accounts.push_back(a8);

	(*utility).display(check_accounts);
	(*utility).deposit(check_accounts, 1000);
	(*utility).withdraw(check_accounts, 2000);
	(*utility).display(check_accounts);

	// Trust accounts

	Account* a9 = new Trust_Account{};
	Account* a10 = new Trust_Account{ "Mike" };
	Account* a11 = new Trust_Account{ "Joel", 2000 };
	Account* a12 = new Trust_Account{ "Crow", 5000, 5.0 };
	Account* a13 = new Trust_Account{ "Servo", 10000, 10.0 };

	std::vector<Account*> trust_accounts;
	trust_accounts.push_back(a9);
	trust_accounts.push_back(a10);
	trust_accounts.push_back(a11);
	trust_accounts.push_back(a12);
	trust_accounts.push_back(a13);

	(*utility).display(trust_accounts);
	(*utility).deposit(trust_accounts, 5000);
	(*utility).withdraw(trust_accounts, 2000);
	(*utility).display(trust_accounts);
	for (size_t i = 0; i < 5; i++)
	{
		(*utility).withdraw(trust_accounts, 25);
		if (i > 3)
			std::cout << "This should fail...";
	}

	// Clean up
	delete a1;
	delete a2;
	delete a3;
	delete a4;
	delete a5;
	delete a6;
	delete a7;
	delete a8;
	delete a9;
	delete a10;
	delete a11;
	delete a12;
	delete a13;
	delete utility;

	return 0;
}
