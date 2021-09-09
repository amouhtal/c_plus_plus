/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:19:37 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/09 12:19:37 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen instance;
    instance.complain("DEBUG");
    instance.complain("INFO");
    instance.complain("WARNING");
    instance.complain("ERROR");
    return (0);
}