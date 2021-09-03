/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:26:06 by amouhtal          #+#    #+#             */
/*   Updated: 2021/08/30 11:26:06 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_CLASS_HPP
#define __CONTACT_CLASS_HPP
#include <iomanip>

class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public :
        void setFirst_Name(std::string value);
        void setLast_Name(std::string value);
        void setNick_Name(std::string value);
        void setPhone_Number(std::string value);
        void setDarkest_secret(std::string value);

        std::string getFirst_Name(void);
        std::string getLast_Name(void);
        std::string getNick_Name(void);
        std::string getPhone_Number(void);
        std::string getDarkest_secret(void);
};


std::string ft_claim(std::string str);

#endif