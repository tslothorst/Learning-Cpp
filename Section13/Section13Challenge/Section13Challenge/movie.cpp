#include "movie.h"
#include<iostream>


	// Implement the constructor
	movie::movie(std::string title, std::string rating, int watched)
		: movieTitle(title), movieRating(rating), movieTimesWatched(watched)
	{
	}

	// Implement the copy constructor
	movie::movie(const movie& source)
		: movie{ source.movieTitle, source.movieRating, source.movieTimesWatched }
	{
	}

	// Implement the destructor
	movie::~movie()
	{
	}

	// Implement the display method
	void movie::display() const
	{
		std::cout << movieTitle << ", " << movieRating << ", " << movieTimesWatched << std::endl;
	}

	void movie::set_title(std::string title)
	{
		movie::movieTitle = title;
	}

	void movie::set_rating(std::string rating)
	{
		if (rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R")
			movie::movieRating = rating;

	}

	void movie::increment_timeswatch()
	{
		movie::movieTimesWatched++;
	}

	void movie::display() const 
	{
		std::cout << movieTitle << ", " << movieRating << ", " << movieTimesWatched << std::endl;
	}

	std::string movie::get_title()
	{
		return movie::movieTitle;
	}

	std::string movie::get_rating()
	{
		return movie::movieRating;
	}

	int movie::get_timeswatched()
	{
		return movie::movieTimesWatched;
	}
