#pragma once
#include <istream>
class Mystring
{
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& in, Mystring& rhs);

	friend Mystring operator-(const Mystring& obj);                                        // make lowercase
	friend Mystring operator+(const Mystring& lhs, const Mystring& rhs);       // concatenate
	friend bool operator==(const Mystring& lhs, const Mystring& rhs);           // equals
	friend bool operator!=(const Mystring& lhs, const Mystring& rhs);           // not equals
	friend bool operator<(const Mystring& lhs, const Mystring& rhs);            // less than
	friend bool operator>(const Mystring& lhs, const Mystring& rhs);            // greater than

private:
	char* str;      // pointer to a char[] that holds a C-style string
public:
	Mystring();                                          // No-args constructor
	Mystring(const char* s);                             // Overloaded constructor
	Mystring(const Mystring& source);                    // Copy constructor
	Mystring(Mystring&& source);                         // Move constructor
	~Mystring();                                         // Destructor

	Mystring& operator=(const Mystring& rhs);     // Copy assignment
	Mystring& operator=(Mystring&& rhs);           // Move assignment

	void display() const;

	int get_length() const;                               // getters
	const char* get_str() const;
};

