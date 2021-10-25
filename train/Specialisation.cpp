// NOTE emplate specialization special behavior for a particular data type.

#include <iostream>

template <typename T>
void fun(T nbr)
{
	std::cout << nbr;
	std::cout << " main fun\n";
}

template <typename T>
void fun(int nbr)
{
	std::cout << nbr;
	std::cout << " dereved fun\n";
}

template <typename T>
void fun()
{
	std::cout << " empty fun\n";
}

int	main()
{
	fun<int>(5);
	fun<float>(5.2f);
	fun<double>();
}