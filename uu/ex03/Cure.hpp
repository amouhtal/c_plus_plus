#ifndef _CURE_HPP_
#define _CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		std::string const &getType() const;
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		void use(ICharacter&);
		virtual AMateria* clone() const;
		virtual ~Cure();
};

#endif