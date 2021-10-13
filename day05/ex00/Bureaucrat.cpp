#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	;
}

Bureaucrat::~Bureaucrat()
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
	if (Grade == 1)
		throw GradeTooHighException();
	Grade--;
}

void Bureaucrat::decGrade()
{
	if (Grade == 150)
		throw GradeTooLowException();
	Grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	Grade = grade;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
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