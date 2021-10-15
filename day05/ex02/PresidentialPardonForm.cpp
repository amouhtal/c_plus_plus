#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 72, 45)
{
	;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:	Form("PresidentialPardon", 72, 45), _target(target)
{
	;
}

void PresidentialPardonForm::Action() const
{
	std::cout << _target << " has been pardoned  by Zafod Beeblebrox" << std::endl;
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