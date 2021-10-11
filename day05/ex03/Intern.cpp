#include "Intern.hpp"

Form * Intern::RobotMyRequest(std::string target)
{
	Form *ret = new RobotomyRequestForm(target);
	std::cout << "hello" <<std::endl;
	return (ret);
}


Form *Intern::makeForm(std::string form_name, std::string target)
{
	// typedef Form * (Intern::*forms)(std::string);
	// forms foo[] = {&Intern::RobotMyRequest};
	// Form foo[](std::string)= {&Intern::RobotMyRequest};
	// std::string knownForm[3] = {"robotomy request", "cdcd", "cd"};
	// forms* Func[1] = {&Intern::RobotMyRequest};
	Form *(Intern::*foo[])(std::string) = {&Intern::RobotMyRequest,};
	(void)form_name;
	return ((this->*foo[0])(target));
}