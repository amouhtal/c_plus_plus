/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:42:43 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/01 14:42:43 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{    
    PhoneBook instance;
    instance.index = 0;
    while (1)
    {
        std::cout << "                         .-'''-. " << std::endl ;
        std::cout << "                        / .===. \\ " << std::endl ;
        std::cout << "                        \\/ 6 6 \\/. " << std::endl ;
        std::cout << "                        ( \\___/ ) " << std::endl ;
        std::cout << "   _________________ooo__\\_____/_______________________" << std::endl ;
        std::cout << "  /                                                    \\" << std::endl ;
        std::cout << "  |                   > ADD                            | " << std::endl ;
        std::cout << "  |                   > SEARCH                         |" << std::endl ;
        std::cout << "  |                   > EXIT                           |" << std::endl ;
        std::cout << "  \\______________________________ooo___________________/" << std::endl ;
        std::cout << "                        |  |  |" << std::endl ;
        std::cout << "                        |_ | _|"<< std::endl ;
        std::cout << "                        |  |  |" << std::endl ;
        std::cout << "                        |__|__|" << std::endl ;
        std::cout << "                        /-'Y'-\"" << std::endl ;
        std::cout << "                        (__/ \\__)" << std::endl ;

        std::cout << "Enter an options : "  ;
        std::getline(std::cin, instance.option);
        std::cout << std::endl;
        if (instance.option == "ADD" ||  instance.option == "add")
        {
            instance.setContact(instance.add_contact(), instance.index % 8);
            instance.index++;
        }
        else if (instance.option == "SEARCH" || instance.option == "search")
        {
            if (search(instance.getContact(), instance.index) != 0)
                show_contact(instance.getContact(), instance.index);
        }
        else if(instance.option == "EXIT" || instance.option == "exit")
        {
            break ;
        }
        else
        {
            std::cout << "wrong option" << std::endl ;
        }
    }
    return (0);
}
