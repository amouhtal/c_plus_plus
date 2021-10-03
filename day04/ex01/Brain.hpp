#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <iostream>
#include "Animal.hpp"

class Brain
{
	std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &other);
		void setBrain(char c);
		std::string getBrain( void ) const;
		Brain &operator=(const Brain &rhs);
		~Brain();
};

#endif