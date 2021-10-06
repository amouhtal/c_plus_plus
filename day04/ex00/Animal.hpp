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
        virtual ~Animal();

        virtual std::string getType() const;

        virtual void makeSound( void ) const;
};

#endif