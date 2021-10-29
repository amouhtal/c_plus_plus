#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <iterator>
# include <vector>

template <typename T>
class MutantStack : public std::stack
{
	public :
		typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack( void ) {;};
	// MutantStack(const MutantStack &other)
	// {
	// 	*this = other;
	// }

	// MutantStack &operator=(const &other)
	// {

	// }

	iterator	begin( void )
	{
		return (this->c.begin());
	}

	iterator	end( void )
	{
		return this->c.end();
	}

	~MutantStack( void ){;}
};

#endif