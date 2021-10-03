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
		void setBrain(char c);
		std::string getBrain( void ) const;
};

#endif