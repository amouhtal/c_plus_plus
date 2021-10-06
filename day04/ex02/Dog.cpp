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
	this->type = "Dog";
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	log("Dog Assignation Operator");
	if (this == &other)
		return *this;
	this->type = "Dat";
	*brain = *other.brain;
	return *this;
}
Dog::~Dog()
{
	log("Dog destructor");
	delete (brain);
}

void Dog::makeSound() const
{
	log("dog sound");
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::setbrain(std::string c)
{
	brain->setIdeas(c);
}

void Dog::getbrain()
{
	std::string const *ideas = this->brain->getIdeas();
	for (size_t i = 0; i < 99; i++)
	{
		std::cout << ideas[i] << ", ";
	}
	std::cout << ideas[99] << std::endl;
}