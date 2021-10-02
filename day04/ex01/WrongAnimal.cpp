/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:47:47 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/02 18:17:23 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	log("WrongAnimal Default Constructor");
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	log("WrongAnimal Copy Constructor");
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	log("WrongAnimal Assignation operator");
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	log("Random WrongAnimal Voice");
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	log("WrongAnimal Destructor");
}
