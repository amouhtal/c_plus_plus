#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_

#include <iostream>

#define log(x) std::cout << x << std::endl;
#include "Character.hpp"

class AMateria
{
protected:
	std::string type;

public:
	AMateria(std::string const &type);
	AMateria();
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &rhs);

	std::string const &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
