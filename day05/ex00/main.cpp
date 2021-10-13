#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat school("school", 15);
		std::cout << school.getGrade() << std::endl;
		 school.incGrade();
		std::cout << school.getGrade() << std::endl;
		school.decGrade();
		std::cout << school.getGrade() << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat school("school", -5);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat school("school", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}