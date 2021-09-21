/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:45:44 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/17 16:46:39 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

#include <iostream>
#include <cmath>
class Fixed
{
    private :
        int _value;
        static const int faction_bits;
    public :
        Fixed();
        ~Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed &other);
        Fixed  &operator=(const Fixed &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const; 
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);
#endif