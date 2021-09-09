/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:36:39 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/07 16:36:39 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include<iostream>


class Weapon
{
    std::string type;
    public :
        Weapon(std::string type);
        std::string const    &getType();
        void            setType(std::string type);
};

#endif