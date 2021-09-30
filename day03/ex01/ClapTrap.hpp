/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:55:13 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/30 17:55:15 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Clap_TRAP_HPP
#define _Clap_TRAP_HPP

#include <iostream>

#define GREEN   "\033[32m"
#define BOLDGREEN   "\033[1m\033[32m"
class ClapTrap
{
    protected :
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;
    public :
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &rhs);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif