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
	log("Cat  Copy constructor");
	this->type = "Cat";
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	log("Cat Assignation Operator");
	if (this == &other)
		return *this;
	this->type = "Cat";
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

void Cat::setbrain(std::string c)
{
	brain->setIdeas(c);
}

void Cat::getbrain()
{
	std::string const *ideas = this->brain->getIdeas();
	for (size_t i = 0; i < 99; i++)
	{
		std::cout << ideas[i] << ", ";
	}
	std::cout << ideas[99] << std::endl;
}