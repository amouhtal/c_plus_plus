/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:45:56 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/16 19:12:00 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name(""), SignGrade(0), ExecuteGrade(0), _Signed(false)
{
	if (SignGrade < 1)
		throw GradeTooHighException();
	if (SignGrade > 150)
		throw GradeTooLowException();
	if (ExecuteGrade < 1)
		throw GradeTooHighException();
	if (ExecuteGrade > 150)
		throw GradeTooLowException();
}

Form::Form(std::string name, int sign_grade, int execute_grade) : Name(name), SignGrade(sign_grade),
																  ExecuteGrade(execute_grade), _Signed(false)
{
	if (SignGrade < 1)
		throw GradeTooHighException();
	if (SignGrade > 150)
		throw GradeTooLowException();
	if (ExecuteGrade < 1)
		throw GradeTooHighException();
	if (ExecuteGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : Name(other.Name), SignGrade(other.SignGrade), ExecuteGrade(other.ExecuteGrade)
{
	;
}

Form &Form::operator=(const Form &rhs)
{
	_Signed = rhs._Signed;
	return *this;
}

std::string Form::getName(void) const
{
	return (this->Name);
}

int Form::GetSignGrade(void) const
{
	return (this->SignGrade);
}

int Form::GetExecuteGrade(void) const
{
	return (this->ExecuteGrade);
}

bool Form::getSigne(void) const
{
	return _Signed;
}

void Form::beSigned(Bureaucrat &bure)
{
	if (bure.getGrade() <= SignGrade)
		_Signed = true;
	else
		throw GradeTooLowException();
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!getSigne())
		throw FormNotSignedException();
	if (this->GetExecuteGrade() < executor.getGrade())
		throw GradeTooLowException();
	Action();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::FormNotSignedException::what() const throw()
{
	return "Form Not Signed";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
	if (rhs.getSigne())
		out << " Name : " << rhs.getName() << " SigneGrade : " << rhs.GetSignGrade() << " ExecuteGrade : " << rhs.GetExecuteGrade() << " Form is signed\n";
	else
		out << " Name : " << rhs.getName() << " SigneGrade : " << rhs.GetSignGrade() << " ExecuteGrade : " << rhs.GetExecuteGrade() << " Form is not signed\n";
	return out;
}

Form::~Form()
{
	;
}
