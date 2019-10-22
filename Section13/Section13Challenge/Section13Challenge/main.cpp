#include "main.h"
#include "movies.h"
#include<iostream>

using namespace std;

int main() 
{
	movies my_movies;

	my_movies.display();

	main::add_movie(my_movies, "Big", "PG-13", 2);                 // OK
	main::add_movie(my_movies, "Star Wars", "PG", 5);             // OK
	main::add_movie(my_movies, "Cinderella", "PG", 7);           // OK

	my_movies.display();   // Big, Star Wars, Cinderella

	main::add_movie(my_movies, "Cinderella", "PG", 7);            // Already exists
	main::add_movie(my_movies, "Ice Age", "PG", 12);              // OK

	my_movies.display();    // Big, Star Wars, Cinderella, Ice Age

	main::increment_watched(my_movies, "Big");                    // OK
	main::increment_watched(my_movies, "Ice Age");              // OK

	my_movies.display();    // Big and Ice Age watched count incremented by 1

	main::increment_watched(my_movies, "XXX");         // XXX not found

	return 0;
}

void main::add_movie(movies &movies, std::string name, std::string rating, int watched)
{
	if (movies.add_movie(name, rating, watched)) {
		std::cout << name << " added" << std::endl;
	}
	else {
		std::cout << name << " already exists" << std::endl;
	}
}

void main::increment_watched(movies& Movies, std::string name)
{
	if (Movies.increment_watched(name))
	{
		std::cout << name << " watch incremented" << std::endl;
	}
	else
	{
		std::cout << name << " not found" << std::endl;
	}
}
