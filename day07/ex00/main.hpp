/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:16:38 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/26 16:16:40 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN__HPP
# define __MAIN__HPP
# include <iostream>

template <typename Tswap>
void swap(Tswap &nbr1, Tswap &nbr2)
{
	Tswap temp;
	
	temp = nbr1;
	nbr1 = nbr2;
	nbr2 = temp;
}

template <typename Tmax>
Tmax max(Tmax const nbr1, Tmax const nbr2)
{
	return (nbr1 > nbr2 ? nbr1 : nbr2);
}

template <typename Tmin>
Tmin min(Tmin const nbr1, Tmin const nbr2)
{
	return (nbr1 < nbr2 ? nbr1 : nbr2);
}

#endif