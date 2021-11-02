#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <algorithm>
# include <list>
# include <vector>

class Span
{
	private :
		unsigned int _N;
		std::vector<int> _Numbers;
	public :
		Span();
		Span(unsigned int N);
		class FullContainer : public std::exception
		{
			const char *what() const throw(){
				return ("Full container");
			}
		};
		class NotEnoughNumbers : public std::exception
		{
			const char *what() const throw(){
				return ("Not Enough Numbers");
			}
		};
		void addNumber(int number);

		template<typename T>
		void	addNumber(T f, T s){
			size_t dis = std::distance(f, s);
			if (dis + _Numbers.size() <= _N)
				_Numbers.insert(_Numbers.end(), f, s);
			else
				throw FullContainer();
		};
		int longestSpan();
		int shortestSpan();
		~Span();
};

#endif