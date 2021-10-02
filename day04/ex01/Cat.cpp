#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	log("Cat  default constructor");
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return *this;
}

Cat::~Cat()
{
	log("Cat deconstructor");
	delete [] brain;
}

void Cat::makeSound() const
{
	log("Cat sound");
}

std::string Cat::getType() const
{
	return this->type;
}

