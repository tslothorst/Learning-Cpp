#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "movie.h"

class movies
{
private:
	std::vector<movie> movieVec;
public:
	// No arg constructor
	movies();

	static void display();
	static bool add_movie(std::string name, std::string rating, int watched);
	static bool increment_watched(std::string title);

};

