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


Cure::~Cure()
{
	log("Cure Destructor");
}