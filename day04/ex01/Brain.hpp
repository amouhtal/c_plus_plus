#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <iostream>
#include "Animal.hpp"

class Brain
{
	std::string ideas[100];

public:
	Brain();
	Brain &operator=(const Brain &rhs);
	Brain(const Brain &other);
	~Brain();

	void setBrain(std::string c);
	std::string const *getBrain(void) const;
};

#endif