#include "Intern.hpp"

Form * Intern::RobotMyRequest(std::string target)
{
	Form *ret = new RobotomyRequestForm(target);
	return (ret);
}

Form * Intern::PresidentialPardon(std::string target)
{
	Form *ret = new PresidentialPardonForm(target);
	return (ret);
}

Form * Intern::Shrubbery(std::string target)
{
	Form *ret = new ShrubberyCreationForm(target);
	return (ret);
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	Form *f;
	typedef Form *(Intern::*Forms)(std::string);
	Forms forms[3] = {&Intern::RobotMyRequest,&Intern::PresidentialPardon,&Intern::RobotMyRequest};
	std::string names[3] = {"RobotMy Request", "Presidential Pardon", "Shrubbery Creation"};

	for (size_t i = 0; i < 3; i++)
	{
		if (names[i] == form_name)
			{
				f = (this->*forms[0])(target);
				return ((this->*forms[0])(target));
			}
	}
	throw UnknownFormExeception();
}