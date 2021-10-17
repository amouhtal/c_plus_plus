/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:06:48 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/16 18:17:29 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat school("school", 15);
		std::cout << school << std::endl;
		school.incGrade();
		std::cout << school << std::endl;
		school.decGrade();
		std::cout << school << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat school("school", -5);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat school("school", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl ;
	}

	try
	{
		Bureaucrat school("school", 1);
		school.incGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

		try
	{
		Bureaucrat school("school", 150);
		school.decGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what()<< std::endl;
	}
}