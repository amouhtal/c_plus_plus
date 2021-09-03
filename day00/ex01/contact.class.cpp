/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:25:59 by amouhtal          #+#    #+#             */
/*   Updated: 2021/08/30 11:25:59 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

std::string Contact::getFirst_Name(void)
{
    return (this->first_name);
}

std::string Contact::getLast_Name(void)
{
    return (this->last_name);
}

std::string Contact::getNick_Name(void)
{
    return (this->nickname);
}

std::string Contact::getPhone_Number(void)
{
    return (this->phone_number);
}

std::string Contact::getDarkest_secret(void)
{
    return (this->darkest_secret);
}

void    Contact::setFirst_Name(std::string name)
{
    this->first_name = name;
    return ;
}

void    Contact::setLast_Name(std::string name)
{
    this->last_name = name;
    return ;
}

void    Contact::setNick_Name(std::string name)
{
    this->nickname = name;
    return ;
}

void    Contact::setPhone_Number(std::string name)
{
    this->phone_number = name;
    return ;
}

void    Contact::setDarkest_secret(std::string name)
{
    this->darkest_secret = name;
    return ;
}
