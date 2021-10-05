#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
# include "Character.hpp"
# include "ICharacter.hpp"

#define log(x) std::cout << x << std::endl;

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &rhs);

	std::string const &getType() const; 
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
