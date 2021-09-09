/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:35:14 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/01 16:35:14 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    std::string new_str;

    Zombie *zombie ;

    zombie = NULL;
    if (N > 0)
    {
        zombie = new Zombie[N];
        while (i < N)
        {
            new_str = name + std::to_string(i);
            zombie[i].setZombie(new_str);
            i++;
        }
    }
    return zombie;
}