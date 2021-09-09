/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:20:15 by amouhtal          #+#    #+#             */
/*   Updated: 2021/09/09 12:20:15 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public :
        void complain( std::string level );

};