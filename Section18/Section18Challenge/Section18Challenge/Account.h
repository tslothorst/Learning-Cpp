#pragma once
#include<iostream>
#include<string>
#include "I_Printable.h"
#include "IllegalBalanceException.h"

class Account : public I_Printable
{
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
protected:
	std::string name;
	double balance;
public:
	Account(std::string name = def_name, double balance = def_balance);
	virtual ~Account();
	virtual void print(std::ostream& os) const override = 0;
	//Account(std::string name = "Unamed Account", double balance = 0.0);
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	virtual double get_balance() const = 0;
};

