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

	// Accounts
	std::vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{ "Larry" });
	accounts.push_back(Account{ "Moe", 2000 });
	accounts.push_back(Account{ "Curly", 5000 });

	(*utility).display(accounts);
	(*utility).deposit(accounts, 1000);
	(*utility).withdraw(accounts, 2000);

	// Savings 

	std::vector<Savings_Account> sav_accounts;
	sav_accounts.push_back(Savings_Account{});
	sav_accounts.push_back(Savings_Account{ "Superman" });
	sav_accounts.push_back(Savings_Account{ "Batman", 2000 });
	sav_accounts.push_back(Savings_Account{ "Wonderwoman", 5000, 5.0 });

	(*utility).display(sav_accounts);
	(*utility).deposit(sav_accounts, 1000);
	(*utility).withdraw(sav_accounts, 2000);

	// Checking accounts

	std::vector<Checking_Account> check_accounts;
	check_accounts.push_back(Checking_Account{});
	check_accounts.push_back(Checking_Account{ "Tony" });
	check_accounts.push_back(Checking_Account{ "Steve", 2000 });
	check_accounts.push_back(Checking_Account{ "Carol", 5000 });

	(*utility).display(check_accounts);
	(*utility).deposit(check_accounts, 1000);
	(*utility).withdraw(check_accounts, 2000);
	(*utility).display(check_accounts);

	// Trust accounts
	std::vector<Trust_Account> trust_accounts;
	trust_accounts.push_back(Trust_Account{});
	trust_accounts.push_back(Trust_Account{ "Mike" });
	trust_accounts.push_back(Trust_Account{ "Joel", 2000 });
	trust_accounts.push_back(Trust_Account{ "Crow", 5000 });
	trust_accounts.push_back(Trust_Account{ "Servo", 10000 });

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

	delete utility;


	return 0;
}
