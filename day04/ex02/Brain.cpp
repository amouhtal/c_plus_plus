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
	if(this == &rhs)
		return *this;
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

void Brain::setIdeas(std::string c)
{
	// log("Brain Paramitrise Constructor");
	std::string str;
	for (size_t i = 0; i < 100; i++)
	{
		str = c + std::to_string(i);
		ideas[i] = str;
	}
}

std::string const *Brain::getIdeas( void ) const
{
	return (this->ideas);
}

Brain::~Brain()
{
	log("Brain Destructor Called");
}