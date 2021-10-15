/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:07:11 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/15 17:09:44 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	virtual ~Form();
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
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
};

std::ostream &operator<<(const std::ostream &out, const Form &rhs);
#endif