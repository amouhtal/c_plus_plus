/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:06 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/22 18:46:03 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.hpp"

Type::Type()
{
	type = "";
	Timpossible = false;
	Tindisponible = false;
}

bool maxInt(int nbr, std::string s2)
{
	std::string s1;

	s1 = std::to_string(nbr);
	for (size_t i = 0; (i < s2.length() - 1); i++)
	{
		if (s1[i] != s2[i])
			return (false);
	}
	return (true);
}

bool isValid(std::string str, size_t start)
{
	for (; start < str.length() - 1; start++)
	{
		if (!std::isdigit(str[start]) && str[start] != '.')
			return (false);
	}
	return (true);
}

void Type::setValue(std::string str)
{
	value = str;
}

std::string Type::getValue() const
{
	return value;
}

bool isPoint(std::string str, size_t start)
{
	bool point;

	point = false;
	for (; start < str.length() - 1; start++)
	{
		if ((point && str[start] == '.'))
		{
			return false;
		}
		if (str[start] == '.')
			point = true;
	}
	if (point ^ (str[str.length() - 1] == '.'))
		return true;
	return false;
}

void Type::parsing(std::string &Type)
{
	size_t Tsize;
	size_t i;

	Tsize = Type.length();
	i = 0;
	if (Tsize == 1 && !std::isdigit(Type[i]))
	{
		this->type = "char";
		return;
	}
	else if (Type == "+inff" || Type == "-inff" || Type == "nanf")
	{
		this->type = "float";
		Timpossible = true;
		return;
	}
	else if (Type == "+inf" || Type == "-inf" || Type == "nan")
	{
		this->type = "double";
		Timpossible = true;
		return;
	}
	if (Type[i] == '+' || Type[i] == '-')
		i++;
	this->type = "int";
	if (isPoint(Type, i) && isValid(Type, i) && Type[Tsize - 1] == 'f')
		this->type = "float";
	else if ((isPoint(Type, i) && isValid(Type, i)) && (std::isdigit(Type[Tsize - 1]) || (Type[Tsize - 1] == '.')))
		this->type = "double";
	else if ((!isPoint(Type, i) && !isValid(Type, i)) || (!std::isdigit(Type[Tsize - 1])))
		this->type = "Invalid Type";

	return;
}

void Type::SetTypes()
{
	std::string str = getValue();
	if (this->type == "char")
	{
		Tchar = str[0];
		Tint = static_cast<int>(Tchar);
		Tfloat = static_cast<float>(Tchar);
		Tdouble = static_cast<double>(Tchar);
		if (!std::isprint(Tint))
			Tindisponible = true;
	}
	else if (this->type == "int")
	{
		Tint = std::atoi(str.c_str());
		if (!maxInt(Tint, value))
			Timpossible = true;
		Tchar = static_cast<char>(Tint);
		Tfloat = static_cast<float>(Tint);
		Tdouble = static_cast<double>(Tint);
		if (!std::isprint(Tint))
			Tindisponible = true;
	}
	else if (this->type == "float")
	{
		Tfloat = std::atof(str.c_str());
		Tint = static_cast<int>(Tfloat);

		Tdouble = static_cast<double>(Tfloat);
		Tchar = static_cast<char>(Tfloat);

		if (!std::isprint(Tint))
			Tindisponible = true;
	}
	else if (this->type == "double")
	{
		Tdouble = atof(str.c_str());
		Tfloat = static_cast<float>(Tdouble);
		printf("---> %f\n", static_cast<float>(4222222.224545));
		Tint = static_cast<int>(Tdouble);
		Tchar = static_cast<char>(Tdouble);
		if (!std::isprint(Tint))
			Tindisponible = true;
	}
}

void Type::printChar()
{
	if (Timpossible)
		std::cout << "char: impossible" << std::endl;
	else if (Tindisponible)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << Tchar << "'" << std::endl;
}

void Type::printInt()
{
	// if (!maxInt(Tint, value))
	// 	Timpossible = true;
	if (Timpossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << Tint << std::endl;
	Timpossible = false;
}

void Type::printFloat()
{
	// if (!maxInt(Tint, value))
	// 	Timpossible = true;
	// if (Timpossible && type == "int")
	// 	std::cout << "float: impossible" << std::endl;
	// else
	std::cout << "float: " << std::fixed << std::setprecision(precesion) << Tfloat << 'f' << std::endl;
}

void Type::printDouble()
{
	// if (!maxInt(Tint, value))
	// 	Timpossible = true;
	// if (Timpossible && type == "int")
	// 	std::cout << "double: impossible" << std::endl;
	// else
	std::cout << "double: " << std::fixed << std::setprecision(precesion) << Tdouble << std::endl;
}

void Type::setPrecision(void)
{
	if (type == "double" || type == "float")
	{
		this->precesion = value.find(".");
		this->precesion = (value.length() - this->precesion - 1);
		if (type == "float" && !(value.find(".") == value.find("f") - 1))
			this->precesion--;
		if (value.find(".") == value.length() - 1)
			this->precesion++;
	}
	else
		this->precesion = 1;
}

void Type::printTypes()
{
	setPrecision();
	printChar();
	printInt();
	printFloat();
	printDouble();
}

std::string Type::GetType() const
{
	return (this->type);
}

Type::~Type()
{
}