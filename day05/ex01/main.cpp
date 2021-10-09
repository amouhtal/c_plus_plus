#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat school("school", 55);
		Form ta("ta1", 50, 10);

		// ta.beSigned(school);

		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}