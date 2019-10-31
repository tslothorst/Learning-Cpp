#pragma once
#include <istream>
class Mystring
{
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& in, Mystring& rhs);

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
	Mystring operator-() const;				// Returns lowercase object
	bool operator==(const Mystring& rhs);			// Comparison
	bool operator!=(const Mystring& rhs);
	bool operator<(const Mystring& rhs);			// Smaller then comparison on Mystring objects (number of chars)
	bool operator>(const Mystring& rhs);			// Larger then comparison on Mystring objects (number of chars)
	Mystring operator+(const Mystring& rhs) const;		// Concatenation

	void display() const;

	int get_length() const;                               // getters
	const char* get_str() const;
};

