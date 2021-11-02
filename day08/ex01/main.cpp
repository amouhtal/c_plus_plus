#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "----------Test2----------" << std::endl;

	Span sp2 = Span(1000);

	try
	{
		for (size_t i = 0; i < 500; i++)
		{
			sp2.addNumber(i);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> vect;

	for (size_t i = 500; i < 1000; i++)
	{
		vect.push_back(i);
	}
	try
	{
		sp2.addNumber(vect.begin(), vect.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}