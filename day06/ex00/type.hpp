/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:25:16 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/20 15:39:24 by amouhtal         ###   ########.fr       */
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
	void	printChar( void )		const;
	void	printInt( void )		const;
	void	printFloat( void )	const;
	void	printDouble( void )	const;

	Type(const Type &);
	Type &operator=(const Type &);
	~Type();
};

#endif