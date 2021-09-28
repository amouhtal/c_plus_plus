#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->Name = Name;
    ClapTrap::Name = Name + "_clap_name";
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;

    std::cout << this->Name << std::endl;
    std::cout << this->Hitpoints << std::endl;
    std::cout << this->Energy_points << std::endl;
    std::cout << this->Attack_damage << std::endl;
}