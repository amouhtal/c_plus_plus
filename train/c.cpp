#include <iostream>
#include <exception>

class Name
{
	std::string _name;

public:
	Name() {}
	~Name() {}
	Name(std::string name);
	class Fakename : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Fake Name\n";
		}
	};
};

Name::Name(std::string name)
{
	if (name == "fake")
		throw Fakename();
	_name = name;
}

int main()
{
	try
	{
		Name t("fake");
		Name t2("faee");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
