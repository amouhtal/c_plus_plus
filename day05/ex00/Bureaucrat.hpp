#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	std::string getName( void ) const;
	int	getGrade( void ) const;
	void incGrade();
	void decGrade();
	class GradeTooHighException
	{
		virtual const char *what() const throw()
		{
			return "Grade Too High";
		}
	};
	class GradeTooLowException
	{
		virtual const char *what() const throw()
		{
			return "Grade Too Low";
		}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
#endif
