#include "Intern.hpp"

Intern::Intern()
{
}

Form *Intern::RobotMyRequest( std::string target)
{
	Form *ret = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << ret->getName() << std::endl;

	return (ret);
}

Form *Intern::PresidentialPardon( std::string target)
{
	Form *ret = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << ret->getName() << std::endl;
	return (ret);
}

Form *Intern::Shrubbery( std::string target)
{
	Form *ret = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << ret->getName() << std::endl;

	return (ret);
}

const char *Intern::UnknownFormExeception::what() const throw()
{
	return "Unknown Name Form";
}


Form *Intern::makeForm(std::string form_name, std::string target)
{
	typedef Form *(Intern::*Forms)(std::string);
	Forms forms[3] = {&Intern::RobotMyRequest, &Intern::PresidentialPardon, &Intern::Shrubbery};
	std::string names[3] = {"RobotoMy Request", "Presidential Pardon", "Shrubbery Creation"};

	for (size_t i = 0; i < 3; i++)
	{
		if (names[i] == form_name)
			return ((this->*forms[i])(target));
	}
	throw UnknownFormExeception();
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
}