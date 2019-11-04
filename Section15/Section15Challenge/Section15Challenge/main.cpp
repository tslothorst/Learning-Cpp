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

	delete utility;


	return 0;
}
