/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:45:51 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/15 17:45:52 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	virtual ~Form();
	Form(std::string name, int sign_grade, int execute_grade);
	Form(const Form &);
	Form &operator=(const Form &rhs);
	std::string getName(void) const;
	int GetSignGrade(void) const;
	int GetExecuteGrade(void) const;
	bool getSigne(void) const;
	void beSigned(Bureaucrat &bure);
	virtual void execute(Bureaucrat const &executor) const;
	virtual void Action() const = 0;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Grade Too High";
		}
	};
	class FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Form Not Signed";
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Grade Too Low";
		}
	};
};

std::ostream &operator<<(const std::ostream &out, const Form &rhs);
#endif