#ifndef _CURE_HPP_
#define _CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		virtual ~Cure();
		std::string const &getType() const;
		void use(ICharacter&);
		virtual AMateria* clone() const;
};

#endif