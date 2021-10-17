#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	log("---->Tests 1<----");
	try
	{
		Intern ahmed;
		Form *task;
		task = ahmed.makeForm("RobotoMy Request", "Pardon");
		log(task->getName());
	
		delete task;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	log("---->Tests 2<----");

	try
	{
		Intern ahmed;
		Form *task;
		task = ahmed.makeForm("Shrubbery Creation", "home");
		log(task->getName());
		delete task;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	log("---->Tests 3<----");

	try
	{
		Intern ahmed;
		Form *task;
		task = ahmed.makeForm("RbotMyRequest", "error");
		log(task->getName());
		delete task;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}