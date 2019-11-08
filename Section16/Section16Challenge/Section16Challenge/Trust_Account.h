#pragma once
#include "Savings_Account.h"

class Trust_Account :
	public Savings_Account
{
	friend std::ostream& operator<<(std::ostream& os, const Trust_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Trust Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	int NumberWithdraws{ 0 };
protected:
	double int_rate;
public:
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	virtual ~Trust_Account();
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual double get_balance() const override;
};

