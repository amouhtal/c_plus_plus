/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:07:17 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/15 17:07:25 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form ta("ta1", 50, 10);
		Bureaucrat school("school", 55);
		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	try
	{
		Form ta("ta1", 50, 10);
		Bureaucrat school("school", 49);
		school.signForm(ta);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
}