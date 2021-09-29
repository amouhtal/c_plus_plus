#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond trap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->Name = Name;
    ClapTrap::Name = Name + "_clap_name";
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;

}
