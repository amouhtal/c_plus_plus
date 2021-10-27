#include "span.hpp"

Span::Span()
{
	this->_Numbers.reserve(0);
}

Span::Span(unsigned int N) : _N(N)
{
	this->_Numbers.reserve(N);
}

void Span::addNumber(int number)
{
	_Numbers.push_back(number);
}

int Span::longestSpan()
{
	int bigest;
	int smallest;

	bigest = _Numbers[0];
	smallest = _Numbers[0];
	for (unsigned int i = 0; i < _N; i++)
	{
		if (i < _N - 1)
		{
			if (_Numbers[i + 1] > bigest)
			{
				bigest = _Numbers[i + 1];
			}
			if (_Numbers[i + 1] < smallest)
			{
				smallest = _Numbers[i + 1];
			}
		}
	}
	return (bigest - smallest);
}

int Span::shortestSpan()
{
	int shorte1;
	int shorte2;
	int temp;

	std::vector<int> sort = _Numbers;
	std::vector<int>::iterator ptr;

	if (sort.size() >= 2)
	{
		std::sort(sort.begin(), sort.end());
		temp = sort[1] - sort[0];
		for (unsigned int i = 1; i < _N - 1; i++)
		{
			// std::cout << sort[i + 1] - sort[i] << std::endl;
			if (temp > (sort[i + 1] - sort[i]))
				temp = sort[i + 1] - sort[i];
		}
	}
	return (temp);
}

Span::~Span()
{

}
