#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("ana", 140);
		Form *n = new ShrubberyCreationForm("home", "FormName");
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
		Bureaucrat b("ana", 15);
		Form *n = new RobotomyRequestForm("Robot", "FormName");

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
		Form *n = new PresidentialPardonForm("president", "FormName");

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
		Form *n = new ShrubberyCreationForm("home", "FormName");
		b.signForm(*n);
		b.executeForm(*n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}