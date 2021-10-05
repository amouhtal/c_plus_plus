#ifndef _MATERIALSOURCE_HPP
#define _MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *inventory[4];
	size_t Materia_count;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &rhs);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
};

#endif