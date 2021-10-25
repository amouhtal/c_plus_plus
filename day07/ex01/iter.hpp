#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename T>
void iter(T *adr, int lenght, void(*fun)(T  ))
{
	for (size_t i = 0; i < lenght; i++)
	{
		fun (adr[i]);
	}
}

#endif