#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

#include <fstream>
#include "Form.hpp"
class RobotomyRequestForm
{
	public :
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &);
		RobotomyRequestForm(Bureaucrat &);
};

#endif