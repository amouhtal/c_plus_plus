/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:06:48 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/15 17:06:49 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat school("school", 15);
		std::cout << school.getGrade() << std::endl;
		 school.incGrade();
		std::cout << school.getGrade() << std::endl;
		school.decGrade();
		std::cout << school.getGrade() << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
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
		std::cerr << e.what();
	}
}