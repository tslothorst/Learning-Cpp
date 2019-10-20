#include "movie.h"
#include<iostream>

// Implement the constructor
movie::movie(std::string title, std::string rating, int watched)
	: movieTitle(title), movieRating(rating),movieTimesWatched(watched)
{
}

// Implement the copy constructor
movie::movie(const movie& source)
	: movie {source.movieTitle, source.movieRating, source.movieTimesWatched}
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
