/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:25:16 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/22 17:09:37 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TYPE_HPP__
# define __TYPE_HPP__

# include <iostream>
# include <cstdlib>
#include <iomanip>


class Type
{
private :
	int 		Tint;
	char		Tchar;
	float 		Tfloat;
	double		Tdouble;
	bool		Timpossible;
	bool		Tindisponible;
	std::string type;
	std::string	value;
	int			precesion;
public :
	std::string GetType() const;
	std::string getValue() const;
	Type();
	void	setValue(std::string );
	void	setPrecision( void );
	void	parsing(std::string &Type);
	void	SetTypes( void );
	void	printTypes( void )	;
	void	printChar( void )		;
	void	printInt( void )		;
	void	printFloat( void )	;
	void	printDouble( void )	;

	Type(const Type &);
	Type &operator=(const Type &);
	~Type();
};

#endif