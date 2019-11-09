#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account{ name, balance }, int_rate{ int_rate }
{
}

Trust_Account::~Trust_Account()
{
}

void Trust_Account::print(std::ostream& os) const
{
	os.precision(2);
	os << std::fixed;
	os << "[Trust_Account: " << name << ": " << balance << ", " << int_rate << "]";
}

bool Trust_Account::deposit(double amount)
{
	if (amount >= 5000.00)
		amount += 50.00;
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
	
	if (NumberWithdraws < 4 && amount < (balance*0.2)) 
	{
		++NumberWithdraws;
		if (balance - amount >= 0) {
			balance -= amount;
			return true;
		}
		else
			return false;
	}
	if(NumberWithdraws > 3 || amount > (balance*0.2))
		return false;
}

double Trust_Account::get_balance() const
{
	return balance;
}