#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int count;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	count = 4;

	Animal *animals[count];
	for (int i = 0; i < count / 2; i++)
	{
		animals[i] = new Cat();
		animals[i + 2] = new Dog();
	}
	for (int i = 0; i < count; i++)
	{
			delete animals[i];
	}

	delete j;
	delete i;

	log("---------->Deep Copy Cat<----------");

	Cat c1 = Cat();
	c1.setbrain('c');
	Cat c2 = Cat(c1);

	std::cout << c1.getType() << std::endl;
	c1.getbrain();
	c2.getbrain();

	c2.setbrain('s');

	c1.getbrain();
	c2.getbrain();
	log("---------->Deep Copy Dog<----------");
	Dog d1 = Dog();
	d1.setbrain('d');
	Dog d2 = Dog(d1);

	std::cout << d1.getType() << std::endl;
	d1.getbrain();
	d2.getbrain();

	d2.setbrain('f');

	d1.getbrain();
	d2.getbrain();
	return (0);
}