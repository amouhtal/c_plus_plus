#include "Brain.hpp"


Brain::Brain()
{
	log("Brain Default Constructor");
}

Brain::Brain(const Brain &other)
{
	log("Brain Copy Constructor");
	*this = other;
}

Brain &Brain::operator=(const Brain &rhs)
{
	log("Brain Assignation operator");
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

void Brain::setBrain(char c)
{
	// log("Brain Paramitrise Constructor");
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = c;
	}
}

std::string Brain::getBrain( void ) const
{
	return (*this->ideas);
}

Brain::~Brain()
{
	log("Destructor Called");
}