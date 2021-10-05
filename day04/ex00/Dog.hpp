/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:13:42 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/05 17:54:33 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _DOG_HPP_
#define _DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        virtual ~Dog();
        std::string getType() const;
        void makeSound( void)  const;
};

#endif