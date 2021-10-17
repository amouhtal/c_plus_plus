/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:25:16 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/17 18:59:55 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TYPE_HPP__
# define __TYPE_HPP__

# include <iostream>

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
	Type();
	void	parsing(std::string &Type);
	Type(const Type &);
	Type &operator=(const Type &);
	~Type();
};


#endif