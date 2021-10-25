#include <iostream>

struct Data
{
	int x;
	int y;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data *d = new Data();
	uintptr_t raw ;

	d->x = 5;
	d->y = 10;

	std::cout << d->x << std::endl;
	std::cout << d->y << std::endl;
	raw = serialize(d);
	std::cout << "serialize function called " << std::endl;
	Data *d2;

	d2 = deserialize(raw);
	std::cout << d2->x << std::endl;
	std::cout << d2->y << std::endl;
	std::cout << "deserialize function called " << std::endl;
	delete d;
}
