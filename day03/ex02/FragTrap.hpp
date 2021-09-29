#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    FragTrap();
    ~FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &rhs);
    void highFivesGuys(void);
};

#endif