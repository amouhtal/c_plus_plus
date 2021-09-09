/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:41:12 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/09 14:41:12 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int main(int ac, char **av)
{
	int level;
	std::string arg;
	Karen instance;

	level = 0;
	if (ac == 2)
	{
		arg = av[1];
		if (arg == "DEBUG")
			level = 1;
		if (arg == "INFO")
			level = 2;
		if (arg == "WARNING")
			level = 3;
		if (arg == "ERROR")
			level = 4;
	}
	switch (level)
	{
		case 0:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
		case 1:
		{
			instance.complain("debug");
			level++;
		}
		case 2:
		{
			instance.complain("info");
			level++;
		}
		case 3:
		{
			instance.complain("warning");
			level++;
		}
		case 4:
		{
			instance.complain("error");
		}
	}
    return (0);
}
