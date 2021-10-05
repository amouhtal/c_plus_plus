#ifndef _WRONG_ANIMAL_
#define _WRONG_ANIMAL_

#include <iostream>

#include "Animal.hpp"
class WrongAnimal
{
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual void makeSound( void ) const ;
		virtual std::string getType() const;
		virtual ~WrongAnimal();
};

#endif