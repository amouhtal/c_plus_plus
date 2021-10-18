#include "type.hpp"

int main(int ac, char **av)
{
	
	if (ac != 2)
	{
		std::cerr << "[ ERROR ] Check Args ! " << std::endl;
		return 0;
	}
	Type nb;
	std::string str = av[1];

	nb.parsing(str);
	std::cout << nb.GetType() << std::endl;
	// parsing(av[1]);
	// std::cout << val << std::endl;
	// std::cout << val << std::endl;
	// std::cout << val << std::endl;
}
