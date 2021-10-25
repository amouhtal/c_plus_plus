#include "iter.hpp"

void ft_printf(int a)
{
	std::cout << a << std::endl;
}

int	main()
{
	int arr[3] = {4, 5, 6};

	::iter(arr, 2, &ft_printf);
}