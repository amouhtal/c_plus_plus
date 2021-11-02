#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <list>
# include <algorithm>
# include <vector>



template <typename T>
bool easyFind(T container, int occurrence)
{
	if (std::find(container.begin(), container.end(), occurrence) != container.end())
		return true;
	return false;
}

#endif