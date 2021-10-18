/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:19:56 by moharras          #+#    #+#             */
/*   Updated: 2021/10/18 16:56:36 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Convert.hpp"
#include <iomanip>
Convert::Convert()
{
	this->flagImpossible = 0;
	this->flagNonDisplayable = 0;
}

Convert::~Convert()
{
}

std::string const &Convert::getType() const
{
	return (this->type);
}

void Convert::stringInType(std::string &str)
{
	if (this->type == "float")
	{
		this->vFloat = std::atof(_av);
		this->vDouble = static_cast<double>(this->vFloat);
		if (this->flagImpossible)
			return ;
		this->vInt = static_cast<int>(this->vFloat);
		if (this->flagNonDisplayable)
			return ;
		this->vChar = static_cast<char>(this->vFloat);
		if (!std::isprint(this->vChar))
			this->flagNonDisplayable = 1;
	}
	else if (this->type == "double")
	{
		this->vDouble = std::atof(_av);
		this->vFloat = static_cast<float>(this->vDouble);
		if (this->flagImpossible)
			return;
		this->vInt = static_cast<int>(this->vDouble);
		if (this->flagNonDisplayable)
			return;
		this->vChar = static_cast<char>(this->vDouble);
		if (!std::isprint(this->vChar))
			this->flagNonDisplayable = 1;
	}
	else if (this->type == "int")
	{
		try
		{
			this->vInt = std::stoi(str);
		}
		catch (const std::exception &e)
		{
			this->flagImpossible = 1;
		}
		this->vDouble = static_cast<double>(this->vInt);
		this->vFloat = static_cast<float>(this->vInt);
		this->vChar = static_cast<char>(this->vInt);
		if (!std::isprint(this->vChar))
			this->flagNonDisplayable = 1;
	}
	else if (this->type == "InvalidType")
	{
		throw Convert::invalidTypeException();
		std::cout << "Do something here" << std::endl;
	}
	else if (this->type == "char")
	{
		this->vChar = str[0];
		if (!std::isprint(this->vChar))
			this->flagNonDisplayable = 1;
		this->vInt = static_cast<int>(this->vChar);
		this->vDouble = static_cast<double>(this->vChar);
		this->vFloat = static_cast<float>(this->vChar);
	}
}

const char *Convert::invalidTypeException::what() const throw()
{
	return ("Invalid argument");
}

void Convert::findType(std::string &str)
{
	size_t length = str.length();
	size_t i = 0;
	if (length == 1 && !std::isdigit(str[i]))
	{
		this->type = "char";
		return;
	}
	else if (str == "+inff" || str == "-inff" || str == "nanf")
	{
		this->type = "float";
		this->flagImpossible = 1;
		return;
	}
	else if (str == "+inf" || str == "-inf" || str == "nan")
	{
		this->type = "double";
		this->flagImpossible = 1;
		return;
	}
	if (str[i] == '+' || str[i] == '-')
		i++;
	this->type = "int";
	for (; i < length; i++)
	{
		if (str[i] == '.' && this->type != "double")
		{
			this->type = "double";
		}
		else if (str[i] == 'e' && i < length - 1 && (str[i + 1] == '+' || str[i + 1] == '-' || std::isdigit(str[i + 1])))
		{
			i++;
			this->type = "double";
		}
		else if (this->type == "double" && i == length - 1 && str[i] == 'f')
		{
			this->type = "float";
		}
		else if (!std::isdigit(str[i]))
		{
			this->type = "InvalidType";
			break;
		}
	}
}

void Convert::printChar() const
{
	if (this->flagImpossible)
		std::cout << "char: Impossible" << std::endl;
	else if (this->flagNonDisplayable)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->vChar << std::endl;
}

void Convert::printInt() const
{
	if (this->flagImpossible)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << this->vInt << std::endl;
}

void Convert::printDouble() const
{
	std::cout << "double: " << this->vDouble << std::endl;
}

void Convert::printFloat() const
{
	std::cout << "float:  " << std::fixed << std::setprecision(this->index) << this->vFloat << "f" << std::endl;
}

void Convert::print(std::string &str)
{
	if (this->type == "double" || this->type == "float")
	{
		index = str.find(".");
		if (index != std::string::npos)
		{
			index = str.length() - index - 1;
			if (this->type == "float")
				index--;
		}
	}
	else
		this->index = 1;
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void Convert::setav(char *av)
{
	this->_av = av;
}
