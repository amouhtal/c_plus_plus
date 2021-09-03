/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:26:17 by amouhtal          #+#    #+#             */
/*   Updated: 2021/08/30 11:26:17 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_CLASS_HPP
#define __PHONEBOOK_CLASS_HPP
#include <iostream>
#include "contact.class.hpp"

std::string ft_trim(std::string str);
std::string ft_lenght(std::string str);

class PhoneBook
{
    private :
        Contact contats[8];
    public :
        PhoneBook();
        ~PhoneBook();
        Contact     *getContact();
        void        setContact(Contact contat, int index);
        int         index;
        std::string option;
        Contact add_contact();
};
int  search(Contact contacts[], int contact_index);
void show_contact(Contact contacts[], int contact_index);
#endif