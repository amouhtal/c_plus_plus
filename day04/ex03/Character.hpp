#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria *inventory[4];
	size_t	Materia_count;
private:
	Character();
	~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx) ;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif