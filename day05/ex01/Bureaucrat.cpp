/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:06:57 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/15 17:06:59 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	;
}


std::string Bureaucrat::getName(void) const
{
	return (this->Name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->Grade);
}

void Bureaucrat::incGrade()
{
	if (Grade == 150)
		throw GradeTooLowException();
	Grade++;
}

void Bureaucrat::decGrade()
{
	if (Grade == 1)
		throw GradeTooHighException();
	Grade--;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	Grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ",  bureaucrat grade" << bureaucrat.getGrade() << std::endl;
	return out;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): Name(other.Name)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) 
{
	this->Grade = rhs.Grade;
	return *this;
}

void Bureaucrat::signForm(Form &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << Name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << Name << " cannot sign " << form.getName() << " " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	;
}