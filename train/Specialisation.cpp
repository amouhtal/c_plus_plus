// NOTE emplate specialization special behavior for a particular data type.

#include <iostream>


template <class T>
void fun(T var)
{
	std::cout << "from var \n";	
}

template <>
void fun(int var)
{
	std::cout << "from var2 \n";	

}

int	main()
{
	fun< float >(2.6);
	fun< char >('c');
	fun(12);

}