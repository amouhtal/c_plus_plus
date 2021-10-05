#include "Character.hpp"


Character::Character()
{
	this->Materia_count = 0;
}

void Character::equip(AMateria *m)
{
	if (Materia_count < 3)
	{
		inventory[Materia_count++] = m;
	}
	else
	{
		log("full inventory");
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (Materia_count < 3)
		inventory[idx]->use(target);
	else
		log("index out inventory");
}

void Character::unequip(int idx)
{
	// [ 0 ] [ 1 ] [ 2 ] [ 3 ]
	if (idx <= Materia_count)
	{
		inventory[idx] = NULL;
		for (int i = idx; i < Materia_count - 1; i++)
		{
			inventory[i] = inventory[i + 1];
		}
		Materia_count--;
	}
}

std::string const & Character::getName() const
{
	return this->Name;
}

Character::Character(std::string name)
{
	this->Name = name;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator=(const Character &rhs)
{
	this->Name = rhs.Name;
	Materia_count = rhs.Materia_count;
	for (size_t i = 0; i < rhs.Materia_count; i++)
	{
		inventory[i] = rhs.inventory[i]->clone();
	}
}

Character::~Character()
{
	;
}
