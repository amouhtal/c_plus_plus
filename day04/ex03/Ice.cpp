# include "Ice.hpp"

Ice::Ice()
{
	log("Ice Default constructor");
	type = "ice";
}

Ice::Ice(const Ice &other)
{
	log("Ice Default constructor");
	*this = other;
}

Ice &Ice::operator=(const Ice &rhs)
{
	this->type = rhs.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *Mat = new Ice();
	return (Mat);
}

void Ice::use(ICharacter &ch)
{
	std::cout << "Ice shoots an ice bolt at " << ch.getName() << std::endl;
}

Ice::~Ice()
{
	log("Ice Destructor");
}
