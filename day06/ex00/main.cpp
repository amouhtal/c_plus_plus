# include "type.hpp"

int main(int ac, char **av)
{
	std::string str;
	if (ac != 2)
	{
		std::cerr << "[ ERROR ] Check Args ! " << std::endl;
		return 0;
	}
	Type nb;
	nb.setValue(av[1]);
	str = nb.getValue();
	nb.parsing(str);
	if (nb.GetType() != "Invalid Type")
	{
		nb.SetTypes();
		nb.printTypes();
		return (0);
	}
	else
		std::cout << "Invalid Type" << std::endl;
	return (1);
}
