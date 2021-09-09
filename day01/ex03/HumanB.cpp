/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:36:14 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/07 16:36:14 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string  name):name(name),weapon(NULL)
{
}

void HumanB::attack(void) const
{
    if (this->weapon)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << "weapon not set\n";
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}