/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:18:42 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/07 15:38:20 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	log("Animal  default constructor");
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	// log("Animal  default copy constructor");
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return *this;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	log("Animal deconstructor");
}
