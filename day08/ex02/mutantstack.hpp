#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack(void) : std::stack<T, Container>() {}

	MutantStack(const MutantStack &other): std::stack<T, Container>(other){};
	MutantStack &operator=(MutantStack const &rhs)
	{
		this->c = rhs.c;
		return (*this);
	}

	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void)				{	return (this->c.begin());}
	const_iterator begin( void)	const	{	return (this->c.begin());}
	iterator end(void)					{	return this->c.end();	}
	const_iterator end( void )	const	{	return this->c.end();}
	reverse_iterator rbegin()			{	return this->c.rbegin();}
	reverse_iterator rbegin()	const	{	return this->c.rbegin();}
	reverse_iterator rend()				{	return this->c.rend();}
	reverse_iterator rend()		const	{	return this->c.rend();}

	// const_reverse_iterator 
	~MutantStack(void) {}
};

#endif