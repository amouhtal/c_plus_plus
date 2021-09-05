/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:48:58 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/01 15:48:58 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) const
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}

int main()
{
  randomChump("zombie");
}
