/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:06 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/18 18:28:31 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.hpp"

Type::Type()
{
	type = "";
}

bool isValid(std::string str, int start)
{

	for (; start < str.length() - 1; start++)
	{
		if (!std::isdigit(str[start]) && str[start] != '.')
			return false;
	}
	return true;
}

bool isPoint(std::string str, int start)
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
	std::string str = this->GetType();
	if (this->type == "char")
	{
		Tchar = str[0];
		Tint = static_cast<int>(str[0]);
		Tfloat = static_cast<float>(str[0]);
		Tdouble = static_cast<double>(str[0]);

		if (!std::isprint(Tchar))
			Timpossible = true;
	}
	else if (this->type == "int")
	{
		Tint = std::atoi(str.c_str());
		Tchar = static_cast<char>(Tint);
		Tfloat = static_cast<float>(Tint);
		Tdouble = static_cast<double>(Tint);

		if (!std::isprint(Tchar))
			Timpossible = true;
	}
	else if (this->type == "float")
	{
		Tfloat = std::atof(str.c_str());
		Tint = static_cast<int>(Tfloat);
		Tdouble = static_cast<double>(Tdouble);
		Tchar = static_cast<char>(Tchar);

		if (!std::isprint(Tchar))
			Timpossible = true;
	}
	else if (this->type == "double")
	{
		Tdouble = atof(str.c_str());
		Tfloat = static_cast<float>(Tdouble);
		Tint = static_cast<float>(Tdouble);
		Tchar = static_cast<float>(Tdouble);
		if (!std::isprint(Tchar))
			Timpossible = true;
	}
}

void	Type::printChar()	const
{
			
}

void	Type::printInt()	const
{
		
}

void	Type::printFloat()	const
{
		
}

void	Type::printDouble()	const
{
		
}

void	Type::printTypes() const
{
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