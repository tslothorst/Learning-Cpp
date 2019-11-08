#pragma once
#include "Account.h"
#include <string>
class Checking_Account :
	public Account
{
	friend std::ostream& operator<<(std::ostream& os, const Checking_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Checking Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_fee = 1.5;
	double withdraw_fee;
public:
	Checking_Account(std::string name = def_name, double balance = def_balance);
	virtual ~Checking_Account();
	virtual bool withdraw(double amount) override;
	virtual bool deposit(double amount) override;
	virtual double get_balance() const override;
};

