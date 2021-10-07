#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private :
	std::string Name;
	AMateria *inventory[4];
	int	Materia_count;

public :
	Character();
	Character(std::string name);
	Character(const Character &other);
	Character &operator=(const Character &rhs);
	virtual ~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx) ;
	void use(int idx, ICharacter& target);
};

#endif