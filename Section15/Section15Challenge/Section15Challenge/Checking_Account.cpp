#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance): withdraw_fee( 1.5 )
{
}

bool Checking_Account::withdraw(double amount)
{
	balance -= withdraw_fee;
	return Account::withdraw(amount);	
}
