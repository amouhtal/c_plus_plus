/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:26:12 by amouhtal          #+#    #+#             */
/*   Updated: 2021/08/30 11:26:12 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook()
{
    return ;
}
PhoneBook::~PhoneBook()
{
    return ;
}

void    PhoneBook::setContact(Contact contat, int index)
{
    this->contats[index] = contat;
}

Contact *PhoneBook::getContact()
{
    return this->contats;
}

std::string ft_lenght(std::string str)
{
    unsigned int i;

    i = 10;
    if (str.length() > 10)
    {
        str[9] = '.';
        while (i < str.length())
            str[i++] = '\0';
    }
    return (str);
}

std::string ft_trim(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\t')
            str[i] = ' ';
        i++;
    }
    i = 0;
    while (!str.empty() && isspace(str.front()))
        str.erase(0, 1);
    while (!str.empty() && isspace(str.back()))
        str.erase(str.size() - 1, 1);
    i = 0;
    while (str[i])
    {
        if ( str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }else
            i++;
    }
    return (str);
}

Contact PhoneBook::add_contact()
{
    Contact new_contact;
    std::string buff;
    
    std::cout << "First Name : " << std::endl ;
    std::getline(std::cin, buff);
    new_contact.setFirst_Name(buff);
    std::cout << "Last Name : " << std::endl ;
    std::getline(std::cin, buff);
    new_contact.setLast_Name(buff);
    std::cout << "Nick Name : " << std::endl ;
    std::getline(std::cin, buff);
    new_contact.setNick_Name(buff);
    std::cout << "Phone number : " << std::endl ;
    std::getline(std::cin, buff);
    new_contact.setPhone_Number(buff);
    std::cout << "Darkest Secret : " << std::endl ;
    std::getline(std::cin, buff);
    new_contact.setDarkest_secret(buff);
    return new_contact;
}

void print_info(std::string first_name, std::string last_name, std::string nick_name)
{
    int i;

    i = 0;
    std::cout << std::setw(10) << first_name;
    std::cout << "|";
    std::cout << std::setw(10) << last_name;
    std::cout << "|";
    std::cout << std::setw(10) << nick_name << std::endl;
}

void show_contact(Contact contacts[], int contact_index)
{
    std::string first_name;
    std::string last_name;
    std::string  nick_name;
    std::string phone_number;
    std::string darkest_secret;
    int index;
    int limit;
    std::string input;

    while (1)
    {
        std::cout << "Enter the index of a contact: ";
        std::getline(std::cin , input);
        index = std::atoi(input.c_str());
        std::cout << std::endl;
        index -= 1;
        limit = contact_index > 7 ? 7 : contact_index;
        if ((index > -1 && limit < 8) && index < contact_index && isdigit(input[0]))
        {
            first_name = contacts[index].getFirst_Name();
            first_name = ft_trim(first_name);
            last_name = contacts[index].getLast_Name();
            last_name = ft_trim(last_name);
            nick_name = contacts[index].getNick_Name();
            nick_name = ft_trim(nick_name);
            phone_number = contacts[index].getPhone_Number();
            phone_number = ft_trim(phone_number);
            darkest_secret = contacts[index].getDarkest_secret();
            darkest_secret = ft_trim(darkest_secret);
            std::cout << "First Name : " << first_name << " " << std::endl;
            std::cout << "Last  Name : " << last_name <<  " " << std::endl;
            std::cout << "Nick  Name : " << nick_name <<  " " << std::endl;
            std::cout << "Phone Number : " << phone_number <<" " << std::endl;
            std::cout << "Darkest Secret : " << darkest_secret <<" " << std::endl;
            break;
        }else
        {
            std::cout << "[ERROR] Index" << std::endl;
        }
    }
}

int search(Contact contacts[], int contact_index)
{
    int i;
    int nbr_of_contact;
    std::string first_name;
    std::string last_name;
    std::string  nick_name;
    std::string phone_number;
    std::string darkest_secret;
    i = 0;
    nbr_of_contact = 8;
    if (contact_index < 8)
        nbr_of_contact = contact_index;
    std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl ;
    if (nbr_of_contact != 0)
    {    
        while (i < nbr_of_contact )
        {
            first_name = contacts[i].getFirst_Name();
            last_name = contacts[i].getLast_Name();
            nick_name = contacts[i].getNick_Name();
            first_name = ft_trim(first_name);
            first_name = ft_lenght(first_name);
            last_name = ft_trim(last_name);
            last_name = ft_lenght(last_name);
            nick_name = ft_trim(nick_name);
            nick_name = ft_lenght(nick_name);
            std::cout << "         "<< i + 1 <<"|";
            print_info(first_name, last_name, nick_name);   
            i++;
        }
        return (1);
    }
    return (0);
}
