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
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	void Action() const;
	class FileNotOpenExeception : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
