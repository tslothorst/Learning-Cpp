#pragma once
#include "movies.h"
class main
{
public:
	static void increment_watched(movies& movies, std::string name);
	static void add_movie(movies& movies, std::string name, std::string rating, int watched);
};

