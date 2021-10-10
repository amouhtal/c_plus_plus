#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
	;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &target)
{
	try 
	{
		Form F("Shrubbery", 145, 137);
		std::string filename;
	
		target.signForm(F);
		filename = target.getName() + "_shrubbery";
		std::ofstream ofs(filename);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}