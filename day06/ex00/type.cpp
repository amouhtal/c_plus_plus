/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:06 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/23 14:38:26 by amouhtal         ###   ########.fr       */
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
	size_t i = 0;
	size_t i2 = 0;

	s1 = std::to_string(nbr);
	while (s2[i2] == '0')
		i2++;
	
	while (i < s2.length())
	{
		if (s2[i2] == '.')
			break;
		if (s1[i] != s2[i2])
			return (false);
		i++;
		i2++;
	}
	// for (size_t i = 0; (i < s2.length() - 1); i++)
	// {
	// 	if (s2[i] == '.')
	// 		break;
	// 	if (s1[i] != s2[i])
	// 		return (false);
	// }
	return (true);
}

bool isValid(std::string str, size_t start)
{

	for (; start < str.length() - 1; start++)
	{
		if (!std::isdigit(str[start]) && str[start] != '.')
		{
			return (false);
		}
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

int isPoint(std::string str, size_t start)
{
	bool point;

	point = false;
	for (; start < str.length() - 1; start++)
	{
		if ((point && str[start] == '.'))
		{
			return 2;
		}
		if (str[start] == '.')
			point = true;
	}
	if (point ^ (str[str.length() - 1] == '.'))
		return 1;
	return 0;
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
	if ((isPoint(Type, i) == 1) && isValid(Type, i) && Type[Tsize - 1] == 'f')
		this->type = "float";
	else if (((isPoint(Type, i) == 1) && isValid(Type, i)) && (std::isdigit(Type[Tsize - 1]) || (Type[Tsize - 1] == '.')))
		this->type = "double";
	else if ((isPoint(Type, i) == 2) || !(isValid(Type, i)) || (!std::isdigit(Type[Tsize - 1])))
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

		if (Timpossible)
		{
			Tfloat = static_cast<float>(std::atof(str.c_str()));
			Tdouble = static_cast<double>(std::atof(str.c_str()));
		}
		if (!std::isprint(Tint))
			Tindisponible = true;
	}
	else if (this->type == "float")
	{
		Tfloat = std::atof(str.c_str());
		if (!maxInt(Tfloat, value))
			Timpossible = true;
		Tint = static_cast<int>(Tfloat);

		Tdouble = static_cast<double>(Tfloat);
		Tchar = static_cast<char>(Tfloat);

		if (!std::isprint(Tint))
			Tindisponible = true;
	}
	else if (this->type == "double")
	{
		Tdouble = atof(str.c_str());
		if (!maxInt(Tdouble, value))
			Timpossible = true;
		Tfloat = static_cast<float>(Tdouble);
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
	if (Timpossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << Tint << std::endl;
	Timpossible = false;
}

void Type::printFloat()
{

	std::cout << "float: " << std::fixed << std::setprecision(precesion) << Tfloat << 'f' << std::endl;
}

void Type::printDouble()
{

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

Type::Type(const Type &other)
{
	*this = other;
}

Type &Type::operator=(const Type &rhs)
{
	if (this != &rhs)
	{
		this->Tint = rhs.Tint;
		this->Tchar = rhs.Tchar;
		this->Tfloat = rhs.Tfloat;
		this->Tdouble = rhs.Tdouble;
		this->Timpossible = rhs.Timpossible;
		this->Tindisponible = rhs.Tindisponible;
		this->type = rhs.type;
		this->value = rhs.value;
		this->precesion = rhs.precesion;
	}
	return (*this);
}

Type::~Type()
{
}