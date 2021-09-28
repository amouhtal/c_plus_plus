#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "FragTrap ClapTrap paramitrise constructor" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high fives" << std::endl;
}