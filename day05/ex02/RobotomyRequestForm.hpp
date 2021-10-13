#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <fstream>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(Bureaucrat &);
	RobotomyRequestForm(std::string _target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
	void Action() const;
	class FileNotOpenExeception : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "File Not Create";
		}
	};
};

#endif