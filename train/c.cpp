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
		public :
			const char *what() const throw()
			{
				return "Fake Name\n";
			}
	};
	class Correctname : public std::exception
	{
		public :
			const char *what() const throw()
			{
				return "Correct Name\n";
			}
	};
};

Name::Name(std::string name)
{
	if (name == "fake")
		throw Fakename();
	if (name == "correct")
		throw Correctname();
	_name = name;
}

int main()
{
	try
	{
		Name t("fake");
		puts("here");
		Name t2("correct");
	}
	catch (const std::exception &f)
	{
		std::cerr << f.what() << '\n';
	}
}
