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

	void set_title(std::string title)
	{
		movieTitle = title;
	}

	void set_rating(std::string rating)
	{
		if (rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R")
			movieRating = rating;

	}

	void increment_timeswatch(int watched)
	{
		movieTimesWatched++;
	}

	std::string get_title()
	{
		return movieTitle;
	}

	std::string get_rating()
	{
		return movieRating;
	}

	int get_timeswatched() 
	{
		return movieTimesWatched;
	}


};

