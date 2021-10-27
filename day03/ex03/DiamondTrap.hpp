/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:57:27 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/27 18:43:07 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMOND_TRAP_
# define _DIAMOND_TRAP_

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string Name;
    public :
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &rhs);
        DiamondTrap(std::string name);
        void whoAmI();
};

#endif