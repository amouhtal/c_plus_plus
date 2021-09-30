/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:57:12 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/30 17:57:13 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _Clap_TRAP_HPP
#define _Clap_TRAP_HPP

#include <iostream>

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