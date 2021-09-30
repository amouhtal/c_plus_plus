/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:53:51 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/30 17:53:53 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap instance0;
    ClapTrap instance1("claptrap");
    ClapTrap instance2(instance1);

    instance2.attack("target");
    instance2.takeDamage(30);
    instance2.beRepaired(20);
}