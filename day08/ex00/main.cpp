#include "easyfind.hpp"

int main()
{
	std::list<int> container;

	container.push_back(5);

	container.push_back(10);
	container.push_back(14);
	container.push_back(0);
	container.push_back(-8);

	if (easyFind(container, 0))
		std::cout << "value exist" << std::endl;
	else
		std::cout << "value not exist" << std::endl;

	if (easyFind(container, 4))
		std::cout << "value exist" << std::endl;
	else
		std::cout << "value not exist" << std::endl;

	if (easyFind(container, 10))
		std::cout << "value exist" << std::endl;
	else
		std::cout << "value not exist" << std::endl;
}