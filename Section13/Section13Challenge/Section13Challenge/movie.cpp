#include "movie.h"
#include<iostream>

class movie {
private:
	std::string movieTitle;
	std::string movieRating;
	int movieTimesWatched;

	// Implement the constructor
	movie(std::string title, std::string rating, int watched)
		: movieTitle(title), movieRating(rating), movieTimesWatched(watched)
	{
	}

	// Implement the copy constructor
	movie(const movie& source)
		: movie{ source.movieTitle, source.movieRating, source.movieTimesWatched }
	{
	}

	// Implement the destructor
	~movie()
	{
	}

	// Implement the display method
	void display() const
	{
		std::cout << movieTitle << ", " << movieRating << ", " << movieTimesWatched << std::endl;
	}

	void set_title(std::string title)
	{
		movie::movieTitle = title;
	}

	void set_rating(std::string rating)
	{
		if (rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R")
			movie::movieRating = rating;

	}

	void increment_timeswatch(int watched)
	{
		movie::movieTimesWatched++;
	}

	void display() const;

	std::string get_title()
	{
		return movie::movieTitle;
	}

	std::string get_rating()
	{
		return movie::movieRating;
	}

	int get_timeswatched()
	{
		return movie::movieTimesWatched;
	}
};