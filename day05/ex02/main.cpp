# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat b("ana", 1);
	Form *n= new ShrubberyCreationForm("home");
	b.signForm(*n);
	n->execute(b);
	// b.exectform()
	// ShrubberyCreationForm i;
	// std::cout << i.GetSignGrade() << std::endl;
	// ShrubberyCreationForm f(target);

}