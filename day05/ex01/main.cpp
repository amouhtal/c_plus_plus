#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form ta("ta1", 50, 10);
		Bureaucrat school("school", 55);

		// ta.beSigned(school);

		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	try
	{
		Form ta("ta1", 50, 10);
		Bureaucrat school("school", 49);

		// ta.beSigned(school);

		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}