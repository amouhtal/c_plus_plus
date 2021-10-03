#include "Cure.hpp"

Cure::Cure()
{
	log("Cure Default Constructor");
	type = "cure";
}

void Cure::use(ICharacter &ch)
{
	std::cout << "Ice shoots an ice bolt at " << ch.getName() << std::endl;
}

Cure::~Cure()
{
	log("Cure Destructor");
}