#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	Materia_count = 0;
}

void MateriaSource::learnMateria(AMateria *ma)
{
	if (Materia_count >= 0 || Materia_count < 4)
		inventory[Materia_count++] = ma;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < Materia_count; i++)
	{
		if (inventory[i]->getType() == type)
			return (inventory[i]);
	}
	return (0);
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	this->Materia_count = rhs.Materia_count;
	for (size_t i = 0; i < Materia_count; i++)
		this->inventory[i] = rhs.inventory[i]->clone();
	return (*this);
	
}

MateriaSource::~MateriaSource()
{
	;
}