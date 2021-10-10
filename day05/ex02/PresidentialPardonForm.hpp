#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm
{
	public :
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &);
		PresidentialPardonForm(Bureaucrat &);
};

#endif