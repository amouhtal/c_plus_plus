#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout <<"\033[32m ClapTrap Default constructor \033[0m" << std::endl;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "ClapTrap paramitrise constructor" << std::endl;
    this->Name = Name;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap Assignation operator" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << Name << " attack " << target << " ,causing " << Attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " take damage amount :" << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << Name << " Repaired " << "amount :" << amount <<std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[32mClapTrap Destructor\033[0m" << std::endl;
}
