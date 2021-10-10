#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)\
: Form("Shrubbery", 145, 137), _target(target)
{
	;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	;
}

void ShrubberyCreationForm::action()
{
	Bureaucrat b;
	Form *n= new ShrubberyCreationForm("home");
	b.signForm(*n);
	execute(b);
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
// {
// 	*this = other;
// }

// ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
// {
// 	return *this;
// }

// ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat &target)
// {
// 	try 
// 	{
// 		Form F(target.getName(), 145, 137);
// 		std::string filename;
	
// 		target.signForm(F);
// 		filename = target.getName() + "_shrubbery";
// 		std::ofstream ofs(filename);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// }