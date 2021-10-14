#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <ctime>

class Bureaucrat;

class Form
{
private:
	const std::string Name;
	const int SignGrade;
	const int ExecuteGrade;
	bool _Signed;
public:
	Form();
	Form(std::string name, int sign_grade, int execute_grade);
	Form(const Form &);
	Form &operator=(const Form &rhs);
	std::string getName(void) const;
	virtual ~Form();
	int GetSignGrade(void) const;
	int GetExecuteGrade(void) const;
	bool getSigne(void) const;
	void beSigned(Bureaucrat &bure);
	virtual void execute(Bureaucrat const &executor) const;
	virtual void Action() const = 0;
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(const std::ostream &out, const Form &rhs);
#endif