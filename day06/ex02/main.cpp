#include "Base.hpp"

Base *generate(void)
{
	srand(time(NULL));
	// Base *ret;

	int randNum;
	randNum = (rand() % 3);
	if (randNum == 0)
	{
		std::cout << "Type A Created" << std::endl;
		A *ret = new A();
		return (ret);
	}
	else if (randNum == 1)
	{
		std::cout << "Type is B Created" << std::endl;
		B *ret = new B();
		return (ret);
	}
	else if (randNum == 2)
	{
		std::cout << "Type is C Created" << std::endl;
		C *ret = new C();
		return (ret);
	}
	return 0;
}

void identify(Base *p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "Pointer Type is A" << std::endl;
	}
	b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "Pointer Type is B" << std::endl;
	}
	c = dynamic_cast<C *>(p);
	if (c)
	{
		std::cout << "Pointer Type is C" << std::endl;
	}
}

void identify(Base &p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "Reference Type is A" << std::endl;
	}
	catch (std::exception &e)
	{
		;
	}

	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "Reference Type is B" << std::endl;
	}
	catch (std::exception &e)
	{
		;
	}

	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "Reference Type is C" << std::endl;
	}
	catch (std::exception &e)
	{

	}
}

int main()
{
	Base *base = generate();
	Base *base2 = generate();
	std::cout << std::endl;
	identify(base);
	identify(*base2);


	// A *p = new A();

	// Base *p = new Base();

	// p = dynamic_cast<>

}
