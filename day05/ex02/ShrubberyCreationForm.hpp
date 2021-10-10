#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	void action();
	// ShrubberyCreationForm(const ShrubberyCreationForm &);
	// ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	// void execute(Bureaucrat const &executor) const;
};

#endif
