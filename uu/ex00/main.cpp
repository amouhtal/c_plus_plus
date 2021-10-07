
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete (meta);
    delete (j);
    delete(i);

    log("\n--------->WrongAnimal<-----------\n");
    const WrongAnimal *test = new WrongAnimal();
    const WrongAnimal *c = new WrongCat();

    std::cout << c->getType() << " " << std::endl;
    test->makeSound();
    c->makeSound();
    delete (test);
    delete (c);
	return (0);
}