#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():Form("", 72, 45)
{
	;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:	Form("RobotomyRequest", 72, 45), _target(target)
{
	;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	return *this;
}


void RobotomyRequestForm::Action() const
{
	int now;
	
	now = time(NULL);

	if (now % 2)
	{
		std::cout << this->_target << " has been robotomized successfully "  << std::endl;
	}
	else
		std::cout << this->_target << " has been failed "  << std::endl;

}