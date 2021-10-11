# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"
int main()
{
	Bureaucrat b("ana", 15);
	Intern i;
	Form *r;

	r = i.makeForm("form","home");

	Form *n = new PresidentialPardonForm("home2");
	b.signForm(*n);
	b.executeForm(*n);
	
	// int i = time(NULL);


	// std::cout << i << std::endl;
	// b.exectform()
	// ShrubberyCreationForm i;
	// std::cout << i.GetSignGrade() << std::endl;
	// ShrubberyCreationForm f(target);

}