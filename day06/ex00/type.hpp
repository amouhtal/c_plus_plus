/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:25:16 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/18 18:26:27 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TYPE_HPP__
# define __TYPE_HPP__

# include <iostream>
# include <cstdlib>

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
public :
	std::string GetType() const;
	Type();
	void	parsing(std::string &Type);
	void	SetTypes();
	void	printTypes()	const;
	void	printChar()		const;
	void	printInt()		const;
	void	printFloat()	const;
	void	printDouble()	const;

	Type(const Type &);
	Type &operator=(const Type &);
	~Type();
};

#endif