#include "movies.h"
#include<iostream>


	movies::movies()
	{				
	}

	movies::~movies()
	{
	}

	void movies::display()
	{
		for(const auto &m : movieCollection)
		{
			m.display();
		}
	}

	bool movies::add_movie(std::string name, std::string rating, int watched)
	{	
		movie film(name, rating, watched);
		for (const auto &m : movieCollection) 
		{
			if (m.get_title() == name)
			{
				return false;
			}
		}		
		movieCollection.push_back(film);
		return true;
	}

	bool movies::increment_watched(std::string title)
	{
		for (auto m : movieCollection) 
		{
			if (m.get_title() == title) 
			{
				m.increment_timeswatch();
				return true;
			}
		}
		return false;
	}


