#include <iostream>
#include <exception>


int main()
{
	int * a = new int[2](;
	a[0] = 15;
	a[1] = 14;
	a[2] = 11;

	std::cout << a[0] << "\n";
	std::cout << a[1] << "\n";
	std::cout << a[2] << "\n";
}
