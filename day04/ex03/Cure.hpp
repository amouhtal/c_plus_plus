#ifndef _CURE_HPP_
#define _CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		virtual ~Cure();
		void use(ICharacter&);
		AMateria* clone() const;
		virtual AMateria* clone() const;
};

#endif