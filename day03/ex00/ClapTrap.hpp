
#ifndef _Clap_TRAP_HPP
#define _Clap_TRAP_HPP

#include <iostream>

class ClapTrap
{
    private :
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;
    public :
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &rhs);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif