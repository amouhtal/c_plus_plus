#ifndef __MAIN__HPP
# define __MAIN__HPP
# include <iostream>

template <typename Tswap>
void swap(Tswap nbr1, Tswap nbr2)
{
	Tswap temp;

	temp = nbr1;
	nbr1 = nbr2;
	nbr2 = temp;
}

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

#endif