#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance): Account{ name, balance }, withdraw_fee( 1.5 )
{
}

bool Checking_Account::withdraw(double amount)
{
	if (balance - amount >= 0)
		balance -= withdraw_fee;
	return Account::withdraw(amount);	
}

std::ostream& operator<<(std::ostream& os, const Checking_Account& account) 
{
	os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.withdraw_fee;
	return os;
}
