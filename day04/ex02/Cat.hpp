# ifndef _CAT_HPP_
#define _CAT_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        virtual ~Cat();
        std::string getType() const;
        void setbrain(std::string c);
        void getbrain();
        void makeSound( void)  const;
};

#endif