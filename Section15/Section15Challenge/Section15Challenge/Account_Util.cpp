#include "Account_Util.h"
#include <iostream>

Account_Util::Account_Util() 
{
}

Account_Util::~Account_Util() 
{
}

// Displays Account objects in a  vector of Account objects 
void Account_Util::display(const std::vector<Account>& accounts) {
	std::cout << "\n=== Accounts ==========================================" << std::endl;
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void Account_Util::deposit(std::vector<Account>& accounts, double amount) {
	std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
	}
}

// Withdraw amount from each Account object in the vector
void Account_Util::withdraw(std::vector<Account>& accounts, double amount) {
	std::cout << "\n=== Withdrawing from Accounts ==============================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
	}
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void Account_Util::display(const std::vector<Savings_Account>& accounts) {
	std::cout << "\n=== Savings Accounts ====================================" << std::endl;
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void Account_Util::deposit(std::vector<Savings_Account>& accounts, double amount) {
	std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
	}
}

// Withdraw supplied amount from each Savings Account object in the vector
void Account_Util::withdraw(std::vector<Savings_Account>& accounts, double amount) {
	std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
	}
}

// Helper functions for Checking Account class

// Displays Savings Account objects in a  vector of Checkings Account objects 
void Account_Util::display(const std::vector<Checking_Account>& accounts) {
	std::cout << "\n=== Savings Accounts ====================================" << std::endl;
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

// Deposits supplied amount to each Checkings Account object in the vector
void Account_Util::deposit(std::vector<Checking_Account>& accounts, double amount) {
	std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
	}
}

// Withdraw supplied amount from each Checkings Account object in the vector
void Account_Util::withdraw(std::vector<Checking_Account>& accounts, double amount) {
	std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
	}
}