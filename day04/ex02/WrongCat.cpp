/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:00:04 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/02 18:07:08 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	log("WrongCat Default Constructor");
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	log("WrongCat Copy Constructor");
	*this = other;
}

WrongCat WrongCat::operator=(const WrongCat &rhs)
{
	log("WrongCat Operator D'assignation");
	this->type = rhs.type;
	return (*this);
}

std::string WrongCat::getType() const
{
	return (this->type);
}

void WrongCat::makeSound( void ) const
{
	log("WrongCat Sound");
}

WrongCat::~WrongCat()
{
	log("WrongCat Destructor");
}