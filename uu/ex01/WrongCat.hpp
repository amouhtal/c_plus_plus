#ifndef _WRONG_CAT_HPP
#define _WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat operator=(const WrongCat &other);
		void makeSound( void ) const;
		std::string getType() const;
		virtual ~WrongCat();
};


#endif