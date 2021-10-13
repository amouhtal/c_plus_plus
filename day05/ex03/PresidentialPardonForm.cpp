#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
	;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string Name)
	:	Form(Name, 72, 45), _target(target)
{
	;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
	return *this;
}

void PresidentialPardonForm::Action() const
{
	std::cout << _target << " has been pardoned  by Zafod Beeblebrox" << std::endl;
}
