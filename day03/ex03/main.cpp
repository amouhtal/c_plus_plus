/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:57:44 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/30 18:10:44 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap C_instance0;
    // ClapTrap C_instance1("claptrap");
    // ClapTrap C_instance2(C_instance1);
    // C_instance2.attack("target");
    // C_instance2.takeDamage(30);
    // C_instance2.beRepaired(20);

    // std::cout << "------------------------------------------" << std::endl;

    // ScavTrap S_instance0;
    // ScavTrap S_instance1("scavtrap");
    // ScavTrap S_instance2(S_instance1);
    // S_instance2.guardGate();

    // std::cout << "------------------------------------------" << std::endl;
    
    // FragTrap instance0;
    // FragTrap instance1("fragtrap");
    // FragTrap instance2(instance1);
    // instance2.highFivesGuys();

    
    std::cout << "------------------------------------------" << std::endl;
    // DiamondTrap instance0;
    DiamondTrap D_instance1("diamondtrap");
    DiamondTrap diamondtrap(D_instance1);
    diamondtrap.whoAmI();
    // std::string target = "Scavtrap";
    // D_instance1.attack(target);
}