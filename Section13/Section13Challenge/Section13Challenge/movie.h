#pragma once
#include<string>
class movie
{
public:
	//Constructor
	movie(std::string title, std::string rating, int watched);

	//Copy constructor
	movie(const movie &source);

	//Destructor
	~movie();

	// Method prototypes
	void set_title(std::string title);	
	void set_rating(std::string rating);
	void increment_timeswatch();
	void display() const;
	std::string get_title();
	std::string get_rating();
	int get_timeswatched();	
};

