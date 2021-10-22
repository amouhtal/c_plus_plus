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
	Data d;
	uintptr_t raw;

	d.x = 5;
	d.y = 10;

	raw = serialize(&d);

	Data *d2;

	d2 = deserialize(raw);
	std::cout << d2->x << std::endl;
	std::cout << d2->y << std::endl;
}
