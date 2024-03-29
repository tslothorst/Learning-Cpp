#include "Account.h"
#include <string>

Account::Account(std::string name, double balance): name(name),balance(balance)
{
	if (balance < 0.0)
		throw IllegalBalanceException();
}

Account::~Account() 
{
}

bool Account::deposit(double amount) {
	if (amount < 0)
		return false;
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	else
		throw InsufficentFundsException();
}

double Account::get_balance() const {
	return balance;
}

