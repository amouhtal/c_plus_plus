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
	if (_Numbers.size() == _N)
		throw FullContainer();
	_Numbers.push_back(number);
}

int Span::longestSpan()
{
	if (_Numbers.size() <= 1)
		throw NotEnoughNumbers();
	else
		return (*std::max_element(_Numbers.begin(), _Numbers.end()) - *std::min_element(_Numbers.begin(), _Numbers.end()) );
}

int Span::shortestSpan()
{
	int diff;

	if (_Numbers.size() <= 1)
		throw NotEnoughNumbers();
	std::vector<int> sort = _Numbers;
	std::sort(sort.begin(), sort.end());
	diff = sort[1] - sort[0];
	for (unsigned int i = 1; i < _N - 1; i++)
	{
		if (diff > (sort[i + 1] - sort[i]))
			diff = sort[i + 1] - sort[i];
	}
	return (diff);
}

Span::~Span()
{
}
