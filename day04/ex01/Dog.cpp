#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	log("Dog  default constructor");
	this->type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return *this;
}
Dog::~Dog()
{
	log("Dog deconstructor");
	delete(brain);
}

void Dog::makeSound() const
{
	log("dog sound");
}

std::string Dog::getType() const
{
	return this->type;
}
