#include "Cure.hpp"

Cure::Cure()
{
	log("Cure Default Constructor");
	type = "cure";
}

void Cure::use(ICharacter &ch)
{
	std::cout << "Cure heals " << ch.getName() << "wounds" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *Mat = new Cure();
	return (Mat);
}

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	this->type = other.type;
}

Cure::~Cure()
{
	log("Cure Destructor");
}