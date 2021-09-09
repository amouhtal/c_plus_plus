/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:35:03 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/01 16:35:03 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) const
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}

int main()
{
    int N;
    int i;
    Zombie *zombie;

    N = 8;
    i = 0;

	zombie = zombieHorde(N, "zombie");
	if (zombie)
	{
		while (i < N)
		{
			zombie[i].announce();
			i++;
		}
		delete [] zombie;
	}
    return (0);
}
