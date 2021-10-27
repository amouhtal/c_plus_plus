#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <list>


template <typename T>
bool easyfind(T container, int occurrence)
{
	if (std::find(container.begin(), container.end(), occurrence) != container.end())
		return true;
	return false;
}

#endif