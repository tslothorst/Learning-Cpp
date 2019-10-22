#pragma once
#include<string>
class movie
{
private:
	std::string movieTitle;
	std::string movieRating;
	int movieTimesWatched;
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
	std::string get_title() const;
	std::string get_rating();
	int get_timeswatched();	
};

