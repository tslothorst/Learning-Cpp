#pragma once
#include<exception>

class InsufficentFundsException : public std::exception
{
	InsufficentFundsException() noexcept = default;
	~InsufficentFundsException() = default;
	virtual const char* what() const noexcept;
};

