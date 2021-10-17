#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
	;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardon", 25, 5), _target(target)
{
	;
}

void PresidentialPardonForm::Action() const
{
	std::cout << _target << " has been pardoned  by Zafod Beeblebrox" << std::endl;
}

const char *PresidentialPardonForm::FileNotOpenExeception::what() const throw()
{
	return "File Not Create";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	;
}