#include "mutantstack.hpp"
#include <iostream>

int main()
{
	typedef MutantStack<int, std::list<int> > _MutantStack;

	_MutantStack mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << "-----size-------" <<  std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << "--------------" <<  std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	_MutantStack::iterator it = mstack.begin();
	_MutantStack::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "--------------" <<  std::endl;
	
	_MutantStack::reverse_iterator rit = mstack.rbegin();
	_MutantStack::reverse_iterator rite = mstack.rend();
	--rit;
	++rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	_MutantStack::const_reverse_iterator const crit = mstack.rbegin() ;
	_MutantStack::const_reverse_iterator const crite = mstack.rend();
	(void)crit;
	(void)crite;
	
	std::stack<int, std::list<int> > s(mstack);

	MutantStack<int, std::list<int> > ss(mstack);
	std::cout << "------------\n";
	int value;
	while (!ss.empty())
	{
		value = ss.top() ;
		std::cout << value << std::endl;
		ss.pop();
	}
	
	return 0;
}