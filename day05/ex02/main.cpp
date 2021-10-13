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
		Form *n = new ShrubberyCreationForm("home2");

		b.signForm(*n);
		b.executeForm(*n);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// int i = time(NULL);

	// std::cout << i << std::endl;
	// b.exectform()
	// ShrubberyCreationForm i;
	// std::cout << i.GetSignGrade() << std::endl;
	// ShrubberyCreationForm f(target);
}