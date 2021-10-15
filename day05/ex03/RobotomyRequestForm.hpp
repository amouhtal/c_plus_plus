#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <fstream>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
	RobotomyRequestForm(Bureaucrat &);
	void Action() const;
};

#endif