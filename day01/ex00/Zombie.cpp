/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:49:15 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/01 15:49:15 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setZombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << "destructor " << this->name << std::endl;
    return ;
}
std::string Zombie::getZombie()
{
    return this->name;
}

void Zombie::announce( void ) const
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..."<< std::endl;
<<<<<<< HEAD
}
=======
}
>>>>>>> day01
