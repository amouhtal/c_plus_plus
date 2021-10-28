/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:46:45 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/28 18:05:48 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10


int main(int, char **)
{
	Array<int> numbers(MAX_VAL);

	int *mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i]  = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "numbers : 	";
	
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = i;
		std::cout << numbers[i];
		if (i < MAX_VAL - 1)
			std::cout << ", ";
	}
	std::cout << "\n";
	Array<int> copy_numbers(numbers);
	std::cout << "copy_numbers : ";

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << copy_numbers[i];
		if (i < MAX_VAL - 1)
			std::cout << ", ";
	}
	std::cout << "\n";
	delete[] mirror;
	return 0;
}
