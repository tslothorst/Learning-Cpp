#pragma once
#include "Account.h"
#include <string>
class Checking_Account :
	public Account
{
private:
	static constexpr const char* def_name = "Unnamed Checking Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_fee = 1.5;
	double withdraw_fee;
public:
	Checking_Account(std::string name = def_name, double balance = def_balance);
	bool withdraw(double amount);
};

