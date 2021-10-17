# include "type.hpp"

Type::Type()
{
	type = "";
}

void	Type::parsing(std::string &Type)
{
	size_t Tsize;
	size_t		i;


	Tsize = Type.length();
	i = 0;
	if (Tsize == 1 && !std::isdigit(Type[i]))
	{
		this->type = "char";
	}
	else if (Type == "+inff" || Type == "-inff" || Type == "nanf")
	{
		this->type = "float";
		Timpossible = true;
	}
	else if (Type == "+inf" || Type == "-inf" || Type == "nan")
	{
		this->type = "double";
		Timpossible = true;
	}

	if (Type[i] == '+' || Type[i] == '-')
		i++;
	
	for (; i < Tsize; i++)
	{
		/* code */
	}
	

}

Type::~Type()
{
}