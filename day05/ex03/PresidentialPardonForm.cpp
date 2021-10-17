#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5)
{
	;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("Presidential", 25, 5), _target(target)
{
	;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	_target = rhs._target;
	return *this;
}

const char *PresidentialPardonForm::FileNotOpenExeception::what() const throw()
{
	return "File Not Create";
}

void PresidentialPardonForm::Action() const
{
	std::cout << _target << " has been pardoned  by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	;
}