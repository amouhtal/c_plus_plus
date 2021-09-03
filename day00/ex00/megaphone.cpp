/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:57:52 by amouhtal          #+#    #+#             */
/*   Updated: 2021/08/30 10:57:52 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            putchar(toupper(av[i][j]));
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << " \n";
    return (0);
}