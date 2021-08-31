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

    i = 0;
    while (av[i])
    {
        while (av[i][j])
        {
            std::cout << toupper(av[i][j]);
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << " \n";
    return (0);
}
