#ifndef _DIAMOND_TRAP_
#define _DIAMOND_TRAP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string Name;
    public :
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &rhs);
        DiamondTrap(std::string name);
        void whoAmI();
};

#endif