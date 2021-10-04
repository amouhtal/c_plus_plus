#ifndef _MATERIALSOURCE_HPP
#define _MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		~MateriaSource();

		virtual void learnMateria(AMateria *) ;
		virtual AMateria *createMateria(std::string const &type) ;
};

#endif