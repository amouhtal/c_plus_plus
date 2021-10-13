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
	std::string ShrubberyGetTarget( void );
	void Action() const;
	std::string GetTarget( void ) const;

	class FileNotOpenExeception : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "File Not Create";
		}
	};
	// ShrubberyCreationForm(const ShrubberyCreationForm &);
	// ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	// void execute(Bureaucrat const &executor) const;
};

#endif
