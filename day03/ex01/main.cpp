#include "ScavTrap.hpp"

int main()
{
    ScavTrap instance0;
    ScavTrap instance1("claptrap");
    ScavTrap instance2(instance1);

    instance2.guardGate();
    // ClapTrap instance0;
    // ClapTrap instance1("claptrap");
    // ClapTrap instance2(instance1);

    // instance2.attack("target");
    // instance2.takeDamage(30);
    // instance2.beRepaired(20);
}