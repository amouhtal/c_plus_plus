#include "Form.hpp"

Form::Form() : Name(""), SignGrade(0), ExecuteGrade(0), _Signed(false)
{
	if (SignGrade < 1)
		throw GradeTooHighException();
	if (ExecuteGrade > 150)
		throw GradeTooHighException();
}

Form::Form(std::string name, int sign_grade, int execute_grade) : Name(name), SignGrade(sign_grade),
																  ExecuteGrade(execute_grade), _Signed(false)
{
	if (SignGrade < 1)
		throw GradeTooHighException();
	if (ExecuteGrade > 150)
		throw GradeTooHighException();
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
	return (this->SignGrade);
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
	if (GetSignGrade() < executor.getGrade())
		throw GradeTooLowException();
	Action();
}

Form::~Form()
{
	;
}
