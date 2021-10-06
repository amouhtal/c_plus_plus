#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	// log("Cat  default constructor");
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	// log("Cat Assignation Operator");
	this->type = "Cat";
	this->brain = new Brain();
	*brain = *other.brain;
	return *this;
}

Cat::~Cat()
{
	log("Cat Destructor");
	delete (brain);
}

void Cat::makeSound() const
{
	log("Cat sound");
}

std::string Cat::getType() const
{
	return this->type;
}

void Cat::setbrain(char c)
{
	brain->setBrain(c);
}

void Cat::getbrain()
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->brain->getBrain();
	}
	std::cout << std::endl;
}