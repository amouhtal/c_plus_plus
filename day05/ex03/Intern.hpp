#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
public:
	Form *RobotMyRequest(std::string target);

		Form *makeForm(std::string form_name, std::string target);
	class UnknownFormExeception : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Unknown Form Name";
		}
	};
};

#endif