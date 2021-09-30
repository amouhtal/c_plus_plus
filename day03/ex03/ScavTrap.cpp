/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:57:55 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/30 17:57:59 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor" << std::endl;
    // this->Hitpoints = 100;
    this->Energy_points = 50;
    // this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap paramitrise constructor" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Constructor" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap Assignation Operator" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << Name << " attack " << target << " ,causing " << Attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

