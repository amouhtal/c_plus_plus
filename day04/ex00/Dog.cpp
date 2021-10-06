#include "Dog.hpp"

Dog::Dog()
{
	log("Dog  default constructor");
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	(void)other;
	return *this;
}
Dog::~Dog()
{
	log("Dog destructor");
}

void Dog::makeSound() const
{
	log("dog sound");
}

std::string Dog::getType() const
{
	return this->type;
}
