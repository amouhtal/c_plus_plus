#include <iostream>


class MYError : public std::exception
{
	const char *what() const 
	{
		return "ERRRRRROR\n";
	}
};

int fun() throw()
{
	// throw MYError();

	return 1;
	
}

int fun2()
{
	throw MYError();
	return 2;
}


int main()
{
	try
	{
		std::cout << fun() << std::endl;
		std::cout << fun2() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}