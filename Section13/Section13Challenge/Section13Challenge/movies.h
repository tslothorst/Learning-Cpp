#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "movie.h"

class movies
{
private:
	std::vector<movie> movieCollection;

public:
	// No arg constructor
	movies();

	~movies();

	void display();
	bool add_movie(std::string name, std::string rating, int watched);
	bool increment_watched(std::string title);

};

