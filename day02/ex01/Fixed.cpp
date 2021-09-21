/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:45:37 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/17 16:45:39 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::faction_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed  &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignation operator called\n";
    _value = other._value;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->_value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
    out << rhs.toFloat();
    return out;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called\n";
    _value = roundf(nbr << Fixed::faction_bits);
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called\n";
    _value = roundf(nbr * (1 << Fixed::faction_bits));
}

float Fixed::toFloat(void) const
{
    return (float)((float)_value  / (float)(1 << Fixed::faction_bits));
}

int Fixed::toInt(void) const
{
    return (int)(_value  >> Fixed::faction_bits);
}

