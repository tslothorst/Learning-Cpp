#include "movies.h"
#include<iostream>

class movies 
{
private:
	std::vector<movie> movieCollection;
	movies()
	{				
	}

	~movies()
	{
	}

	void display()
	{
		for(auto m : movieCollection)
		{
			m.display();
		}
	}

	bool add_movie(std::string name, std::string rating, int watched)
	{	
		movie film(name, rating, watched);
		for (auto m : movieCollection) 
		{
			if (m.get_title() == name)
			{
				return false;
			}
		}		
		movieCollection.push_back(film);
		return true;
	}

	bool increment_watched(std::string title)
	{
		for (auto m : movieCollection) 
		{
			if (m.get_title() == title)
				m.increment_timeswatch();
			return true;
		}
		return false;
	}

};


