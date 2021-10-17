#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Form *n = new ShrubberyCreationForm("home");
		Bureaucrat b("ana", 130);
		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	log("-------");

	try
	{
		Bureaucrat b("ana", 40);
		Form *n = new RobotomyRequestForm("Robot");

		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	log("-------");

	try
	{
		Bureaucrat b("ana", 5);
		Form *n = new PresidentialPardonForm("president");

		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	log("-------");

	try
	{
		Bureaucrat b("ana", 149);
		Form *n = new ShrubberyCreationForm("home");
		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}