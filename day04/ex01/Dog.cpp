#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	log("Dog  default constructor");
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	log("Dog Assignation Operator");
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
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
