# ifndef _MAIN_HPP_
#define  _MAIN_HPP_

#include <iostream>

# define log(x) std::cout << x << std::endl

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual void makeSound( void ) const = 0;
        virtual std::string getType() const;
        virtual ~Animal();
};

#endif