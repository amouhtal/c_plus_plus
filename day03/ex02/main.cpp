/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:56:25 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/01 11:41:32 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
    FragTrap instance0;
    FragTrap instance1("fragtrap");
    FragTrap instance2(instance1);
    instance2.attack("target");
    instance2.takeDamage(50);
    instance2.beRepaired(40);
    instance2.highFivesGuys();

    // std::cout << "------------------------------------------" << std::endl;
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

    
}