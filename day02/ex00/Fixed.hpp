/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:46:00 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/21 17:13:37 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
#define __FIXED__

#include <iostream>

class Fixed
{
    private :
        int _value;
        static const int faction_bits;
    public :
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed  &operator=(const Fixed &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif