/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:46:19 by moharras          #+#    #+#             */
/*   Updated: 2021/09/15 19:11:32 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Convert.hpp"

// int	checkInfNan(std::string &str)
// {
// 	return (str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff" ||
// 	str == "nan" || str == "nanf");
// }

int	hundleError(int erno)
{
	if (erno == 1)
	{
		std::cout << "Please enter an argument" << std::endl;
		return (-1);
	}
	else if (erno == 2)
	{
		std::cout << "Invalid input" << std::endl;
		return (-1);
	}
	return (0);
}

// int		is_numeric(std::string str)
// {
// 	for (size_t i = 0; i < str.length(); i++)
// 	{
// 		if (!isdigit(str[i]))
// 			return (0);
// 	}
// 	return (1);
		
// }

// void	trim(std::string &str)
// {
// 	while (!str.empty() && isspace(str.front()))
// 		str.erase(0, 1);
// 	while (!str.empty() && isspace(str.back()))
// 		str.erase(str.size() - 1, 1);
// }

// void	printError(std::string const mess)
// {
// 	std::cout << mess << std::endl;
// }

// void	checkForChar(std::string	str)
// {
// 	if (!is_numeric(str))
// 	{
// 		std::cout << "char : impossible" << std::endl;
// 		return ;
// 	}
// 	try
// 	{
		
// 		double c = std::stoi(str);
// 		if (c < 32 && c >= 127)
// 		{
// 			printError("char : Non displayable");
// 			return ;
// 		}
// 		else
// 			std::cout << "char : '" << static_cast<char>(c) << '\'' << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// }

// void	findType(std::string &str)
// {
// 	std::stringstream *s;
// 	size_t length = str.length();

// 	if (length == 1 && !std::isdigit(str[0]))
// 	{
		
// 	}
	
	
// }

int main(int ac, char **av)
{
	if (ac != 2)
		return(hundleError(1));
	std::string str = static_cast<std::string>(av[1]);
	// trim(str);
	// if (str.length() == 0)
	// 	return(hundleError(2));
	// checkForChar(str);
	try
	{
		Convert conv;
		conv.setav(av[1]);
		conv.findType(str);
		conv.stringInType(str);
		conv.print(str);
		std::cout << conv.getType() << std::endl;	
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}