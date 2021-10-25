#include <iostream>

template <typename Tmax>
Tmax max(Tmax nbr1, Tmax nbr2)
{
	return (nbr1 > nbr2 ? nbr1 : nbr2);
}

template <typename Tmin>
Tmin min(Tmin nbr1, Tmin nbr2)
{
	return (nbr1 < nbr2 ? nbr1 : nbr2);
}

template <typename Tswap>
void swap(Tswap nbr1, Tswap nbr2)
{
	Tswap temp;

	temp = nbr1;
	nbr1 = nbr2;
	nbr2 = temp;
}

int main(void)
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}