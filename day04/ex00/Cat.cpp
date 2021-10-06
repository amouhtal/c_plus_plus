#include "Cat.hpp"

Cat::Cat()
{
	log("Cat  default constructor");
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	(void)other;
	return *this;
}

Cat::~Cat()
{
	log("Cat destructor");
}

void Cat::makeSound() const
{
	log("Cat sound");
}

std::string Cat::getType() const
{
	return this->type;
}

