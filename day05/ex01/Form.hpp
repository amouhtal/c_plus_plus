#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

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
	~Form();
	Form(std::string name, int sign_grade, int execute_grade);
	Form(const Form &);
	Form &operator=(const Form &rhs);
	std::string getName(void) const;
	int GetSignGrade(void) const;
	int GetExecuteGrade(void) const;
	bool getSigne(void) const;
	void beSigned(Bureaucrat &bure);


	class GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade Too High";
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade Too Low";
		}
	};
};

std::ostream &operator<<(const std::ostream &out, const Form &rhs);
#endif