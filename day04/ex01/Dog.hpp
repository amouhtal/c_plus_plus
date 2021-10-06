/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:13:42 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/06 11:57:57 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _DOG_HPP_
#define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
    public :
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        virtual ~Dog();
        std::string getType() const;
        void setbrain(char c);
        void getbrain();
        void makeSound( void)  const;
};

#endif