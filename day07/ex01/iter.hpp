/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:46:29 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/28 18:01:28 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename T>
void iter(T *adr, int lenght, void(fun)(const T&))
{
	for (int i = 0; i < lenght; i++)
	{
		fun (adr[i]);
	}
}

template <typename T>
void ft_print(T const &a)
{
	std::cout << a << std::endl;
}

#endif