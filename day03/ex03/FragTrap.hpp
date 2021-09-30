/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:57:38 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/30 17:57:39 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap();
        ~FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &rhs);
        void highFivesGuys(void);
};

#endif