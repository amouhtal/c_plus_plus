/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:33:53 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/21 16:24:33 by amouhtal         ###   ########.fr       */
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
		Fixed	&operator=(const Fixed &other);
        bool 	operator>(const Fixed &other)  const;
        bool  	operator<(const Fixed &other)  const;
        bool 	operator>=(const Fixed &other) const;
        bool	operator<=(const Fixed &other) const;
        bool 	operator==(const Fixed &other) const;
        bool 	operator!=(const Fixed &other) const;

		Fixed operator+(const Fixed &rhs);
		Fixed operator-(const Fixed &rhs);
		Fixed operator*(const Fixed &rhs);
		Fixed operator/(const Fixed &rhs);
		Fixed &operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed &max( Fixed &ref1,  Fixed &ref2);
        static const Fixed &max( const Fixed &ref1, const Fixed &ref2);
        static const Fixed &min( const Fixed &ref1, const Fixed &ref2);
        static Fixed &min( Fixed &ref1,  Fixed &ref2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
