# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat b("ana", 15);

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