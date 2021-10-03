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
}

Ice::~Ice()
{
	log("Ice Destructor");
}
