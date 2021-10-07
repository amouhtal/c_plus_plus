#include "AMateria.hpp"

AMateria::AMateria()
{
	;
}

AMateria::AMateria(std::string const &type)
{
	// log("Constructor paramitrise");
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}

AMateria::~AMateria()
{
	;
}