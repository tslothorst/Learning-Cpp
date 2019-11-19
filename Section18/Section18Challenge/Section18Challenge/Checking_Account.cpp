#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance): Account{ name, balance }, withdraw_fee( 1.5 )
{
}

Checking_Account::~Checking_Account()
{
}

void Checking_Account::print(std::ostream& os) const
{
	os.precision(2);
	os << std::fixed;
	os << "[Checking_Account: " << name << ": " << balance << ", " << withdraw_fee << "]";
}

bool Checking_Account::withdraw(double amount)
{
	if (balance - amount >= 0) {
		balance -= withdraw_fee;
		balance -= amount;
		return true;
	}
	else
		return false;
}

bool Checking_Account::deposit(double amount)
{
	if (amount < 0)
		return false;
	else {
		balance += amount;
		return true;
	}
}

double Checking_Account::get_balance() const
{
	return balance;
}
