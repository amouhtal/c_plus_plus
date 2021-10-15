#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

#define log(x) std::cout << x << std::endl
class Bureaucrat;

class Form;

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;

public:
	Bureaucrat();
	virtual ~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	std::string getName(void) const;
	int getGrade(void) const;
	void incGrade();
	void decGrade();
	void signForm( Form &form );
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
#endif
