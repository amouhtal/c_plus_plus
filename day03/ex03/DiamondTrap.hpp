#ifndef _DIAMOND_TRAP_
#define _DIAMOND_TRAP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public :
        DiamondTrap();
        DiamondTrap(std::string name);
};

#endif