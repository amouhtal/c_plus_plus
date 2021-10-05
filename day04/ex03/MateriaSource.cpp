#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	Materia_count = 0;
}

void MateriaSource::learnMateria(AMateria *ma)
{
	if (Materia_count >= 0 || Materia_count < 4)
		inventory[Materia_count++] = ma->clone();
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

MateriaSource::~MateriaSource()
{
	;
}