#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// int count;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// count = 4;

	// Animal *animals[count];

	// for (int i = 0; i < count / 2; i++)
	// {
	// 	animals[i] = new Cat();
	// 	animals[i + 2] = new Dog();
	// }
	// for (int i = 0; i < count; i++)
	// {
	// 		delete animals[i];
	// }

	log("---------->Deep Copy<----------");

	Cat *c1 = new Cat();
	Cat *c2 = new Cat();
	c1->setbrain('p');
	c2 = c1;
	c1->getbrain();
	c2->getbrain();
	c2->setbrain('j');
	c1->getbrain();
	c2->getbrain();
	//std::cout << c1.getType() << std::endl;
	//delete j;//should not create a leak
	//delete i;
}