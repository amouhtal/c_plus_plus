#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	log ("---->Tests<----");
	try
	{
		Intern ahmed;
		Form *task;
		task = ahmed.makeForm("RobotMy Request", "Pardon");
		log(task->getName());
		delete task;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Intern ahmed;
		Form *task;
		task = ahmed.makeForm("Shrubbery Creation", "home");
		//log(task->GetTarget());
		delete task;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Intern ahmed;
		Form *task;
		task = ahmed.makeForm("RobotMyRequest", "error");
		log(task->getName());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}