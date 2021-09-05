/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:48:50 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/01 15:48:50 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#include <iostream>
#include <string>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie();
        ~Zombie();
        std::string getZombie(void);
        void setZombie(std::string name);
        void announce( void ) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif