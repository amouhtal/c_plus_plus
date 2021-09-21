/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:46:29 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/21 16:25:29 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::faction_bits = 8;

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed  &Fixed::operator=(const Fixed &other)
{
    _value = other._value;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
    out << rhs.toFloat();
    return out;
}

Fixed::Fixed(const int nbr)
{
    _value = roundf(nbr << Fixed::faction_bits);
}

Fixed::Fixed(const float nbr)
{
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

bool	Fixed::operator>(const Fixed &other) const
{
	return (_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed &rhs)
{
	Fixed Addition;

	Addition._value = this->_value + rhs._value;
	return (Addition);
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	Fixed Multiply;
	Multiply._value = this->_value * rhs._value;
	Multiply._value = Multiply.toFloat();
	return (Multiply);		
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	Fixed Substraction;

	Substraction._value = this->_value - rhs._value;
	return (Substraction);
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	Fixed Division;

	Division = this->toFloat() / rhs.toFloat();
	return (Division);
}

Fixed &Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed other;
	other = *this;
	++*this;
	return other;
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed other;
	other = *this;
	--*this;
	return other;
}

const Fixed &Fixed::max( const Fixed &ref1, const Fixed &ref2)
{
	return ((Fixed)ref1 > ref2  ? ref1 : ref2);
}

Fixed &Fixed::max( Fixed &ref1,  Fixed &ref2)
{
	return (ref1 > ref2 ? ref1 : ref2); 	
}

const Fixed  &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	return (ref1 < ref2 ? ref1 : ref2);
}

Fixed &Fixed::min( Fixed &ref1,  Fixed &ref2)
{
	return (ref1 < ref2 ? ref1 : ref2); 	
}
